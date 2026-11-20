#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                  GGS__5B_string_5D_ & ioArgument_ioToolProductFileList,
                                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_useOneHugeHeader_28676 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 707)) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_28769 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_28769.hasCurrentObject ()) {
    GGS_stringset var_inclusionSet_28836 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_28769.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 711)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 711)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_implementationString_28991 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_28769.current (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_28836, var_implementationString_28991, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 712)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_28769.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 713)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_inclusionSet_28836.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_28769.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 714))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 714)) ;
          }
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_useOneHugeHeader_28676.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 717)) ;
            temp_3.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 717)) ;
            var_inclusionSet_28836 = temp_3 ;
          }
        }
        GGS_string var_header_29226 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_28836.getter_stringArray (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 720)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 719))) ;
        var_implementationString_28991.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_28769.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 722)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 722)) ;
        GGS_string var_fileName_29433 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_28769.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 723)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 723)) ;
        ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_29433  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 724)) ;
        {
        GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_29433, var_header_29226.add_operation (var_implementationString_28991, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 728)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 725)) ;
        }
        ioArgument_ioToolProductFileList.plusPlusAssignOperation (var_fileName_29433  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 730)) ;
      }
    }
    enumerator_28769.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externProcedureDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                         GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 75)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externProcedureDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externProcedureDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  const GGS_externProcedureDeclarationAST temp_1 = this ;
  result = GGS_string ("routine ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 81)).add_operation (extensionGetter_keyRepresentation (temp_1.readProperty_mFormalArgumentListAST (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 81)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 81)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externProcedureDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_4449 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_4531 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_4531.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_4625 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4531.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_4625, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 97)) ;
    }
    var_routineSignature_4449.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_4531.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_4625, enumerator_4531.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4531.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 98)) ;
    enumerator_4531.gotoNextObject () ;
  }
  {
  const GGS_externProcedureDeclarationAST temp_1 = this ;
  const GGS_externProcedureDeclarationAST temp_2 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_1.readProperty_mRoutineName (), var_routineSignature_4449, temp_2.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 106)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externProcedureDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                  const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterForGeneration_5D_ var_formalArgumentList_5692 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_5756 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_5838 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_5838.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_5874 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_5838.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 126)) ;
    var_formalArgumentList_5692.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_5838.current (HERE).readProperty_mFormalSelector (), enumerator_5838.current (HERE).readProperty_mFormalArgumentPassingMode (), var_parameterType_5874, enumerator_5838.current (HERE).readProperty_mFormalArgumentName (), enumerator_5838.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 127)) ;
    var_routineSignature_5756.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_5838.current (HERE).readProperty_mFormalSelector (), var_parameterType_5874, enumerator_5838.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_5838.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 134)) ;
    enumerator_5838.gotoNextObject () ;
  }
  const GGS_externProcedureDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_6379 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_5756, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 141)) ;
  GGS_lstring var_nameForUsefulness_6488 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_6379, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 143)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6488, var_nameForUsefulness_6488, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 144)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_externProcedureDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6488  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 146)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_routinePrototypeDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (GGS_string ("proc ").add_operation (var_mangledName_6379.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 150)), GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_6379.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extern-procedure-declaration.galgas4", 152)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 152)), var_mangledName_6379.readProperty_string (), var_formalArgumentList_5692, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 149)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@routinePrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extern-procedure-declaration.galgas4", 175)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                  GGS_string & outArgument_outHeader,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_routinePrototypeDeclarationForGeneration temp_0 = this ;
  const GGS_routinePrototypeDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_routineMangledName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 182))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject??'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject_3F__3F_ (const GGS_lstring constinArgument_inProjectSourceFilePath,
                                             const GGS_string constinArgument_inSourceToAnalyze,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*** Parsing project files"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 126)) ;
  }
  GGS_projectSettings var_projectSettings_5004 ;
  var_projectSettings_5004.drop () ;
  cGrammar_projectComponentGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inProjectSourceFilePath, var_projectSettings_5004  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 127)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_compileProject_3F__3F__3F_ (constinArgument_inProjectSourceFilePath, constinArgument_inSourceToAnalyze, var_projectSettings_5004, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 129)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject???'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject_3F__3F__3F_ (const GGS_lstring constinArgument_inProjectSourceFilePath,
                                         const GGS_string constinArgument_inSourceToAnalyze,
                                         const GGS_projectSettings constinArgument_inProjectSettings,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasDeclarationAST var_declarationAST_6313 = GGS_galgasDeclarationAST::init (inCompiler COMMA_HERE) ;
  {
  routine_appendPredefinedTypesASTs_26_ (var_declarationAST_6313, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 156)) ;
  }
  var_declarationAST_6313.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_buildOptionValueDeclarationAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("buildOptionValue").getter_nowhere (SOURCE_FILE ("galgasProgram.galgas4", 157)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 157)) ;
  var_declarationAST_6313.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_buildOptionStringDeclarationAST::init_21_isPredefined_21_buildOptionStringName_21_buildOptionValueName (GGS_bool (true), GGS_string ("buildOptionString").getter_nowhere (SOURCE_FILE ("galgasProgram.galgas4", 160)), GGS_string ("buildOptionValue"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 158)) ;
  cGrammar_galgas_34_Grammar::_performSourceStringParsing_ (inCompiler, GGS_filewrapper (gWrapperDirectory_0_typeGenerationTemplate).getter_textFileContentsAtPath (GGS_string ("galgas-predefined-entities.txt"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 165)), GGS_string ("GALGAS predefined types"), var_declarationAST_6313  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 164)) ;
  GGS_string var_sourceDirectory_6989 = constinArgument_inProjectSourceFilePath.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 168)).add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 168)) ;
  GGS__5B_string_5D_ temp_0 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 169)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("galgas4")  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 169)) ;
  GGS__5B_string_5D_ var_projectSourceList_7083 = var_sourceDirectory_6989.getter_regularFilesWithExtensions (GGS_bool (true), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 169)) ;
  UpEnumerator__5B_string_5D_ enumerator_7199 (var_projectSourceList_7083) ;
  while (enumerator_7199.hasCurrentObject ()) {
    GGS_string var_absoluteSourcePath_7228 = enumerator_7199.current (HERE).getter_absolutePathFromPath (var_sourceDirectory_6989 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 171)) ;
    cGrammar_galgas_34_Grammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteSourcePath_7228, GGS_location::class_func_nowhere (SOURCE_FILE ("galgasProgram.galgas4", 172)), inCompiler COMMA_HERE), var_declarationAST_6313  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 172)) ;
    enumerator_7199.gotoNextObject () ;
  }
  GGS_string var_toolCppDirectory_7441 = var_sourceDirectory_6989.add_operation (GGS_string ("/tool-sources"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 175)) ;
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 176)) ;
  temp_1.plusPlusAssignOperation (GGS_string ("cpp")  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 176)) ;
  temp_1.plusPlusAssignOperation (GGS_string ("h")  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 176)) ;
  GGS__5B_string_5D_ var_handCodedSourceToolFileList_7510 = var_toolCppDirectory_7441.getter_regularFilesWithExtensions (GGS_bool (true), temp_1 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 176)) ;
  {
  routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (var_declarationAST_6313.readProperty_mSyntaxComponentList (), var_declarationAST_6313.readProperty_mSyntaxExtensions (), var_declarationAST_6313.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 187)) ;
  }
  GGS_usefulEntitiesGraph var_usefulEntitiesGraph_8539 = GGS_usefulEntitiesGraph::init (inCompiler COMMA_HERE) ;
  GGS_string var_buildDirectoryName_8599 = GGS_string ("build") ;
  GGS_string var_absoluteBuildDirectory_8634 = constinArgument_inProjectSourceFilePath.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 195)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 195)).add_operation (var_buildDirectoryName_8599, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 195)) ;
  GGS_string var_productDirectory_8749 = var_absoluteBuildDirectory_8634.add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 196)) ;
  GGS__5B_string_5D_ var_appProductFileList_8819 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_lstring_5D_ var_usefulnessRootEntities_8861 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  GGS_semanticContext var_semanticContext_8913 ;
  GGS_unifiedTypeMap var_typeMap_8951 ;
  GGS__5B_semanticDeclarationForGeneration_5D_ var_semanticDeclarationSortedListForGeneration_9001 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 202)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      routine_compileSemanticDeclarationsGalgas_26__26__3F__3F__3F__21__21__21_ (var_usefulnessRootEntities_8861, var_usefulEntitiesGraph_8539, var_productDirectory_8749, var_declarationAST_6313, constinArgument_inProjectSettings, var_semanticContext_8913, var_typeMap_8951, var_semanticDeclarationSortedListForGeneration_9001, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 203)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    var_semanticDeclarationSortedListForGeneration_9001 = GGS__5B_semanticDeclarationForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    var_semanticContext_8913 = GGS_semanticContext::init_21_ (constinArgument_inProjectSettings, inCompiler COMMA_HERE) ;
    var_typeMap_8951 = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
  }
  GGS_optionComponentMapForGeneration var_optionComponentMapForGeneration_9592 ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 220)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (var_declarationAST_6313.readProperty_mGUIComponentList (), var_semanticContext_8913, var_optionComponentMapForGeneration_9592, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 221)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    var_optionComponentMapForGeneration_9592 = GGS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 230)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_string var_projectVersionString_9981 = constinArgument_inProjectSettings.readProperty_majorVersion ().getter_bigint (SOURCE_FILE ("galgasProgram.galgas4", 231)).getter_string (SOURCE_FILE ("galgasProgram.galgas4", 231)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 231)).add_operation (constinArgument_inProjectSettings.readProperty_minorVersion ().getter_bigint (SOURCE_FILE ("galgasProgram.galgas4", 232)).getter_string (SOURCE_FILE ("galgasProgram.galgas4", 232)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 232)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 232)).add_operation (constinArgument_inProjectSettings.readProperty_revision ().getter_bigint (SOURCE_FILE ("galgasProgram.galgas4", 233)).getter_string (SOURCE_FILE ("galgasProgram.galgas4", 233)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 233)) ;
      GGS_programComponentForGeneration var_programComponentForGeneration_10489 ;
      {
      routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (var_usefulnessRootEntities_8861, var_usefulEntitiesGraph_8539, var_declarationAST_6313.readProperty_mPrologueDeclarationList (), var_declarationAST_6313.readProperty_mSourceRuleList (), var_declarationAST_6313.readProperty_mEpilogueDeclarationList (), var_semanticContext_8913, var_typeMap_8951, var_projectVersionString_9981, var_programComponentForGeneration_10489, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 234)) ;
      }
      var_semanticDeclarationSortedListForGeneration_9001.plusPlusAssignOperation (var_programComponentForGeneration_10489  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 245)) ;
    }
  }
  {
  routine_checkUsefulEntities_3F__3F__3F_ (var_usefulEntitiesGraph_8539, var_usefulnessRootEntities_8861, var_productDirectory_8749, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 248)) ;
  }
  GGS_string var_typeDumpFilePath_10856 = var_productDirectory_8749.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 250)).add_operation (constinArgument_inProjectSourceFilePath.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 250)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 250)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 250)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_buildOptionValue::class_func_outputHTMLTypeListFile (SOURCE_FILE ("galgasProgram.galgas4", 251)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_stringset var_firstLetterSet_11040 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      UpEnumerator_unifiedTypeMap enumerator_11078 (var_typeMap_8951) ;
      while (enumerator_11078.hasCurrentObject ()) {
        var_firstLetterSet_11040.plusPlusAssignOperation (enumerator_11078.current (HERE).readProperty_lkey ().readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 254)).getter_string (SOURCE_FILE ("galgasProgram.galgas4", 254))  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 254)) ;
        enumerator_11078.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_11183 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_11220 = GGS_char (utf32 (32)) ;
      UpEnumerator_unifiedTypeMap enumerator_11262 (var_typeMap_8951) ;
      while (enumerator_11262.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_11220.objectCompare (enumerator_11262.current (HERE).readProperty_lkey ().readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 259)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            var_currentFirstLetter_11220 = enumerator_11262.current (HERE).readProperty_lkey ().readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 260)) ;
            var_tableOfTypeString_11183.plusAssignOperation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_11220.getter_uint (SOURCE_FILE ("galgasProgram.galgas4", 261)).getter_string (SOURCE_FILE ("galgasProgram.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 261)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 261)) ;
            var_tableOfTypeString_11183.plusAssignOperation(GGS_string ("\"><b>").add_operation (var_currentFirstLetter_11220.getter_string (SOURCE_FILE ("galgasProgram.galgas4", 262)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 262)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 262)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 262)) ;
          }
        }
        var_tableOfTypeString_11183.plusAssignOperation(function_linkForType (enumerator_11262.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 264)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 264)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 264)) ;
        enumerator_11262.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_11658 = GGS_string (filewrapperTemplate_typeDumpGenerationTemplate_typeDump (inCompiler, constinArgument_inProjectSourceFilePath.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 267)), var_typeMap_8951, var_firstLetterSet_11040, var_tableOfTypeString_11183 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 266))) ;
      GGS_bool joker_11920 ; // Joker input parameter
      var_typeDumpString_11658.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_10856, joker_11920, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 272)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_10856, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 274)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_uint (uint32_t (0U)).objectCompare (GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 277)))).operator_and (GGS_bool (ComparisonKind::equal, constinArgument_inSourceToAnalyze.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas4", 277)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (var_typeMap_8951, var_declarationAST_6313.readProperty_mDeclarationList (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 278)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::equal, GGS_uint (uint32_t (0U)).objectCompare (GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 284)))).operator_and (GGS_bool (ComparisonKind::equal, constinArgument_inSourceToAnalyze.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas4", 284)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      {
      routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F_ (var_typeMap_8951, var_absoluteBuildDirectory_8634, var_buildDirectoryName_8599, var_optionComponentMapForGeneration_9592, var_appProductFileList_8819, var_semanticDeclarationSortedListForGeneration_9001, var_declarationAST_6313.readProperty_mSourceRuleList (), constinArgument_inProjectSettings, constinArgument_inProjectSourceFilePath.readProperty_string (), GGS_string ("../sources/tool-sources"), var_handCodedSourceToolFileList_7510, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 285)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration??absoluteBuildDir?buildDirName????????'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F_ (const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                                                                                        const GGS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                        const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                        const GGS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                                                        const GGS__5B_string_5D_ constinArgument_inAppProductFileList,
                                                                                                        const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                                        const GGS__5B_programRuleAST_5D_ constinArgument_inSourceRuleList,
                                                                                                        const GGS_projectSettings constinArgument_inProjectSettings,
                                                                                                        const GGS_string constinArgument_inProjectSourceFilePath,
                                                                                                        const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                        const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_appProductFileList_13901 = constinArgument_inAppProductFileList ;
  {
  routine_println_3F_ (GGS_string ("*** Generating files"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 318)) ;
  }
  GGS_stringset var_allProductFileSet_14047 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_userHeadersDir_14157 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/user-headers"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 321)) ;
  var_userHeadersDir_14157.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 322)) ;
  GGS_string var_productDirectory_14317 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 324)) ;
  GGS__5B_string_5D_ var_swiftAppProductFileList_14389 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 326)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_generateAllGuiComponentsGalgas_33__3F__3F__26_swift (constinArgument_inOptionComponentMapForGeneration, var_productDirectory_14317, var_swiftAppProductFileList_14389, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 327)) ;
      }
    }
  }
  GGS_sortedLexicalStyleArray var_sortedLexicalStyleArray_14711 = GGS_sortedLexicalStyleArray::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lexicalStyleMap enumerator_14763 (constinArgument_inProjectSettings.readProperty_lexicalStyleMap ()) ;
  while (enumerator_14763.hasCurrentObject ()) {
    var_sortedLexicalStyleArray_14711.plusPlusAssignOperation (GGS_sortedLexicalStyle::init_21__21__21_ (enumerator_14763.current_lkey (HERE).readProperty_string (), enumerator_14763.current_mComment (HERE).readProperty_string (), enumerator_14763.current_mStyleIndex (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 336)) ;
    enumerator_14763.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_toolCppFileList_15002 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_toolHeaderFileList_15040 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  {
  routine_generatePredefinedTypeFiles_3F__3F__3F__26__26__26_ (var_productDirectory_14317, constinArgument_inSemanticDeclarationSortedListForGeneration, var_sortedLexicalStyleArray_14711, var_toolHeaderFileList_15040, var_toolCppFileList_15002, var_allProductFileSet_14047, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 342)) ;
  }
  {
  routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26_swift_26__26__26_ (constinArgument_inTypeMap, var_productDirectory_14317, constinArgument_inSemanticDeclarationSortedListForGeneration, var_swiftAppProductFileList_14389, var_toolCppFileList_15002, var_toolHeaderFileList_15040, var_allProductFileSet_14047, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 350)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_uint (uint32_t (0U)).objectCompare (GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 361)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_handledExtensionSet_15663 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_programRuleAST_5D_ enumerator_15706 (constinArgument_inSourceRuleList) ;
      while (enumerator_15706.hasCurrentObject ()) {
        var_handledExtensionSet_15663.plusPlusAssignOperation (enumerator_15706.current (HERE).readProperty_mSourceFileExtension ().readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 364)) ;
        enumerator_15706.gotoNextObject () ;
      }
      {
      routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F_appProductFileList_3F_swiftAppProductFileList_3F__3F__3F__26_ (constinArgument_inAbsoluteBuildDirectory, constinArgument_inBuildDirectoryName, constinArgument_inProjectSourceFilePath, constinArgument_inProjectSettings, var_toolCppFileList_15002, var_toolHeaderFileList_15040, var_appProductFileList_13901, var_swiftAppProductFileList_14389, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, var_handledExtensionSet_15663, var_allProductFileSet_14047, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 366)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint (uint32_t (0U)).objectCompare (GGS_application::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas4", 382)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_stringset var_allActualFileSet_16380 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_string_5D_ enumerator_16456 (var_productDirectory_14317.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("galgasProgram.galgas4", 384))) ;
      while (enumerator_16456.hasCurrentObject ()) {
        var_allActualFileSet_16380.plusPlusAssignOperation (enumerator_16456.current (HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 385)) ;
        enumerator_16456.gotoNextObject () ;
      }
      GGS_stringset var_uselessFileSet_16510 = var_allActualFileSet_16380.subtract_operation (var_allProductFileSet_14047, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 387)) ;
      UpEnumerator_stringset enumerator_16573 (var_uselessFileSet_16510) ;
      while (enumerator_16573.hasCurrentObject ()) {
        {
        GGS_string::class_method_deleteFile (var_productDirectory_14317.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 389)).add_operation (enumerator_16573.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 389)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 389)) ;
        }
        enumerator_16573.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'makefile-arm64-linux-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_6 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-arm64-linux-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_6 [1] = {
  nullptr
} ;

//--- Directory 'makefile-arm64-linux-on-macosx'

const cDirectoryWrapper gWrapperDirectory_6_typeDumpGenerationTemplate (
  "makefile-arm64-linux-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_6,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_6
) ;

//--- All files of 'makefile-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'makefile-macosx'

const cDirectoryWrapper gWrapperDirectory_1_typeDumpGenerationTemplate (
  "makefile-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_1,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_1
) ;

//--- All files of 'makefile-unix' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_5 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-unix' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_5 [1] = {
  nullptr
} ;

//--- Directory 'makefile-unix'

const cDirectoryWrapper gWrapperDirectory_5_typeDumpGenerationTemplate (
  "makefile-unix",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_5,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_5
) ;

//--- All files of 'makefile-win32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-win32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'makefile-win32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_2_typeDumpGenerationTemplate (
  "makefile-win32-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_2,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_2
) ;

//--- All files of 'makefile-x86linux32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_8 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_8 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_8_typeDumpGenerationTemplate (
  "makefile-x86linux32-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_8,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_8
) ;

//--- All files of 'makefile-x86linux64-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_7 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux64-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_7 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux64-on-macosx'

const cDirectoryWrapper gWrapperDirectory_7_typeDumpGenerationTemplate (
  "makefile-x86linux64-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_7,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_7
) ;

//--- All files of 'Base.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_4 [1] = {
  nullptr
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_4 [1] = {
  nullptr
} ;

//--- Directory 'Base.lproj'

const cDirectoryWrapper gWrapperDirectory_4_typeDumpGenerationTemplate (
  "Base.lproj",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_4,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_4
) ;

//--- All files of 'project-xcode-swiftui' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'project-xcode-swiftui' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_typeDumpGenerationTemplate,
  nullptr
} ;

//--- Directory 'project-xcode-swiftui'

const cDirectoryWrapper gWrapperDirectory_3_typeDumpGenerationTemplate (
  "project-xcode-swiftui",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_3,
  1,
  gWrapperAllDirectories_typeDumpGenerationTemplate_3
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [8] = {
  & gWrapperDirectory_6_typeDumpGenerationTemplate,
  & gWrapperDirectory_1_typeDumpGenerationTemplate,
  & gWrapperDirectory_5_typeDumpGenerationTemplate,
  & gWrapperDirectory_2_typeDumpGenerationTemplate,
  & gWrapperDirectory_8_typeDumpGenerationTemplate,
  & gWrapperDirectory_7_typeDumpGenerationTemplate,
  & gWrapperDirectory_3_typeDumpGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  7,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate typeDump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeDumpGenerationTemplate_typeDump (Compiler * inCompiler,
                                                                    const GGS_string & in_PROJECT_5F_NAME,
                                                                    const GGS_unifiedTypeMap & in_UNIFIED_5F_TYPE_5F_MAP,
                                                                    const GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                    const GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">\n<title>Types of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n  border-collapse: collapse ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n  border-top: 2px solid #666666 ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n  border-top: 1px solid #999999 ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Types of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</h1>\n<p>This document lists all ") ;
  result.appendString (in_UNIFIED_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue ()) ;
  result.appendString (" defined types, sorted by name.</p>\n<p>") ;
  GGS_uint index_1069_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_1069 (in_FIRST_5F_LETTER_5F_SET) ;
    while (enumerator_1069.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_1069.current_key (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1069.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      enumerator_1069.gotoNextObject () ;
      if (enumerator_1069.hasCurrentObject ()) {
        result.appendString (" - ") ;
      }
      index_1069_.increment () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n<table class=\"result\">\n") ;
  GGS_uint index_1286_ (0) ;
  if (in_UNIFIED_5F_TYPE_5F_MAP.isValid ()) {
    UpEnumerator_unifiedTypeMap enumerator_1286 (in_UNIFIED_5F_TYPE_5F_MAP) ;
    while (enumerator_1286.hasCurrentObject ()) {
      result.appendString ("\n<tr><td colspan=\"2\" class=\"result_title\"><a name=\"") ;
      result.appendString (enumerator_1286.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\">@") ;
      result.appendString (enumerator_1286.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</a></td></tr>\n<tr class=\"result_line\">\n  <td>Kind</td>\n  <td>\n    ") ;
      const GalgasBool test_0 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 72)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 72)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("abstract ") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      switch (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).readProperty_typeKind ().enumValue ()) {
      case GGS_typeKindEnum::Enumeration::invalid :
        break ;
      case GGS_typeKindEnum::Enumeration::enum_classType :
        {
          result.appendString ("class") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_enumType :
        {
          GGS_constantIndexMap extractedValue_1596__0 ;
          callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).readProperty_typeKind ().getAssociatedValuesFor_enumType (extractedValue_1596__0) ;
          result.appendString ("enum") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_mapType :
        {
          result.appendString ("map") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_optionsetType :
        {
          result.appendString ("optionset") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_structType :
        {
          result.appendString ("struct") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_graphType :
        {
          result.appendString ("graph") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_externType :
        {
          result.appendString ("extern") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_otherType :
        {
          result.appendString ("other type") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_packageType :
        {
          result.appendString ("package") ;
        }
        break ;
      case GGS_typeKindEnum::Enumeration::enum_weakReferenceType :
        {
          GGS_unifiedTypeMapEntry extractedValue_1856__0 ;
          callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).readProperty_typeKind ().getAssociatedValuesFor_weakReferenceType (extractedValue_1856__0) ;
          result.appendString ("weak reference") ;
        }
        break ;
      }
      result.appendString ("\n</td></tr>\n") ;
      const GalgasBool test_1 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 86)).readProperty_superType ().getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 86)).operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 86)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Superclass</td><td>") ;
        result.appendString (function_linkForType (extensionGetter_definition (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 87)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 87)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 87)).stringValue ()) ;
        result.appendString ("</td></tr>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n<tr class=\"result_line\"><td>Operators</td>\n  <td>\n    ") ;
      const GalgasBool test_2 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 91)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 91)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 91)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("addition: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue ()) ;
        result.appendString (" + ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_3 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 94)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 94)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 94)).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("substraction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 95)).stringValue ()) ;
        result.appendString (" - ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 95)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 95)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_4 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 97)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("multiplication: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 98)).stringValue ()) ;
        result.appendString (" * ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 98)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 98)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_5 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 100)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).boolEnum () ;
      switch (test_5) {
      case GalgasBool::boolTrue : {
        result.appendString ("division: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 101)).stringValue ()) ;
        result.appendString (" / ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 101)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 101)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_6 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 103)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).boolEnum () ;
      switch (test_6) {
      case GalgasBool::boolTrue : {
        result.appendString ("modulo: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 104)).stringValue ()) ;
        result.appendString (" <b>mod</b> ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 104)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 104)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_7 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 106)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).boolEnum () ;
      switch (test_7) {
      case GalgasBool::boolTrue : {
        result.appendString ("left shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 107)).stringValue ()) ;
        result.appendString (" &lt;&lt; ") ;
        result.appendString (function_linkForType (GGS_string ("uint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 107)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 107)).stringValue ()) ;
        result.appendString ("<br><br>left shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (" &lt;&lt; ") ;
        result.appendString (function_linkForType (GGS_string ("bigint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 108)).stringValue ()) ;
        result.appendString ("<br><br>right shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue ()) ;
        result.appendString (" &gt;&gt; ") ;
        result.appendString (function_linkForType (GGS_string ("uint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue ()) ;
        result.appendString ("<br><br>right shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 110)).stringValue ()) ;
        result.appendString (" &gt;&gt; ") ;
        result.appendString (function_linkForType (GGS_string ("bigint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 110)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 110)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_8 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 112)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).boolEnum () ;
      switch (test_8) {
      case GalgasBool::boolTrue : {
        result.appendString ("prefix +: + ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_9 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 115)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).boolEnum () ;
      switch (test_9) {
      case GalgasBool::boolTrue : {
        result.appendString ("prefix -: - ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 116)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 116)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_10 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 118)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 118)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 118)).boolEnum () ;
      switch (test_10) {
      case GalgasBool::boolTrue : {
        result.appendString ("bit wise negation: ~ ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 119)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 119)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_11 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 121)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 121)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 121)).boolEnum () ;
      switch (test_11) {
      case GalgasBool::boolTrue : {
        result.appendString ("boolean and: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 122)).stringValue ()) ;
        result.appendString (" &amp; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 122)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 122)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_12 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 124)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 124)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 124)).boolEnum () ;
      switch (test_12) {
      case GalgasBool::boolTrue : {
        result.appendString ("inclusive or: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" | ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 125)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_13 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 127)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).boolEnum () ;
      switch (test_13) {
      case GalgasBool::boolTrue : {
        result.appendString ("exclusive or: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 128)).stringValue ()) ;
        result.appendString (" ^ ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 128)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 128)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_14 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 130)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).boolEnum () ;
      switch (test_14) {
      case GalgasBool::boolTrue : {
        result.appendString ("boolean negation: <b>not</b> ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 131)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 131)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("equality test: ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (" == ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (" &rarr; ") ;
      result.appendString (function_linkForType (GGS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue ()) ;
      result.appendString ("<br><br>inequality test: ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 134)).stringValue ()) ;
      result.appendString (" != ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 134)).stringValue ()) ;
      result.appendString (" &rarr; ") ;
      result.appendString (function_linkForType (GGS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 134)).stringValue ()) ;
      result.appendString ("<br><br>") ;
      const GalgasBool test_15 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 135)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("typeDump.html.galgasTemplate", 135)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 135)).boolEnum () ;
      switch (test_15) {
      case GalgasBool::boolTrue : {
        result.appendString ("lower than test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue ()) ;
        result.appendString (" &lt; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GGS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue ()) ;
        result.appendString ("<br><br>lower or equal test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 137)).stringValue ()) ;
        result.appendString (" &lt;= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 137)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GGS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 137)).stringValue ()) ;
        result.appendString ("<br><br>greater than test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue ()) ;
        result.appendString (" &gt; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GGS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue ()) ;
        result.appendString ("<br><br>greater or equal test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue ()) ;
        result.appendString (" &gt;= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GGS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_16 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 141)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).boolEnum () ;
      switch (test_16) {
      case GalgasBool::boolTrue : {
        result.appendString ("+= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (" += ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_17 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 144)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).boolEnum () ;
      switch (test_17) {
      case GalgasBool::boolTrue : {
        result.appendString ("-= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 145)).stringValue ()) ;
        result.appendString (" -= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 145)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_18 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 147)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 147)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 147)).boolEnum () ;
      switch (test_18) {
      case GalgasBool::boolTrue : {
        result.appendString ("*= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 148)).stringValue ()) ;
        result.appendString (" *= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 148)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_19 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 150)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 150)) COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 150)).boolEnum () ;
      switch (test_19) {
      case GalgasBool::boolTrue : {
        result.appendString ("/= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 151)).stringValue ()) ;
        result.appendString (" /= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 151)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n</td></tr>\n") ;
      const GalgasBool test_20 = GGS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 156)).readProperty_enumerationDescriptorList ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_20) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td><b>for</b> constants</td><td>") ;
        GGS_uint index_7555_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 158)).readProperty_enumerationDescriptorList ().isValid ()) {
          UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_7555 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 158)).readProperty_enumerationDescriptorList ()) ;
          while (enumerator_7555.hasCurrentObject ()) {
            result.appendString (function_linkForType (extensionGetter_definition (enumerator_7555.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 159)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 159)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_7555.current_entry (HERE).readProperty_mEnumerationName ().stringValue ()) ;
            result.appendString ("<br>") ;
            enumerator_7555.gotoNextObject () ;
            index_7555_.increment () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_21 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 163)).readProperty_typeForEnumeratedElement ().getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 163)).operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 163)).boolEnum () ;
      switch (test_21) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td><b>for</b> enumeration type</td><td>") ;
        result.appendString (function_linkForType (extensionGetter_definition (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 164)).readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 164)).stringValue ()) ;
        result.appendString ("</td></tr>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_22 = GGS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 167)).readProperty_classFunctionMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 167)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_22) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Class Functions</td><td>") ;
        GGS_uint index_8172_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 169)).readProperty_classFunctionMap ().isValid ()) {
          UpEnumerator_classFunctionMap enumerator_8172 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 169)).readProperty_classFunctionMap ()) ;
          while (enumerator_8172.hasCurrentObject ()) {
            result.appendString ("<b>class function</b> ") ;
            result.appendString (enumerator_8172.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GGS_uint index_8254_ (0) ;
            if (enumerator_8172.current_mArgumentTypeList (HERE).isValid ()) {
              UpEnumerator__5B_functionSignatureElement_5D_ enumerator_8254 (enumerator_8172.current_mArgumentTypeList (HERE)) ;
              while (enumerator_8254.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp; <span class=\"selecteur\">\?") ;
                const GalgasBool test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_8254.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                switch (test_23) {
                case GalgasBool::boolTrue : {
                  result.appendString (enumerator_8254.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 173)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_8254.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 174)).stringValue ()) ;
                result.appendString ("</span> ") ;
                result.appendString (enumerator_8254.current_entry (HERE).readProperty_mFormalArgumentName ().stringValue ()) ;
                enumerator_8254.gotoNextObject () ;
                index_8254_.increment () ;
              }
            }
            result.appendString (" &rarr; ") ;
            result.appendString (function_linkForType (extensionGetter_definition (enumerator_8172.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 176)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 176)).stringValue ()) ;
            result.appendString ("<br><br>") ;
            enumerator_8172.gotoNextObject () ;
            index_8172_.increment () ;
          }
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_24 = GGS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 180)).readProperty_getterMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 180)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_24) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Getters</td><td>") ;
        GGS_uint index_8905_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 182)).readProperty_getterMap ().isValid ()) {
          UpEnumerator_getterMap enumerator_8905 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 182)).readProperty_getterMap ()) ;
          while (enumerator_8905.hasCurrentObject ()) {
            switch (enumerator_8905.current_mKind (HERE).enumValue ()) {
            case GGS_methodKind::Enumeration::invalid :
              break ;
            case GGS_methodKind::Enumeration::enum_definedAsMember :
              {
              }
              break ;
            case GGS_methodKind::Enumeration::enum_definedAsExtension :
              {
                result.appendString ("(extension) ") ;
              }
              break ;
            }
            switch (enumerator_8905.current_mQualifier (HERE).enumValue ()) {
            case GGS_methodQualifier::Enumeration::invalid :
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract :
              {
                result.appendString ("<b>abstract</b> ") ;
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isBasic :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isBasicFinal :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isInherited :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtual :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding :
              {
                result.appendString ("<b>override</b> ") ;
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract :
              {
                result.appendString ("<b>abstract override</b> ") ;
              }
              break ;
            }
            result.appendString ("<b>getter</b> ") ;
            result.appendString (enumerator_8905.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GGS_uint index_9358_ (0) ;
            if (enumerator_8905.current_mArgumentTypeList (HERE).isValid ()) {
              UpEnumerator__5B_functionSignatureElement_5D_ enumerator_9358 (enumerator_8905.current_mArgumentTypeList (HERE)) ;
              while (enumerator_9358.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp; \?<span class=\"selecteur\">") ;
                const GalgasBool test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_9358.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                switch (test_25) {
                case GalgasBool::boolTrue : {
                  result.appendString (enumerator_9358.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 199)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_9358.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 200)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_9358.current_entry (HERE).readProperty_mFormalArgumentName ().stringValue ()) ;
                enumerator_9358.gotoNextObject () ;
                index_9358_.increment () ;
              }
            }
            result.appendString (" &rarr; ") ;
            result.appendString (function_linkForType (extensionGetter_definition (enumerator_8905.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 202)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 202)).stringValue ()) ;
            result.appendString ("<br><br>") ;
            enumerator_8905.gotoNextObject () ;
            index_8905_.increment () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_26 = GGS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 207)).readProperty_instanceMethodMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 207)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_26) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Methods</td><td>") ;
        GGS_uint index_10018_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 209)).readProperty_instanceMethodMap ().isValid ()) {
          UpEnumerator_instanceMethodMap enumerator_10018 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 209)).readProperty_instanceMethodMap ()) ;
          while (enumerator_10018.hasCurrentObject ()) {
            switch (enumerator_10018.current_mKind (HERE).enumValue ()) {
            case GGS_methodKind::Enumeration::invalid :
              break ;
            case GGS_methodKind::Enumeration::enum_definedAsMember :
              {
              }
              break ;
            case GGS_methodKind::Enumeration::enum_definedAsExtension :
              {
                result.appendString ("(extension) ") ;
              }
              break ;
            }
            switch (enumerator_10018.current_mQualifier (HERE).enumValue ()) {
            case GGS_methodQualifier::Enumeration::invalid :
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract :
              {
                result.appendString ("<b>abstract</b> ") ;
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isBasic :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isBasicFinal :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isInherited :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtual :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding :
              {
                result.appendString ("<b>override</b> ") ;
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract :
              {
                result.appendString ("<b>abstract override</b> ") ;
              }
              break ;
            }
            result.appendString ("<b>proc</b> ") ;
            result.appendString (enumerator_10018.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GGS_uint index_10469_ (0) ;
            if (enumerator_10018.current_mParameterList (HERE).isValid ()) {
              UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_10469 (enumerator_10018.current_mParameterList (HERE)) ;
              while (enumerator_10469.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp;") ;
                switch (enumerator_10469.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
                case GGS_formalArgumentPassingModeAST::Enumeration::invalid :
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
                  {
                    result.appendString (" <span class=\"selecteur\">\?!") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
                  {
                    result.appendString (" <span class=\"selecteur\">!") ;
                  }
                  break ;
                }
                const GalgasBool test_27 = GGS_bool (ComparisonKind::notEqual, enumerator_10469.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                switch (test_27) {
                case GalgasBool::boolTrue : {
                  result.appendString (enumerator_10469.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 232)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_10469.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 233)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 233)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_10469.current_entry (HERE).readProperty_mFormalArgumentName ().stringValue ()) ;
                enumerator_10469.gotoNextObject () ;
                index_10469_.increment () ;
              }
            }
            result.appendString ("<br><br>") ;
            enumerator_10018.gotoNextObject () ;
            index_10018_.increment () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_28 = GGS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 240)).readProperty_setterMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 240)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_28) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Setters</td><td>") ;
        GGS_uint index_11314_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 242)).readProperty_setterMap ().isValid ()) {
          UpEnumerator_setterMap enumerator_11314 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 242)).readProperty_setterMap ()) ;
          while (enumerator_11314.hasCurrentObject ()) {
            switch (enumerator_11314.current_mKind (HERE).enumValue ()) {
            case GGS_methodKind::Enumeration::invalid :
              break ;
            case GGS_methodKind::Enumeration::enum_definedAsMember :
              {
              }
              break ;
            case GGS_methodKind::Enumeration::enum_definedAsExtension :
              {
                result.appendString ("(extension) ") ;
              }
              break ;
            }
            switch (enumerator_11314.current_mQualifier (HERE).enumValue ()) {
            case GGS_methodQualifier::Enumeration::invalid :
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract :
              {
                result.appendString ("<b>abstract</b> ") ;
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isBasic :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isBasicFinal :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isInherited :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtual :
              {
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding :
              {
                result.appendString ("<b>override</b> ") ;
              }
              break ;
            case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract :
              {
                result.appendString ("<b>abstract override</b> ") ;
              }
              break ;
            }
            result.appendString ("<b>setter</b> ") ;
            result.appendString (enumerator_11314.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GGS_uint index_11767_ (0) ;
            if (enumerator_11314.current_mParameterList (HERE).isValid ()) {
              UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_11767 (enumerator_11314.current_mParameterList (HERE)) ;
              while (enumerator_11767.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp;") ;
                switch (enumerator_11767.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
                case GGS_formalArgumentPassingModeAST::Enumeration::invalid :
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
                  {
                    result.appendString (" <span class=\"selecteur\">\?!") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
                  {
                    result.appendString (" <span class=\"selecteur\">!") ;
                  }
                  break ;
                }
                const GalgasBool test_29 = GGS_bool (ComparisonKind::notEqual, enumerator_11767.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                switch (test_29) {
                case GalgasBool::boolTrue : {
                  result.appendString (enumerator_11767.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 265)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_11767.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 266)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 266)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_11767.current_entry (HERE).readProperty_mFormalArgumentName ().stringValue ()) ;
                enumerator_11767.gotoNextObject () ;
                index_11767_.increment () ;
              }
            }
            result.appendString ("<br><br>") ;
            enumerator_11314.gotoNextObject () ;
            index_11314_.increment () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      const GalgasBool test_30 = GGS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 273)).readProperty_classMethodMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 273)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_30) {
      case GalgasBool::boolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Type procs</td><td>") ;
        GGS_uint index_12594_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 275)).readProperty_classMethodMap ().isValid ()) {
          UpEnumerator_classMethodMap enumerator_12594 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 275)).readProperty_classMethodMap ()) ;
          while (enumerator_12594.hasCurrentObject ()) {
            result.appendString ("<b>proc</b> @") ;
            result.appendString (enumerator_12594.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_12594.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GGS_uint index_12682_ (0) ;
            if (enumerator_12594.current_mParameterList (HERE).isValid ()) {
              UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_12682 (enumerator_12594.current_mParameterList (HERE)) ;
              while (enumerator_12682.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp;") ;
                switch (enumerator_12682.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
                case GGS_formalArgumentPassingModeAST::Enumeration::invalid :
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
                  {
                    result.appendString (" <span class=\"selecteur\">\?!") ;
                  }
                  break ;
                case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
                  {
                    result.appendString (" <span class=\"selecteur\">!") ;
                  }
                  break ;
                }
                const GalgasBool test_31 = GGS_bool (ComparisonKind::notEqual, enumerator_12682.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                switch (test_31) {
                case GalgasBool::boolTrue : {
                  result.appendString (enumerator_12682.current_entry (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 285)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_12682.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 286)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 286)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_12682.current_entry (HERE).readProperty_mFormalArgumentName ().stringValue ()) ;
                enumerator_12682.gotoNextObject () ;
                index_12682_.increment () ;
              }
            }
            result.appendString ("<br><br>") ;
            enumerator_12594.gotoNextObject () ;
            index_12594_.increment () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1286.gotoNextObject () ;
      index_1286_.increment () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForType'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_linkForType (const GGS_string & constinArgument_inTypeName,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 412)).add_operation (GGS_string ("\">@"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 412)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 412)).add_operation (GGS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 412)) ;
//---
  return result ;
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
                                                                            const GGS__5B_XCodeGroup_5D_ & in_GROUPS,
                                                                            const GGS__5B_string_5D_ & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS__5B_XCodeToolTarget_5D_ & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS__5B_XCodeAppTarget_5D_ & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_C_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS__5B_BuildFile_5D_ & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS__5B_string_5D_ & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                            const GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_214_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_BuildFile_5D_ enumerator_214 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_214.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_214.current_entry (HERE).readProperty_mBuildReference ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_214.current_entry (HERE).readProperty_mFileName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_214.current_entry (HERE).readProperty_mFileReference ().stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_214.gotoNextObject () ;
      index_214_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_525_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_525 (in_C_5F_FILE_5F_LIST) ;
    while (enumerator_525.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_525.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_525.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.c;\n    name = ") ;
      result.appendString (enumerator_525.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_525.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_525.gotoNextObject () ;
      index_525_.increment () ;
    }
  }
  GGS_uint index_924_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_924 (in_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_924.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_924.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_924.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_924.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_924.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_924.gotoNextObject () ;
      index_924_.increment () ;
    }
  }
  GGS_uint index_1329_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1329 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1329.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1329.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1329.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1329.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1329.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1329.gotoNextObject () ;
      index_1329_.increment () ;
    }
  }
  GGS_uint index_1728_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1728 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_1728.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1728.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1728.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_1728.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1728.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1728.gotoNextObject () ;
      index_1728_.increment () ;
    }
  }
  GGS_uint index_2128_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_2128 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_2128.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2128.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2128.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_2128.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2128.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2128.gotoNextObject () ;
      index_2128_.increment () ;
    }
  }
  GGS_uint index_2537_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_2537 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_2537.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2537.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2537.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_2537.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2537.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2537.gotoNextObject () ;
      index_2537_.increment () ;
    }
  }
  GGS_uint index_2942_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_2942 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2942.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2942.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2942.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2942.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2942.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2942.gotoNextObject () ;
      index_2942_.increment () ;
    }
  }
  GGS_uint index_3320_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_3320 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_3320.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3320.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3320.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 94)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3320.gotoNextObject () ;
      index_3320_.increment () ;
    }
  }
  GGS_uint index_3647_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_3647 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_3647.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3647.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3647.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3647.gotoNextObject () ;
      index_3647_.increment () ;
    }
  }
  GGS_uint index_3974_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_3974 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_3974.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3974.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3974.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3974.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3974.gotoNextObject () ;
      index_3974_.increment () ;
    }
  }
  GGS_uint index_4346_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_4346 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_4346.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4346.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4346.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4346.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 123)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4346.gotoNextObject () ;
      index_4346_.increment () ;
    }
  }
  GGS_uint index_4720_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_4720 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_4720.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4720.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_4720.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4720.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 132)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4720.gotoNextObject () ;
      index_4720_.increment () ;
    }
  }
  GGS_uint index_5067_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_5067 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_5067.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5067.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_5067.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 140)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 140)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_5067.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 141)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_5067.gotoNextObject () ;
      index_5067_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_5517_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_5517 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_5517.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_5517.current_entry (HERE).readProperty_mFrameworksFileRefList ().getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 149)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5517.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_5771_ (0) ;
        if (enumerator_5517.current_entry (HERE).readProperty_mFrameworksFileRefList ().isValid ()) {
          UpEnumerator__5B_string_5D_ enumerator_5771 (enumerator_5517.current_entry (HERE).readProperty_mFrameworksFileRefList ()) ;
          while (enumerator_5771.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_5771.current_entry (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_5771.gotoNextObject () ;
            index_5771_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5517.gotoNextObject () ;
      index_5517_.increment () ;
    }
  }
  GGS_uint index_5930_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_5930 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_5930.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5930.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6122_ (0) ;
      if (enumerator_5930.current_entry (HERE).readProperty_mFrameworksFileRefList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_6122 (enumerator_5930.current_entry (HERE).readProperty_mFrameworksFileRefList ()) ;
        while (enumerator_6122.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6122.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_6122.gotoNextObject () ;
          index_6122_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_5930.gotoNextObject () ;
      index_5930_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_6352_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator__5B_XCodeGroup_5D_ enumerator_6352 (in_GROUPS) ;
    while (enumerator_6352.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6352.current_entry (HERE).readProperty_mGroupReference ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6352.current_entry (HERE).readProperty_mGroupName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_6497_ (0) ;
      if (enumerator_6352.current_entry (HERE).readProperty_mChildrenRefs ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_6497 (enumerator_6352.current_entry (HERE).readProperty_mChildrenRefs ()) ;
        while (enumerator_6497.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6497.current_entry (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_6497.gotoNextObject () ;
          index_6497_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6352.current_entry (HERE).readProperty_mGroupName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 184)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_6352.current_entry (HERE).readProperty_mGroupPath ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_6352.gotoNextObject () ;
      index_6352_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_6861_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_6861 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_6861.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_6861.current_entry (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_6861.gotoNextObject () ;
      index_6861_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_7056_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_7056 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_7056.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7056.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7056.current_entry (HERE).readProperty_mTargetName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7056.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7056.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_7056.current_entry (HERE).readProperty_mFrameworksFileRefList ().getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_7056.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
        result.appendString (", /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_7056.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7056.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 220)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7056.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_7056.gotoNextObject () ;
      index_7056_.increment () ;
    }
  }
  GGS_uint index_7778_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_7778 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_7778.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mTargetName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mResourceBuildRef ().stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_8185_ (0) ;
      if (enumerator_7778.current_entry (HERE).readProperty_mDependentTargets ().isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_8185 (enumerator_7778.current_entry (HERE).readProperty_mDependentTargets ()) ;
        while (enumerator_8185.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8185.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_8185.gotoNextObject () ;
          index_8185_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 244)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 246)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7778.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_7778.gotoNextObject () ;
      index_7778_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_9008_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_9008 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_9008.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9008.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_9008.gotoNextObject () ;
      index_9008_.increment () ;
    }
  }
  GGS_uint index_9073_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_9073 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_9073.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9073.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_9073.gotoNextObject () ;
      index_9073_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_9250_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_9250 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_9250.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_9250.current_entry (HERE).readProperty_mResourceBuildRef ().stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_9441_ (0) ;
      if (enumerator_9250.current_entry (HERE).readProperty_mResourceFileBuildRefs ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_9441 (enumerator_9250.current_entry (HERE).readProperty_mResourceFileBuildRefs ()) ;
        while (enumerator_9441.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_9441.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_9441.gotoNextObject () ;
          index_9441_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_9250.gotoNextObject () ;
      index_9250_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_9672_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_9672 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_9672.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9672.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_9849_ (0) ;
      if (enumerator_9672.current_entry (HERE).readProperty_mBuildPhaseRefList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_9849 (enumerator_9672.current_entry (HERE).readProperty_mBuildPhaseRefList ()) ;
        while (enumerator_9849.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_9849.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_9849.gotoNextObject () ;
          index_9849_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_9672.gotoNextObject () ;
      index_9672_.increment () ;
    }
  }
  GGS_uint index_9976_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_9976 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_9976.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9976.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_10151_ (0) ;
      if (enumerator_9976.current_entry (HERE).readProperty_mBuildPhaseRefList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_10151 (enumerator_9976.current_entry (HERE).readProperty_mBuildPhaseRefList ()) ;
        while (enumerator_10151.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_10151.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_10151.gotoNextObject () ;
          index_10151_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_9976.gotoNextObject () ;
      index_9976_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_10379_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_10379 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10379.hasCurrentObject ()) {
      GGS_uint index_10421_ (0) ;
      if (enumerator_10379.current_entry (HERE).readProperty_mDependentTargets ().isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_10421 (enumerator_10379.current_entry (HERE).readProperty_mDependentTargets ()) ;
        while (enumerator_10421.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_10421.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_10421.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_10421.gotoNextObject () ;
          index_10421_.increment () ;
        }
      }
      enumerator_10379.gotoNextObject () ;
      index_10379_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        CLANG_CXX_LANGUAGE_STANDARD = \"c++17\";\n        SWIFT_APPROACHABLE_CONCURRENCY = YES;\n        SWIFT_DEFAULT_ACTOR_ISOLATION = MainActor;\n        SWIFT_OPTIMIZATION_LEVEL = \"-Onone\";\n        SWIFT_STRICT_CONCURRENCY = complete;\n        SWIFT_VERSION = 6.0;\n") ;
  GGS_uint index_11173_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_11173 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_11173.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_11173.current_entry (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_11173.gotoNextObject () ;
      index_11173_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_11269_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_11269 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11269.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11269.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        ONLY_ACTIVE_ARCH = NO;\n") ;
      GGS_uint index_11482_ (0) ;
      if (enumerator_11269.current_entry (HERE).readProperty_mBuildConfigurationSettingList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_11482 (enumerator_11269.current_entry (HERE).readProperty_mBuildConfigurationSettingList ()) ;
        while (enumerator_11482.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_11482.current_entry (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_11482.gotoNextObject () ;
          index_11482_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_11269.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_11269.gotoNextObject () ;
      index_11269_.increment () ;
    }
  }
  GGS_uint index_11683_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_11683 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11683.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11683.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_11859_ (0) ;
      if (enumerator_11683.current_entry (HERE).readProperty_mBuildConfigurationSettingList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_11859 (enumerator_11683.current_entry (HERE).readProperty_mBuildConfigurationSettingList ()) ;
        while (enumerator_11859.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_11859.current_entry (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_11859.gotoNextObject () ;
          index_11859_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = \"Info.plist\";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_11683.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_BUNDLE_IDENTIFIER = \"") ;
      result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
      result.appendString (".") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString ("\";\n      SWIFT_ACTIVE_COMPILATION_CONDITIONS = \"CONFIGURATION_IS_DEBUG $(inherited)\";\n      SWIFT_VERSION = 6.0;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_11683.gotoNextObject () ;
      index_11683_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_12721_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_12721 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_12721.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_12721.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_12721.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_12721.gotoNextObject () ;
      index_12721_.increment () ;
    }
  }
  GGS_uint index_13034_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_13034 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_13034.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13034.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_13034.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_13034.gotoNextObject () ;
      index_13034_.increment () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 107)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@outputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                 const GGS_string constinArgument_inSelector,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GGS_bool test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas4", 114)))) ;
  if (GalgasBool::boolTrue != test_0.boolEnum ()) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas4", 114)))) ;
  }
  result = test_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_outputActualParameterAST temp_2 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & ioArgument_ioActualOutputArgumentList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  const GGS_outputActualParameterAST temp_1 = this ;
  const GGS_outputActualParameterAST temp_2 = this ;
  ioArgument_ioActualOutputArgumentList.plusPlusAssignOperation (GGS_actualOutputArgumentAST::init_21__21__21_ (temp_0.readProperty_mActualSelector (), temp_1.readProperty_mOutputActualParameterExpression (), temp_2.readProperty_mEndOfExpressionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_lstring constinArgument_inFormalSelector,
                                                                       const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                       GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas4", 144)))).operator_and (GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas4", 145)))) COMMA_SOURCE_FILE ("actual-parameters.galgas4", 144)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 147)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 147)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 149)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 148)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 149)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 146)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 152)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_7734 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 152)) ;
        const GGS_outputActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_7734) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7734, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 153)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 153)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 153)) ;
      }
    }
    GGS_semanticExpressionForGeneration var_expression_8261 ;
    const GGS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8261, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 155)) ;
    {
    const GGS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8261.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8261, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 165)) ;
    }
    ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_outputActualParameterForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_expression_8261, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 172)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@outputInputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                      const GGS_string constinArgument_inSelector,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas4", 199)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 208)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                            const GGS_lstring constinArgument_inFormalSelector,
                                                                            const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                            GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas4", 225)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 227)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 227)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 229)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 228)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 229)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 226)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 231)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_11428 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 231)) ;
        const GGS_outputInputActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_11428) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11428, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 232)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 232)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 232)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_11779 ;
  GGS_string var_variableCppName_11805 ;
  {
  const GGS_outputInputActualParameterAST temp_9 = this ;
  GGS_string joker_11828 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_11779, var_variableCppName_11805, joker_11828, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 235)) ;
  }
  GGS__5B_unifiedTypeMapEntry_5D_ temp_10 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 241)) ;
  temp_10.plusPlusAssignOperation (var_parameterType_11779  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 241)) ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_typeList_11845 = temp_10 ;
  const GGS_outputInputActualParameterAST temp_11 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_11917 (temp_11.readProperty_mStructAttributeList ()) ;
  while (enumerator_11917.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_11951 = extensionGetter_definition (var_parameterType_11779, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 243)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_12060 ;
    GGS_bool var_isConstant_12088 ;
    var_propertyMap_11951.method_searchKey (enumerator_11917.current (HERE), var_accessControl_12060, var_isConstant_12088, var_parameterType_11779, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 244)) ;
    extensionMethod_checkSetAccess (var_accessControl_12060, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_11917.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 250)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_isConstant_12088.boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_11917.current (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray13  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 252)) ;
      }
    }
    var_typeList_11845.plusPlusAssignOperation (var_parameterType_11779  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 254)) ;
    enumerator_11917.gotoNextObject () ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_11779)).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_outputInputActualParameterAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_11779, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 259)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 259)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 259)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 261)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 260)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 261)), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 258)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_outputInputActualParameterAST temp_18 = this ;
    test_17 = ioArgument_ioExclusiveVariableSet.getter_contains (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas4", 264)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_outputInputActualParameterAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 265)) ;
    }
  }
  const GGS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_21.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 268)) ;
  const GGS_outputInputActualParameterAST temp_22 = this ;
  ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (var_parameterType_11779, var_variableCppName_11805, temp_22.readProperty_mStructAttributeList (), var_typeList_11845, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 270)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputJokerParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_expression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 291)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string constinArgument_inSelector,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas4", 298)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputJokerParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 307)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputJokerParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           const GGS_lstring constinArgument_inFormalSelector,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas4", 324)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 326)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 326)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 326)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 328)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 327)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 328)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 325)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputJokerParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 330)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_16027 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 330)) ;
        const GGS_outputInputJokerParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_16027) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_16027, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 331)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 331)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 331)) ;
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expressionGeneration_16541 ;
  const GGS_outputInputJokerParameterAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_expression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionGeneration_16541, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 334)) ;
  {
  const GGS_outputInputJokerParameterAST temp_10 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expressionGeneration_16541.readProperty_mResultType (), temp_10.readProperty_mActualSelector ().readProperty_location (), var_expressionGeneration_16541, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 344)) ;
  }
  const GGS_outputInputJokerParameterAST temp_11 = this ;
  GGS_string var_cppVarName_16827 = GGS_string ("joker_").add_operation (temp_11.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 351)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 351)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 351)) ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_bool (false), var_cppVarName_16827, var_expressionGeneration_16541, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 352)) ;
  GGS__5B_unifiedTypeMapEntry_5D_ temp_12 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 362)) ;
  temp_12.plusPlusAssignOperation (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 362)) ;
  ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_16827, GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE), temp_12, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 358)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputSelfParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@outputInputSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas4", 384)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputSelfParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputSelfParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 393)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputSelfParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                          GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                          GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas4", 410)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 412)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 412)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 412)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 414)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 413)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 414)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 411)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 416)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_19920 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 416)) ;
        const GGS_outputInputSelfParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_19920) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_19920, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 417)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 417)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 417)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_20143 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 420)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 420)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_20143.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 421)).operator_not (SOURCE_FILE ("actual-parameters.galgas4", 421)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_outputInputSelfParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 422)) ;
        }
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_20143.readProperty_type ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_outputInputSelfParameterAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_20143.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 427)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 427)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 427)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 429)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 428)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 429)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 426)) ;
        }
      }
      GGS__5B_unifiedTypeMapEntry_5D_ temp_16 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 435)) ;
      temp_16.plusPlusAssignOperation (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 435)) ;
      ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_string ("ioObject"), GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE), temp_16, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 431)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_outputInputSelfParameterAST temp_17 = this ;
    GenericArray <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 438)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualExistingVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualExistingVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                                const GGS_string constinArgument_inSelector,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 462)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualExistingVariableParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualExistingVariableParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 471)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                      GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                      const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      const GGS_lstring constinArgument_inFormalSelector,
                                                                                      const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                      const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                      GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 488)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 490)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 490)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 490)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 491)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 491)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 491)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 489)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualExistingVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 493)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_23460 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 493)) ;
        const GGS_inputActualExistingVariableParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_23460) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_23460, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 494)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 494)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 494)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_23742 ;
  GGS_string var_targetVariableCppName_23768 ;
  {
  const GGS_inputActualExistingVariableParameterAST temp_9 = this ;
  GGS_string joker_23797 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_23742, var_targetVariableCppName_23768, joker_23797, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 496)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_23742)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_inputActualExistingVariableParameterAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_23742, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 505)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 505)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 505)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 506)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 506)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 506)), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 504)) ;
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    const GGS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_contains (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas4", 509)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_inputActualExistingVariableParameterAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 510)) ;
    }
  }
  const GGS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 513)) ;
  GGS__5B__32_string_5D_ var_poisonedVarCppNameList_24519 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualExistingVariableParameterAST temp_18 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_24572 (temp_18.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_24572.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_24683 ;
    GGS_string var_nameForCheckingFormalParameterUsing_24719 ;
    {
    GGS_unifiedTypeMapEntry joker_24666 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_24572.current (HERE), joker_24666, var_targetVariableCppName_24683, var_nameForCheckingFormalParameterUsing_24719, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 517)) ;
    }
    var_poisonedVarCppNameList_24519.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_24683, var_nameForCheckingFormalParameterUsing_24719, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 523)) ;
    enumerator_24572.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_23742, var_targetVariableCppName_23768, var_poisonedVarCppNameList_24519, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 525)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualSelfPropertyParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfPropertyParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                            const GGS_string constinArgument_inSelector,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 552)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfPropertyParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfPropertyParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 561)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                  GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  const GGS_lstring constinArgument_inFormalSelector,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                  GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                                  GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 579)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 581)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 581)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 581)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 582)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 582)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 582)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 580)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualSelfPropertyParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 584)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_27482 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 584)) ;
        const GGS_inputActualSelfPropertyParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_27482) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_27482, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 585)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 585)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 585)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_27684 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 588)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 588)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_propertiesAreMutable (var_selfAvailable_27684.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 589)).operator_not (SOURCE_FILE ("actual-parameters.galgas4", 589)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfPropertyParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 590)) ;
        }
      }
      GGS_propertyMap var_propertyMap_27928 = extensionGetter_definition (var_selfAvailable_27684.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 592)).readProperty_propertyMap () ;
      GGS_unifiedTypeMapEntry var_parameterType_28058 ;
      const GGS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GGS_AccessControl joker_28048_2 ; // Joker input parameter
      GGS_bool joker_28048_1 ; // Joker input parameter
      var_propertyMap_27928.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_28048_2, joker_28048_1, var_parameterType_28058, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 593)) ;
      const GGS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GGS_string var_targetVariableCppName_28083 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 594)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas4", 595)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 595)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_28058)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_inputActualSelfPropertyParameterAST temp_16 = this ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_28058, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 599)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 599)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 599)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 600)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 600)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 600)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 598)) ;
        }
      }
      GGS__5B__32_string_5D_ var_poisonedVarCppNameList_28662 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfPropertyParameterAST temp_18 = this ;
      UpEnumerator__5B_lstring_5D_ enumerator_28717 (temp_18.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_28717.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_28836 ;
        GGS_string var_nameForCheckingFormalParameterUsing_28874 ;
        {
        GGS_unifiedTypeMapEntry joker_28817 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_28717.current (HERE), joker_28817, var_targetVariableCppName_28836, var_nameForCheckingFormalParameterUsing_28874, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 605)) ;
        }
        var_poisonedVarCppNameList_28662.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_28836, var_nameForCheckingFormalParameterUsing_28874, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 611)) ;
        enumerator_28717.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_28058, var_targetVariableCppName_28083, var_poisonedVarCppNameList_28662, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 613)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfPropertyParameterAST temp_19 = this ;
    GenericArray <FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (temp_19.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 619)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 643)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 652)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                          GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 669)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 671)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 671)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 671)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 672)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 672)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 672)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 670)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 674)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_31728 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 674)) ;
        const GGS_inputActualSelfParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_31728) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_31728, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 675)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 675)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 675)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_31930 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 678)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 678)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_31930.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 679)).operator_not (SOURCE_FILE ("actual-parameters.galgas4", 679)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 680)) ;
        }
      }
      GGS_string var_targetVariableCppName_32152 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_31930.readProperty_type ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_inputActualSelfParameterAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_31930.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 686)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 686)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 686)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 688)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 687)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 688)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 685)) ;
        }
      }
      GGS__5B__32_string_5D_ var_poisonedVarCppNameList_32623 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfParameterAST temp_16 = this ;
      UpEnumerator__5B_lstring_5D_ enumerator_32678 (temp_16.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_32678.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_32797 ;
        GGS_string var_nameForCheckingFormalParameterUsing_32835 ;
        {
        GGS_unifiedTypeMapEntry joker_32778 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_32678.current (HERE), joker_32778, var_targetVariableCppName_32797, var_nameForCheckingFormalParameterUsing_32835, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 693)) ;
        }
        var_poisonedVarCppNameList_32623.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_32797, var_nameForCheckingFormalParameterUsing_32835, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 699)) ;
        enumerator_32678.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_selfAvailable_31930.readProperty_type (), var_targetVariableCppName_32152, var_poisonedVarCppNameList_32623, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 701)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfParameterAST temp_17 = this ;
    GenericArray <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 707)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualNewVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 732)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewVariableParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewVariableParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 741)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 759)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 761)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 761)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 761)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 763)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 762)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 763)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 760)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualNewVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 765)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_35780 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 765)) ;
        const GGS_inputActualNewVariableParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_35780) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_35780, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 766)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 766)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 766)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewVariableParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_36069 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 770)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_36069)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewVariableParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_36069, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 773)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 773)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 773)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 775)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 774)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 775)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 772)) ;
        }
      }
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_15 = this ;
  const GGS_inputActualNewVariableParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_36533 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas4", 779)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 779)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)) ;
  {
  const GGS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GGS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_36533, var_targetVariableCppName_36533, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 780)) ;
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_36533, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 788)) ;
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_contains (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas4", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_inputActualNewVariableParameterAST temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 794)) ;
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 797)) ;
  GGS__5B__32_string_5D_ var_poisonedVarCppNameList_37473 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewVariableParameterAST temp_23 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_37526 (temp_23.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_37526.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_37637 ;
    GGS_string var_nameForCheckingFormalParameterUsing_37673 ;
    {
    GGS_unifiedTypeMapEntry joker_37620 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_37526.current (HERE), joker_37620, var_targetVariableCppName_37637, var_nameForCheckingFormalParameterUsing_37673, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 801)) ;
    }
    var_poisonedVarCppNameList_37473.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_37637, var_nameForCheckingFormalParameterUsing_37673, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 807)) ;
    enumerator_37526.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_36533, var_poisonedVarCppNameList_37473, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 809)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualNewConstantParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewConstantParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 838)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewConstantParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewConstantParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 847)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 865)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 867)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 867)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 867)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 869)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 868)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 869)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 866)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualNewConstantParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 871)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_40581 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 871)) ;
        const GGS_inputActualNewConstantParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_40581) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_40581, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 872)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 872)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 872)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewConstantParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_40870 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 876)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_40870)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewConstantParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_40870, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 879)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 879)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 879)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 880)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 880)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 880)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 878)) ;
        }
      }
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_15 = this ;
  const GGS_inputActualNewConstantParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_41326 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas4", 884)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 884)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, var_targetVariableCppName_41326, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 886)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    {
    const GGS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, var_targetVariableCppName_41326, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 893)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 901)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_contains (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas4", 906)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_inputActualNewConstantParameterAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 907)) ;
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 910)) ;
  GGS__5B__32_string_5D_ var_poisonedVarCppNameList_42519 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewConstantParameterAST temp_26 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_42572 (temp_26.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_42572.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_42683 ;
    GGS_string var_nameForCheckingFormalParameterUsing_42719 ;
    {
    GGS_unifiedTypeMapEntry joker_42666 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_42572.current (HERE), joker_42666, var_targetVariableCppName_42683, var_nameForCheckingFormalParameterUsing_42719, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 914)) ;
    }
    var_poisonedVarCppNameList_42519.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_42683, var_nameForCheckingFormalParameterUsing_42719, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 920)) ;
    enumerator_42572.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, var_poisonedVarCppNameList_42519, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 922)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputSingleJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputSingleJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 948)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputSingleJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputSingleJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 957)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 974)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 976)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 976)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 976)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 978)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 977)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 978)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 975)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 980)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_45769 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 980)) ;
        const GGS_inputSingleJokerActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_45769) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_45769, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 981)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 981)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 981)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_9 = this ;
      GGS_string var_cppVarName_45970 = GGS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 983)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 983)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 983)) ;
      GGS__5B__32_string_5D_ var_poisonedVarCppNameList_46100 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_inputSingleJokerActualParameterAST temp_10 = this ;
      UpEnumerator__5B_lstring_5D_ enumerator_46155 (temp_10.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_46155.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_46274 ;
        GGS_string var_nameForCheckingFormalParameterUsing_46312 ;
        {
        GGS_unifiedTypeMapEntry joker_46255 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_46155.current (HERE), joker_46255, var_targetVariableCppName_46274, var_nameForCheckingFormalParameterUsing_46312, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 987)) ;
        }
        var_poisonedVarCppNameList_46100.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_46274, var_nameForCheckingFormalParameterUsing_46312, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 993)) ;
        enumerator_46155.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_45970, var_poisonedVarCppNameList_46100, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 995)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string /* constinArgument__5F_inSelector */,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 1022)))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1028)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                           GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                           const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                           const GGS_lstring /* constinArgument__5F_inFormalSelector */,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                           GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 1044)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1046)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1046)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1046)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1047)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1047)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1047)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1045)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_inputJokerActualParameterAST temp_3 = this ;
    const GGS_inputJokerActualParameterAST temp_4 = this ;
    GGS_string var_cppVarName_49193 = GGS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 1049)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas4", 1049)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)) ;
    ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_49193, GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1051)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GGS__5B_galgasGUIComponentAST_5D_ constinArgument_inGuiComponentListAST,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GGS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_galgasGUIComponentAST_5D_ enumerator_9529 (constinArgument_inGuiComponentListAST) ;
  while (enumerator_9529.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_9529.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 275)) ;
    }
    enumerator_9529.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GGS_galgasGUIComponentAST constinArgument_inGUIComponentAST,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GGS_string ("cocoa"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GGS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 289)) ;
    }
  }
  GGS_guiAnalysisContext var_context_10257 = GGS_guiAnalysisContext::init (inCompiler COMMA_HERE) ;
  var_context_10257.mProperty_mProjectIndexingDescriptorList = constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () ;
  UpEnumerator__5B_lstring_5D_ enumerator_10436 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList ()) ;
  while (enumerator_10436.hasCurrentObject ()) {
    GGS_bool joker_10538_4 ; // Joker input parameter
    GGS_commandLineOptionMap joker_10538_3 ; // Joker input parameter
    GGS_commandLineOptionMap joker_10538_2 ; // Joker input parameter
    GGS_commandLineOptionMap joker_10538_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_10436.current (HERE), joker_10538_4, joker_10538_3, joker_10538_2, joker_10538_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 296)) ;
    var_context_10257.mProperty_mImportedOptionComponentList.plusPlusAssignOperation (enumerator_10436.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 297)) ;
    enumerator_10436.gotoNextObject () ;
  }
  GGS_bool var_runOptionDefined_10640 = GGS_bool (false) ;
  UpEnumerator__5B_guiSimpleAttributeAST_5D_ enumerator_10698 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList ()) ;
  while (enumerator_10698.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_10698.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("run"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_runOptionDefined_10640.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_10698.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 304)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (ComparisonKind::equal, enumerator_10698.current (HERE).readProperty_mValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_10698.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 306)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_context_10257.mProperty_mBuildRunOption = enumerator_10698.current (HERE).readProperty_mValue ().readProperty_string () ;
            var_runOptionDefined_10640 = GGS_bool (true) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_10698.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("nibAndMainClass"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          UpEnumerator__5B_string_5D_ enumerator_11198 (enumerator_10698.current (HERE).readProperty_mValue ().readProperty_string ().getter_componentsSeparatedByString (GGS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas4", 312))) ;
          while (enumerator_11198.hasCurrentObject ()) {
            var_context_10257.mProperty_mNibAndClassList.plusPlusAssignOperation (enumerator_11198.current (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 313)) ;
            enumerator_11198.gotoNextObject () ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_10698.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_10698.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 316)).add_operation (GGS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 316)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 316)) ;
      }
    }
    enumerator_10698.gotoNextObject () ;
  }
  UpEnumerator__5B_withLexiqueAST_5D_ enumerator_11454 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList ()) ;
  GGS_uint index_11412 (uint32_t (0)) ;
  while (enumerator_11454.hasCurrentObject ()) {
    GGS_terminalMap var_terminalMap_11651 ;
    GGS_bool joker_11623 ; // Joker input parameter
    GGS__5B_indexingAST_5D_ joker_11670_3 ; // Joker input parameter
    GGS__5B_terminalDeclarationAST_5D_ joker_11670_2 ; // Joker input parameter
    GGS__5B_lexicalAttributeAST_5D_ joker_11670_1 ; // Joker input parameter
    GGS__5B_lexicalListDeclarationAST_5D_ joker_11681 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_11454.current (HERE).readProperty_mLexiqueFileName (), joker_11623, var_terminalMap_11651, joker_11670_3, joker_11670_2, joker_11670_1, joker_11681, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 322)) ;
    GGS_stringset var_terminalSymbolSet_11732 = var_terminalMap_11651.getter_keySet (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 330)) ;
    UpEnumerator__5B_guiLabelAST_5D_ enumerator_11827 (enumerator_11454.current (HERE).readProperty_mLabels ()) ;
    while (enumerator_11827.hasCurrentObject ()) {
      UpEnumerator__5B_terminalLabelAST_5D_ enumerator_11868 (enumerator_11827.current (HERE).readProperty_mTerminalList ()) ;
      while (enumerator_11868.hasCurrentObject ()) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_terminalSymbolSet_11732.getter_contains (enumerator_11868.current (HERE).readProperty_mTerminal ().readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas4", 334)).operator_not (SOURCE_FILE ("guiCompilation.galgas4", 334)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_11868.current (HERE).readProperty_mTerminal ().readProperty_location (), GGS_string ("the '$").add_operation (enumerator_11868.current (HERE).readProperty_mTerminal ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 335)).add_operation (GGS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 336)).add_operation (enumerator_11454.current (HERE).readProperty_mLexiqueFileName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 337)).add_operation (GGS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 338)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 335)) ;
          }
        }
        enumerator_11868.gotoNextObject () ;
      }
      enumerator_11827.gotoNextObject () ;
    }
    GGS__5B_textMacroAST_5D_ var_textMacroList_12268 = GGS__5B_textMacroAST_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_guiCompoundAttributeAST_5D_ enumerator_12334 (enumerator_11454.current (HERE).readProperty_mCompoundAttributes ()) ;
    while (enumerator_12334.hasCurrentObject ()) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_12334.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("textMacro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_12334.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 348)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        var_textMacroList_12268.plusPlusAssignOperation (GGS_textMacroAST::init_21__21_ (enumerator_12334.current (HERE).readProperty_mAttributeName ().readProperty_string (), enumerator_12334.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 350)) ;
      }
      enumerator_12334.gotoNextObject () ;
    }
    GGS_bool var_hasAssociatedExtension_12687 = GGS_bool (false) ;
    GGS_bool var_hasTabViewTitle_12732 = GGS_bool (false) ;
    GGS_bool var_hasBlockComment_12770 = GGS_bool (false) ;
    GGS_string var_tabViewTitle_12810 = GGS_string::makeEmptyString () ;
    GGS_string var_blockComment_12844 = GGS_string::makeEmptyString () ;
    UpEnumerator__5B_guiSimpleAttributeAST_5D_ enumerator_12901 (enumerator_11454.current (HERE).readProperty_mSimpleAttributes ()) ;
    while (enumerator_12901.hasCurrentObject ()) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::equal, enumerator_12901.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("fileExtension"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          {
          var_context_10257.mProperty_mExtensionMap.setter_insertKey (enumerator_12901.current (HERE).readProperty_mValue (), enumerator_11454.current (HERE).readProperty_mLexiqueFileName ().readProperty_string (), index_11412, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 361)) ;
          }
          var_hasAssociatedExtension_12687 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = GGS_bool (ComparisonKind::equal, enumerator_12901.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("title"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              test_15 = var_hasTabViewTitle_12732.boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                GenericArray <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_12901.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_12901.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 365)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 365)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 365)) ;
              }
            }
            var_hasTabViewTitle_12732 = GGS_bool (true) ;
            var_tabViewTitle_12810 = enumerator_12901.current (HERE).readProperty_mValue ().readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_14) {
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = GGS_bool (ComparisonKind::equal, enumerator_12901.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("blockComment"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = var_hasBlockComment_12770.boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  GenericArray <FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_12901.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_12901.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 371)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 371)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 371)) ;
                }
              }
              var_hasBlockComment_12770 = GGS_bool (true) ;
              var_blockComment_12844 = enumerator_12901.current (HERE).readProperty_mValue ().readProperty_string () ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_12901.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_12901.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 376)).add_operation (GGS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 376)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 376)) ;
          }
        }
      }
      enumerator_12901.gotoNextObject () ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_12687.operator_not (SOURCE_FILE ("guiCompilation.galgas4", 380)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_11454.current (HERE).readProperty_mLexiqueFileName ().readProperty_location (), GGS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 381)) ;
      }
    }
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      test_23 = var_hasTabViewTitle_12732.operator_not (SOURCE_FILE ("guiCompilation.galgas4", 384)).boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_11454.current (HERE).readProperty_mLexiqueFileName ().readProperty_location (), GGS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 385)) ;
      }
    }
    var_context_10257.mProperty_mWithLexiqueList.plusPlusAssignOperation (GGS_importedLexiqueAST::init_21__21__21__21__21__21_ (enumerator_11454.current (HERE).readProperty_mLexiqueFileName ().readProperty_string (), index_11412, var_blockComment_12844, var_tabViewTitle_12810, var_textMacroList_12268, enumerator_11454.current (HERE).readProperty_mLabels (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 388)) ;
    enumerator_11454.gotoNextObject () ;
    index_11412.plusAssignOperation (GGS_uint (1), inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 320)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_10257, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 398)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3??&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__26_swift (const GGS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                  const GGS_string constinArgument_inOutputDirectory,
                                                                  GGS__5B_string_5D_ & ioArgument_ioSwiftAllProductFileList,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_optionComponentMapForGeneration enumerator_15036 (constinArgument_inOptionComponentMapForGeneration) ;
  while (enumerator_15036.hasCurrentObject ()) {
    GGS_string var_swiftuiFileName_15081 = GGS_string ("SettingsView.swift") ;
    ioArgument_ioSwiftAllProductFileList.plusPlusAssignOperation (var_swiftuiFileName_15081  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 410)) ;
    GGS_string var_swiftui_5F_string_15178 = GGS_string (filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (inCompiler, enumerator_15036.current (HERE).readProperty_mGuiComponentContext () COMMA_SOURCE_FILE ("guiCompilation.galgas4", 411))) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftuiFileName_15081, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_swiftui_5F_string_15178, GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 414)) ;
    }
    enumerator_15036.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swiftui_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (Compiler * /* inCompiler */,
                                                                                        const GGS_guiAnalysisContext & in_GUI_5F_CONTEXT
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport SwiftUI\nimport UniformTypeIdentifiers\n\n//--------------------------------------------------------------------------------------------------\n\nextension UTType {\n") ;
  GGS_uint index_212_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_212 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_212.hasCurrentObject ()) {
      result.appendString ("  nonisolated static let ") ;
      result.appendString (enumerator_212.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" = UTType (exportedAs: Bundle.main.bundleIdentifier! + \".") ;
      result.appendString (enumerator_212.current_lkey (HERE).readProperty_string ().getter_lowercased (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("\")\n") ;
      enumerator_212.gotoNextObject () ;
      index_212_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nextension ProjectDocument {\n  static let readableContentTypes : [UTType] = [") ;
  GGS_uint index_591_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_591 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_591.hasCurrentObject ()) {
      result.appendString (".") ;
      result.appendString (enumerator_591.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 18)).stringValue ()) ;
      enumerator_591.gotoNextObject () ;
      if (enumerator_591.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_591_.increment () ;
    }
  }
  result.appendString ("]\n}\n\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nlet projectFileExtensions = Set ([") ;
  GGS_uint index_969_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_969 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_969.hasCurrentObject ()) {
      result.appendString (enumerator_969.current_lkey (HERE).readProperty_string ().getter_lowercased (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 30)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 30)).stringValue ()) ;
      enumerator_969.gotoNextObject () ;
      if (enumerator_969.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_969_.increment () ;
    }
  }
  result.appendString ("])\n\n//--------------------------------------------------------------------------------------------------\n//   Scanner for a given extension\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner\? {\n  var result : AbstractScanner\? = nil\n  let fileExtension = inExtension.lowercased ()\n") ;
  GGS_uint index_1538_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_1538 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    const bool nonEmpty_enumerator_1538 = enumerator_1538.hasCurrentObject () ;
    if (nonEmpty_enumerator_1538) {
      result.appendString ("  if") ;
    }
    while (enumerator_1538.hasCurrentObject ()) {
      result.appendString (" fileExtension == ") ;
      result.appendString (enumerator_1538.current_lkey (HERE).readProperty_string ().getter_lowercased (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 44)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" {\n    result = ScannerFor_") ;
      result.appendString (enumerator_1538.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_1538.gotoNextObject () ;
      if (enumerator_1538.hasCurrentObject ()) {
        result.appendString ("  }else if") ;
      }
      index_1538_.increment () ;
    }
    if (nonEmpty_enumerator_1538) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n// Setting View\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingsView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  enum SidebarItem {\n    case commandLineOptions\n    case editorSettings\n    case allocationDebugView\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mSelection : SidebarItem = .commandLineOptions\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    NavigationSplitView {\n      List(selection: self.$mSelection) {\n        Text (\"Options\").tag (SidebarItem.commandLineOptions)\n        Text (\"Editor Settings\").tag (SidebarItem.editorSettings)\n        Text (\"Allocation Debug\").tag (SidebarItem.allocationDebugView)\n      }\n      .toolbar (removing: .sidebarToggle)\n    } detail: {\n      switch self.mSelection {\n        case .commandLineOptions : OptionView ()\n        case .editorSettings : EditorSettingView ()\n        case .allocationDebugView : AllocationDebugView ()\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n\n") ;
  GGS_uint index_3209_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator__5B_importedLexiqueAST_5D_ enumerator_3209 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_3209.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Popup list data for '") ;
      result.appendString (enumerator_3209.current_entry (HERE).readProperty_mLexiqueClassName ().stringValue ()) ;
      result.appendString ("' lexique\n//--------------------------------------------------------------------------------------------------\n\nlet gPopUpData_") ;
      result.appendString (enumerator_3209.current_entry (HERE).readProperty_mLexiqueClassName ().stringValue ()) ;
      result.appendString (" : [[UInt16]] = [\n") ;
      GGS_uint index_3579_ (0) ;
      if (enumerator_3209.current_entry (HERE).readProperty_mLabels ().isValid ()) {
        UpEnumerator__5B_guiLabelAST_5D_ enumerator_3579 (enumerator_3209.current_entry (HERE).readProperty_mLabels ()) ;
        while (enumerator_3579.hasCurrentObject ()) {
          result.appendString ("  [") ;
          result.appendString (enumerator_3579.current_entry (HERE).readProperty_mLeadingCharacterStrippedCount ().getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 101)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GGS_uint index_3724_ (0) ;
          if (enumerator_3579.current_entry (HERE).readProperty_mTerminalList ().isValid ()) {
            UpEnumerator__5B_terminalLabelAST_5D_ enumerator_3724 (enumerator_3579.current_entry (HERE).readProperty_mTerminalList ()) ;
            while (enumerator_3724.hasCurrentObject ()) {
              result.appendString ("    ") ;
              result.appendString (enumerator_3209.current_entry (HERE).readProperty_mLexiqueClassName ().stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_3724.current_entry (HERE).readProperty_mTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 103)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_3724.current_entry (HERE).readProperty_mDisplayFlags ().getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 103)).stringValue ()) ;
              enumerator_3724.gotoNextObject () ;
              if (enumerator_3724.hasCurrentObject ()) {
                result.appendString (",\n") ;
              }
              index_3724_.increment () ;
            }
          }
          result.appendString ("\n  ]") ;
          enumerator_3579.gotoNextObject () ;
          if (enumerator_3579.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_3579_.increment () ;
        }
      }
      result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//   Block Comment for '") ;
      result.appendString (enumerator_3209.current_entry (HERE).readProperty_mLexiqueClassName ().stringValue ()) ;
      result.appendString ("' lexique\n//--------------------------------------------------------------------------------------------------\n\nlet gLineComment_") ;
      result.appendString (enumerator_3209.current_entry (HERE).readProperty_mLexiqueClassName ().stringValue ()) ;
      result.appendString (" : String\? = ") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_3209.current_entry (HERE).readProperty_mBlockComment ().getter_count (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 116)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_3209.current_entry (HERE).readProperty_mBlockComment ().getter_utf_38_Representation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 116)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n\n") ;
      enumerator_3209.gotoNextObject () ;
      index_3209_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalCallInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument__5F_ioActuallyUsedTerminalSymbolMap */,
                                                                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                     GGS_uint & /* ioArgument__5F_ioAddedNonTerminalIndex */,
                                                                                     GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_nonTerminalSymbolIndex_3528 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3552 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_3528, joker_3552, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 64)) ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_nonTerminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_3528, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 65)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalCallInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                       const GGS_terminalMap /* constinArgument__5F_inTerminalMap */,
                                                                       const GGS_string /* constinArgument__5F_inLexiqueName */,
                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GGS_string /* constinArgument__5F_inComponentName */,
                                                                       const GGS_stringset /* constinArgument__5F_inIndexNameSet */,
                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_uint & /* ioArgument__5F_ioSelectMethodCount */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalLabelMap var_labelMap_4973 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_4973, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 87)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_signature_5026 ;
  GGS__5B_formalParameterForGeneration_5D_ joker_5072 ; // Joker input parameter
  GGS_location joker_5088 ; // Joker input parameter
  var_labelMap_4973.method_searchKey (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-non-terminal.galgas4", 89)), joker_5072, var_signature_5026, joker_5088, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 89)) ;
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_5537 ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  const GGS_nonterminalCallInstruction temp_3 = this ;
  extensionMethod_analyzeRoutineArguments (temp_1.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_2.readProperty_mNonterminalName (), GGS_string ("'<").add_operation (temp_3.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 97)).add_operation (GGS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 97)), var_signature_5026, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5537, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 91)) ;
  const GGS_nonterminalCallInstruction temp_4 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 104)) ;
  const GGS_nonterminalCallInstruction temp_5 = this ;
  const GGS_nonterminalCallInstruction temp_6 = this ;
  const GGS_nonterminalCallInstruction temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mNonterminalName ().readProperty_string (), GGS_string::makeEmptyString (), var_actualParameterListForGeneration_5537, temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                             GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GGS__5B_actualParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 143)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_nonterminalInstructionForGeneration var_si_7848 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_7848.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonterminalInstructionForGeneration temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_7848.readProperty_mNonterminalName ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas4", 161)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_nonterminalInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_7848.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 163)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 163)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 162)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_8189 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_8189.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_nonterminalInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_8189.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 167)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 167)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 166)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_nonterminalInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 170)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas4", 173)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_nonterminalInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 174)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_parameterCppNameList_9254 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_9296 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_9346 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_9403 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_9403.hasCurrentObject ()) {
    GGS_string var_parameterCppName_9669 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_9403.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_9296, var_inputVariableList_9346, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_9669, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 193)) ;
    var_parameterCppNameList_9254.plusPlusAssignOperation (var_parameterCppName_9669  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 202)) ;
    enumerator_9403.gotoNextObject () ;
  }
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  GGS_string var_sdtResultVarName_9775 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 205)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 205)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (var_sdtResultVarName_9775, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 207)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 207)) ;
    }
  }
  const GGS_nonterminalInstructionForGeneration temp_3 = this ;
  const GGS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas4", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas4", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)) ;
  UpEnumerator__5B_string_5D_ enumerator_10142 (var_parameterCppNameList_9254) ;
  while (enumerator_10142.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_10142.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 211)) ;
    enumerator_10142.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(var_sdtResultVarName_9775.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 214)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 217)) ;
  const GGS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_9775, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 218)) ;
  UpEnumerator__5B_string_5D_ enumerator_10672 (var_jokerParametersToReleaseList_9296) ;
  while (enumerator_10672.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_10672.current (HERE).add_operation (GGS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 226)) ;
    enumerator_10672.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                      const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument__5F_inNonTerminalSymbolMap */,
                                                                                      GGS_uint & /* ioArgument__5F_ioAddedNonTerminalIndex */,
                                                                                      GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_terminalSymbolIndex_4780 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_terminalCheckInstructionAST temp_1 = this ;
    const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element var_entry_4811 = ioArgument_ioActuallyUsedTerminalSymbolMap.readSubcript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioActuallyUsedTerminalSymbolMap.readSubcript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      var_terminalSymbolIndex_4780 = var_entry_4811.readProperty_mTerminalIndex () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_terminalSymbolIndex_4780 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 100)) ;
    {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_2.readProperty_mTerminalName (), var_terminalSymbolIndex_4780, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 101)) ;
    }
  }
  const GGS_terminalCheckInstructionAST temp_3 = this ;
  const GGS_terminalCheckInstructionAST temp_4 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_terminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTerminalName (), var_terminalSymbolIndex_4780, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                        const GGS_nonterminalMap /* constinArgument__5F_inNonterminalMap */,
                                                                        const GGS_string /* constinArgument__5F_inComponentName */,
                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_uint & /* ioArgument__5F_ioSelectMethodCount */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalSentValue_5D_ var_sentAttributeList_6066 ;
  const GGS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_6066, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 126)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 128)).objectCompare (var_sentAttributeList_6066.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 128)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_terminalCheckInstructionAST temp_3 = this ;
      const GGS_terminalCheckInstructionAST temp_4 = this ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_sentAttributeList_6066.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 131)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_terminalCheckInstructionAST temp_7 = this ;
      const GGS_terminalCheckInstructionAST temp_8 = this ;
      GGS_string temp_9 ;
      const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 134)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GGS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (GGS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (var_sentAttributeList_6066.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 130)).getter_string (SOURCE_FILE ("instruction-terminal.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 131)).add_operation (GGS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 131)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 133)).getter_string (SOURCE_FILE ("instruction-terminal.galgas4", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 132)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 133)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 133)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 129)) ;
    }
  }
  GGS__5B_terminalCheckAssignement_5D_ var_terminalCheckAssignementList_6602 = GGS__5B_terminalCheckAssignement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_terminalCheckInstructionAST temp_12 = this ;
  UpEnumerator__5B_actualInputParameterAST_5D_ enumerator_6687 (temp_12.readProperty_mActualInputParameterList ()) ;
  UpEnumerator__5B_lexicalSentValue_5D_ enumerator_6724 (var_sentAttributeList_6066) ;
  while (enumerator_6687.hasCurrentObject () && enumerator_6724.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_6687.current (HERE).readProperty_mInputParameter ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_6724.current (HERE).readProperty_mLexicalType (), enumerator_6724.current (HERE).readProperty_mLexicalAttributeName (), var_terminalCheckAssignementList_6602, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 140)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_6724.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_string ().objectCompare (enumerator_6687.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string temp_14 ;
        const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_6724.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          temp_14 = GGS_string (":") ;
        }else if (GalgasBool::boolFalse == test_15) {
          temp_14 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_6687.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the actual selector should be '\?").add_operation (enumerator_6724.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)) ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_6724.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_location (), GGS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 150)) ;
      }
    }
    enumerator_6687.gotoNextObject () ;
    enumerator_6724.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_18 = this ;
  UpEnumerator__5B__32_lstring_5D_ enumerator_7391 (temp_18.readProperty_mIndexingKeyList ()) ;
  while (enumerator_7391.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_contains (enumerator_7391.current (HERE).readProperty_mValue_30_ ().readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 155)).operator_not (SOURCE_FILE ("instruction-terminal.galgas4", 155)).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, EnumFixItKind::fixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_7391.current (HERE).readProperty_mValue_30_ ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7391.current (HERE).readProperty_mValue_30_ ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 156)).add_operation (GGS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 156)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 156)) ;
      }
    }
    enumerator_7391.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 160)) ;
  const GGS_terminalCheckInstructionAST temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 166)) ;
  const GGS_terminalCheckInstructionAST temp_23 = this ;
  const GGS_terminalCheckInstructionAST temp_24 = this ;
  const GGS_terminalCheckInstructionAST temp_25 = this ;
  const GGS_terminalCheckInstructionAST temp_26 = this ;
  const GGS_terminalCheckInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_6602, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                      const GGS_uint constinArgument_inRow,
                                                                                      GGS_uint & ioArgument_ioColumn,
                                                                                      GGS_string & ioArgument_ioCurrentNode,
                                                                                      GGS_string & ioArgument_ioArrowShape,
                                                                                      GGS_string & ioArgument_ioArrows,
                                                                                      GGS_uint & /* ioArgument__5F_ioMaxUsedRowIndex */,
                                                                                      const GGS_bool /* constinArgument__5F_inDebug */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_nodeName_9866 ;
  {
  const GGS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 207)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 207)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9866, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 206)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (var_nodeName_9866, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)) ;
  ioArgument_ioCurrentNode = var_nodeName_9866 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 215)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@terminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GGS_string /* constinArgument__5F_inPosfix */,
                                                                               GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GGS__5B_terminalCheckAssignement_5D_::init (inCompiler COMMA_HERE), temp_3.readProperty_mIndexingKeyList (), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 256)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_terminalCheckInstructionForGeneration var_si_12570 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_12570.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_12570.readProperty_mTerminalName ().readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result.operator_not (SOURCE_FILE ("instruction-terminal.galgas4", 275)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_12570.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 277)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 277)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 276)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_12910 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_12910.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_12910.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 281)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 281)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 280)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 284)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result.operator_not (SOURCE_FILE ("instruction-terminal.galgas4", 287)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_terminalCheckInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 288)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                             GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_terminalCheckAssignement_5D_ enumerator_14061 (temp_0.readProperty_mTerminalCheckAssignementList ()) ;
  while (enumerator_14061.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_14061.current (HERE).readProperty_mTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (enumerator_14061.current (HERE).readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 305)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 305)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14061.current (HERE).readProperty_mTargetVarCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)).add_operation (GGS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14061.current (HERE).readProperty_mSourceLexicalAttributeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 309)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 310)) ;
    enumerator_14061.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  UpEnumerator__5B__32_lstring_5D_ enumerator_14566 (temp_2.readProperty_mIndexingKeyList ()) ;
  while (enumerator_14566.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 314)) ;
    const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 315)).add_operation (GGS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 315)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14566.current (HERE).readProperty_mValue_30_ ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 316)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_14566.current (HERE).readProperty_mValue_31_ ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas4", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 317)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 317)) ;
    enumerator_14566.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 320)) ;
  const GGS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 326)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string ("->acceptTerminal (Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 334)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 334)) ;
  const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_6.readProperty_mLexiqueIdentifier ().add_operation (GGS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 335)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 335)) ;
  const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 336)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 336)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addedNonTerminalIndex_3348 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 71)) ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_selectBranchList_3434 = GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_3525 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_3525.hasCurrentObject ()) {
    GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_syntaxInstructionList_3554 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_3525.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_3554, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 76)) ;
    }
    var_selectBranchList_3434.plusPlusAssignOperation (var_syntaxInstructionList_3554  COMMA_SOURCE_FILE ("instruction-select.galgas4", 83)) ;
    enumerator_3525.gotoNextObject () ;
  }
  const GGS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_selectInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_3434, var_addedNonTerminalIndex_3348, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 86)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                              const GGS_string constinArgument_inLexiqueName,
                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GGS_string constinArgument_inComponentName,
                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                              GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_choiceIndex_4948 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 112)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 114)) ;
  }
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_5099 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_5214 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_5214.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_5667 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5214.current (HERE).readProperty_mSyntaxInstructionList (), enumerator_5214.current (HERE).readProperty_mEndOf_5F_instructions (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5667, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 118)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5099.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (var_instructionList_5667, enumerator_5214.current (HERE).readProperty_mEndOf_5F_instructions (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 135)) ;
    enumerator_5214.gotoNextObject () ;
  }
  {
  const GGS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 138)) ;
  }
  const GGS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_4948, var_listOfSemanticInstructionListForGeneration_5099, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_6950 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_7058 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_7058.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_6950.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7058.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 167)), enumerator_7058.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 166)) ;
    enumerator_7058.gotoNextObject () ;
  }
  const GGS_selectInstructionForGeneration temp_1 = this ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  const GGS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_6950, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_selectInstructionForGeneration var_si_7887 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_7887.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result = GGS_bool (true) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 189)).objectCompare (var_si_7887.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 189)))) COMMA_SOURCE_FILE ("instruction-select.galgas4", 189)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selectInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_7887.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 192)).getter_string (SOURCE_FILE ("instruction-select.galgas4", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 191)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 192)).add_operation (var_si_7887.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 194)).getter_string (SOURCE_FILE ("instruction-select.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 193)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas4", 190)) ;
          result = GGS_bool (false) ;
        }
      }
      const GGS_selectInstructionForGeneration temp_5 = this ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_8465 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_8521 (var_si_7887.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_6 = result.isValidAndTrue () ;
      if (enumerator_8465.hasCurrentObject () && enumerator_8521.hasCurrentObject () && bool_6) {
        while (enumerator_8465.hasCurrentObject () && enumerator_8521.hasCurrentObject () && bool_6) {
          result = function_compareSyntaxSignature (enumerator_8465.current (HERE).readProperty_mInstructionList (), enumerator_8521.current (HERE).readProperty_mInstructionList (), enumerator_8521.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 198)) ;
          enumerator_8465.gotoNextObject () ;
          enumerator_8521.gotoNextObject () ;
          if (enumerator_8465.hasCurrentObject () && enumerator_8521.hasCurrentObject ()) {
            bool_6 = result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_syntaxInstructionForGeneration var_si_8713 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_8713.ptr ()) {
        test_7 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_8713.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas4", 201)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      const GGS_selectInstructionForGeneration temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas4", 205)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = result.operator_not (SOURCE_FILE ("instruction-select.galgas4", 208)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_selectInstructionForGeneration temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas4", 209)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-select.galgas4", 223)) ;
  }
  const GGS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas4", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 224)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 224)) ;
  const GGS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas4", 225)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)) ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_10017 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  GGS_uint index_9999 (uint32_t (0)) ;
  while (enumerator_10017.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_9999.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)).getter_string (SOURCE_FILE ("instruction-select.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_10017.current (HERE).readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 228)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 236)) ;
    enumerator_10017.gotoNextObject () ;
    index_9999.plusAssignOperation (GGS_uint (1), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 226)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 239)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addedNonTerminalIndex_3572 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 75)) ;
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_repeatedInstructionList_3658 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_3658, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 78)) ;
  }
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ temp_1 = GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 85)) ;
  temp_1.plusPlusAssignOperation (var_repeatedInstructionList_3658  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 85)) ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_repeatBranchList_4011 = temp_1 ;
  const GGS_repeatInstruction temp_2 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_4126 (temp_2.readProperty_mRepeatBranchList ()) ;
  while (enumerator_4126.hasCurrentObject ()) {
    GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_syntaxInstructionList_4155 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4126.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4155, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 89)) ;
    }
    var_repeatBranchList_4011.plusPlusAssignOperation (var_syntaxInstructionList_4155  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 96)) ;
    enumerator_4126.gotoNextObject () ;
  }
  const GGS_repeatInstruction temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_repeatInstructionForGrammarAnalysis::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_repeatBranchList_4011, var_addedNonTerminalIndex_3572, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                              const GGS_string constinArgument_inLexiqueName,
                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GGS_string constinArgument_inComponentName,
                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                              GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_choiceIndex_5548 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 126)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 128)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_repeated_5F_instructionList_6105 ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  const GGS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_6105, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 130)) ;
  }
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_6201 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstruction temp_2 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_6277 (temp_2.readProperty_mRepeatBranchList ()) ;
  while (enumerator_6277.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_6730 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6277.current (HERE).readProperty_mSyntaxInstructionList (), enumerator_6277.current (HERE).readProperty_mEndOf_5F_instructions (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6730, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 150)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6201.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (var_instructionList_6730, enumerator_6277.current (HERE).readProperty_mEndOf_5F_instructions (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 167)) ;
    enumerator_6277.gotoNextObject () ;
  }
  {
  const GGS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 170)) ;
  }
  const GGS_repeatInstruction temp_4 = this ;
  const GGS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5548, var_repeated_5F_instructionList_6105, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_6201, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 172)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_repeated_5F_instructionList_8216 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 202)) ;
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_8326 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstructionForGeneration temp_1 = this ;
  UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_8434 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_8434.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_8326.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8434.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 206)), enumerator_8434.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 205)) ;
    enumerator_8434.gotoNextObject () ;
  }
  const GGS_repeatInstructionForGeneration temp_2 = this ;
  const GGS_repeatInstructionForGeneration temp_3 = this ;
  const GGS_repeatInstructionForGeneration temp_4 = this ;
  const GGS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_8216, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_8326, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 210)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_repeatInstructionForGeneration var_si_9329 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9329.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_repeatInstructionForGeneration temp_1 = this ;
      result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_9329.readProperty_m_5F_repeated_5F_instructionList (), var_si_9329.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 227)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 228)).objectCompare (var_si_9329.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 228)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 228)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_repeatInstructionForGeneration temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_9329.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 231)).getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 230)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 231)).add_operation (var_si_9329.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 233)).getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 232)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 229)) ;
          result = GGS_bool (false) ;
        }
      }
      const GGS_repeatInstructionForGeneration temp_6 = this ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_10021 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_10077 (var_si_9329.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_7 = result.isValidAndTrue () ;
      if (enumerator_10021.hasCurrentObject () && enumerator_10077.hasCurrentObject () && bool_7) {
        while (enumerator_10021.hasCurrentObject () && enumerator_10077.hasCurrentObject () && bool_7) {
          result = function_compareSyntaxSignature (enumerator_10021.current (HERE).readProperty_mInstructionList (), enumerator_10077.current (HERE).readProperty_mInstructionList (), enumerator_10077.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 237)) ;
          enumerator_10021.gotoNextObject () ;
          enumerator_10077.gotoNextObject () ;
          if (enumerator_10021.hasCurrentObject () && enumerator_10077.hasCurrentObject ()) {
            bool_7 = result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_syntaxInstructionForGeneration var_si_10269 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10269.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_10269.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 241)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      const GGS_repeatInstructionForGeneration temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 245)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = result.operator_not (SOURCE_FILE ("instruction-repeat.galgas4", 248)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_repeatInstructionForGeneration temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 249)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_repeatFlagCppName_11331 = GGS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 263)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 264)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_repeatFlagCppName_11331, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 265)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 265)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_repeatFlagCppName_11331, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 266)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 266)) ;
  {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 267)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 275)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 276)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas4", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 277)) ;
      const GGS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)).add_operation (GGS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)) ;
      const GGS_repeatInstructionForGeneration temp_5 = this ;
      GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_12086 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_first (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 279)).readProperty_mInstructionList () ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_12086, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 280)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 288)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_11331, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 289)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 289)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 290)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 292)) ;
    const GGS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)) ;
    const GGS_repeatInstructionForGeneration temp_8 = this ;
    UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_12744 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
    GGS_uint index_12726 (uint32_t (0)) ;
    while (enumerator_12744.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_12726.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)).getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 295)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_12744.current (HERE).readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 296)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 304)) ;
      enumerator_12744.gotoNextObject () ;
      index_12726.plusAssignOperation (GGS_uint (1), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 294)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 306)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_11331, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 307)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 307)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 308)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 309)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 311)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 312)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                       const GGS_string constinArgument_inInstanceMethodName,
                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 29)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 30)), GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 32)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 34)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 28)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                 const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                 const GGS_string constinArgument_inInputArgumentName,
                                                                                                                 const GGS_string constinArgument_inInstanceMethodName,
                                                                                                                 const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_2473 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2473, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 47)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_2533 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_2533.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 49)), var_argumentTypeIndex_2473, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 49)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 49)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 51)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 52)), var_argList_2533, GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 54)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 56)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 50)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1875 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1875, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 30)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 32)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 33)), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 35)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1875, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 38)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 31)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3189 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3189, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 62)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 64)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 65)), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 67)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3189, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas4", 70)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 63)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                    GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                    const GGS_string constinArgument_inGetterName,
                                                                                                                                                    const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                    const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                    const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                    const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4049 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4049, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 86)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_4102 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_4184 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4184, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 88)) ;
  }
  var_argList_4102.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 89)), var_t_4184, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 89)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 91)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 92)), var_argList_4102, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 94)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4049, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas4", 97)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 90)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                               GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                               const GGS_string constinArgument_inGetterName,
                                                                                                                                               const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                               const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                               const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                               const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_5055 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5055, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 113)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_5108 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_5190 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5190, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 115)) ;
  }
  var_argList_5108.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 116)), var_t_5190, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 116)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 118)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 119)), var_argList_5108, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 121)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5055, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 124)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                      const GGS_string constinArgument_inGetterName,
                                                                                                                      const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                      const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                      const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                      const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                      const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                      const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_6036 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6036, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 142)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_6089 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_6188 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_6188, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 144)) ;
  }
  var_argList_6089.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 145)), var_t_6188, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 145)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_6188, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 146)) ;
  }
  var_argList_6089.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 147)), var_t_6188, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 147)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 149)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 150)), var_argList_6089, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 152)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6036, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 155)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 148)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                              GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                              const GGS_string constinArgument_inGetterName,
                                                                                                              const GGS_string constinArgument_inReturnedTypeName,
                                                                                                              const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_7173 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_7173, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 167)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 169)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 170)), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 172)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_7173, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas4", 175)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 168)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                const GGS_string constinArgument_inGetterName,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_8275 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8275, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 190)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_8328 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_8410 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_8410, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 192)) ;
  }
  var_argList_8328.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 193)), var_t_8410, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 193)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 195)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 196)), var_argList_8328, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 198)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8275, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas4", 201)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 194)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                        GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                        const GGS_string constinArgument_inGetterName,
                                                                                                                        const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                        const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                        const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                        const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_9266 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_9266, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 217)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_9319 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_9401 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9401, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 219)) ;
  }
  var_argList_9319.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 220)), var_t_9401, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 220)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 222)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 223)), var_argList_9319, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 225)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_9266, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 228)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 221)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                                          const GGS_string constinArgument_inGetterName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_Selector,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                                          const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_10797 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10797, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 246)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_10850 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10949 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10949, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 248)) ;
  }
  var_argList_10850.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 249)), var_t_10949, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 249)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10949, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 250)) ;
  }
  var_argList_10850.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (constinArgument_inArgument_32_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 251)), var_t_10949, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 251)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 253)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 254)), var_argList_10850, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 256)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10797, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas4", 259)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 252)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                     GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                     const GGS_string constinArgument_inGetterName,
                                                                                                                                     const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                     const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                     const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                     const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                     const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                     const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_12010 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_12010, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 277)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_12063 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_12162 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_12162, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 279)) ;
  }
  var_argList_12063.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 280)), var_t_12162, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 280)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_12162, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 281)) ;
  }
  var_argList_12063.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 282)), var_t_12162, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 282)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 284)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 285)), var_argList_12063, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 287)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_12010, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 290)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 283)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                                   const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                   const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                   const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_13248 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_13248, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 310)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_13301 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_13400 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_13400, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 312)) ;
  }
  var_argList_13301.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 313)), var_t_13400, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 313)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_13400, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 314)) ;
  }
  var_argList_13301.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 315)), var_t_13400, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_13400, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 316)) ;
  }
  var_argList_13301.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 317)), var_t_13400, constinArgument_inArgument_33_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 317)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 320)), var_argList_13301, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 322)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_13248, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 325)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 318)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                 GGS_getterMap & outArgument_outMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("description"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 335)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_string & ioArgument_ioImplementation,
                                                                              GGS__5B_string_5D_ & /* ioArgument__5F_ioJokerParametersToReleaseList */,
                                                                              GGS__5B_string_5D_ & /* ioArgument__5F_ioOutputVariableList */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 34)) ;
  const GGS_outputActualParameterForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 35)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                   GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                                   GGS__5B_string_5D_ & /* ioArgument__5F_ioJokerParametersToReleaseList */,
                                                                                   GGS__5B_string_5D_ & /* ioArgument__5F_ioOutputVariableList */,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterForGeneration temp_0 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_2392 (temp_0.readProperty_mTypeList ()) ;
  while (enumerator_2392.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2392.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 49)) ;
    enumerator_2392.gotoNextObject () ;
  }
  const GGS_outputInputActualParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GGS_outputInputActualParameterForGeneration temp_2 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_2525 (temp_2.readProperty_mStructAttributeList ()) ;
  while (enumerator_2525.hasCurrentObject ()) {
    outArgument_outCppName.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_2525.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas4", 53)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 53)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 53)) ;
    enumerator_2525.gotoNextObject () ;
  }
  {
  const GGS_outputInputActualParameterForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 55)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                             GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                             GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                             GGS__5B_string_5D_ & /* ioArgument__5F_ioJokerParametersToReleaseList */,
                                                                             GGS__5B_string_5D_ & ioArgument_ioOutputVariableList,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppName,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualParameterForGeneration temp_0 = this ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GGS_inputActualParameterForGeneration temp_1 = this ;
  ioArgument_ioOutputVariableList.plusPlusAssignOperation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 69)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 70)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                            GGS_string & ioArgument_ioImplementation,
                                                                            GGS__5B_string_5D_ & ioArgument_ioJokerParametersToReleaseList,
                                                                            GGS__5B_string_5D_ & ioArgument_ioOutputVariableList,
                                                                            GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                            GGS_string & outArgument_outCppName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 83)) ;
  const GGS_inputJokerParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GGS_inputJokerParameterForGeneration temp_2 = this ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)).add_operation (GGS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)) ;
  const GGS_inputJokerParameterForGeneration temp_3 = this ;
  ioArgument_ioJokerParametersToReleaseList.plusPlusAssignOperation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 86)) ;
  const GGS_inputJokerParameterForGeneration temp_4 = this ;
  ioArgument_ioOutputVariableList.plusPlusAssignOperation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticBlockInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 97)) ;
  {
  const GGS_semanticBlockInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 98)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 106)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                                     GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                                GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputJokerParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas4", 128)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 129)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 129)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 129)) ;
      const GGS_inputJokerParameterForGeneration temp_3 = this ;
      UpEnumerator__5B__32_string_5D_ enumerator_5783 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_5783.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_5783.current (HERE).readProperty_mValue_31_ () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 131)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_5783.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 132)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 132)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 132)) ;
        enumerator_5783.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 134)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputActualParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas4", 143)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 144)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 144)) ;
      const GGS_inputActualParameterForGeneration temp_3 = this ;
      UpEnumerator__5B__32_string_5D_ enumerator_6455 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_6455.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_6455.current (HERE).readProperty_mValue_31_ () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 146)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_6455.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 147)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 147)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 147)) ;
        enumerator_6455.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 149)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u8PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_38_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_u_38__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 12))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u8PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_38_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 24)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u8PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_38_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u8"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 32)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u8PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_38_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GGS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 53)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string ("u8"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string ("u8"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string ("u8"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 169)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u8PredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_38_PredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                            GGS_classMethodMap & outArgument_outClassMethodMap,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_binarysetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_0 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 30)) ;
  result = temp_0 ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_binarysetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_binarysetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 44))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithBit"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 61)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fullBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithPredicateString"), GGS_string ("string"), GGS_string ("inPredicateString"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 75)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 84)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 97)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 110)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 123)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 136)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 149)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 162)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 188)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 201)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 214)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isFull"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nodeCount"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 254)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isEmpty"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 261)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantVariableCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 268)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ITE"), GGS_string ("binaryset"), GGS_string ("inTHENoperand"), GGS_string ("binaryset"), GGS_string ("inELSEoperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 275)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("print"), GGS_string ("[string]"), GGS_string ("inVariableList"), GGS_string ("[uint]"), GGS_string ("inBDDCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 284)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphvizDump"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 293)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphviz"), GGS_string ("[string]"), GGS_string ("inBitNameList"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 300)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transformedBy"), GGS_string ("[uint]"), GGS_string ("inTransformationArray"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 308)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 316)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 324)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 331)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 338)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 345)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigValueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 354)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedValueCount"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 363)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64ValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("[u64]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 370)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 377)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueListWithNameList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("[string]"), GGS_string ("inNameList"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 384)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("predicateStringValue"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 391)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedStringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 398)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap10"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 405)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap021"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 412)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap102"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 419)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap120"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 426)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap201"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 433)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap210"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 440)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transposedBy"), GGS_string ("[uint]"), GGS_string ("inTransposeVector"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 447)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transitiveClosure"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 454)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("accessibleStates"), GGS_string ("binaryset"), GGS_string ("inInitialStateSet"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 461)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("implies"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 468)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("equalTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 475)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("notEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 482)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowerOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 489)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("greaterOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 496)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictGreaterThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 503)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictLowerThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 510)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetByTranslatingFromIndex"), GGS_string ("uint"), GGS_string ("inFirstIndexToTranslate"), GGS_string ("uint"), GGS_string ("inTranslation"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 517)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsValue"), GGS_string ("u64"), GGS_string ("inValue"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 524)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existsOnBitRange"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 531)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setNodeTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 545)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setAndTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 553)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_timerPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_0 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 30)) ;
  result = temp_0 ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 36)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                       GGS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("stop"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("resume"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 49)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GGS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("msFromStart"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 68)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isRunning"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 75)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("start"), GGS_string ("timer"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 89)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 101))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_lstring joker_1661 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_1661, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 30)), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 30)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("homeDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("newWithStdIn"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("retrieveAndResetTemplateString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separatorString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSymbolicLinkContents"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSourceFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDateTime"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariable"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariableOrEmpty"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppLineComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppSpaceComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppTitleComment"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppChar"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsJoinedByString"), GGS_string ("[string]"), GGS_string ("inComponents"), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByRepeatingString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSequenceOfCharacters"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 186)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classMethodMap & outArgument_outClassMethodMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFile"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFileIfExists"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeEmptyDirectory"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeDirectoryRecursively"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 225)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_7373 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_7373, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 232)) ;
  }
  GGS_unifiedTypeMapEntry var_boolType_7463 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_boolType_7463, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 233)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_7538 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)), GGS_string ("inStartPath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)), GGS_string ("inFileName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)), GGS_string ("inContents"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFile"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 240)), inCompiler COMMA_HERE), var_argList_7538, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 239)) ;
  }
  var_argList_7538 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("startPath").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)), GGS_string ("inStartPath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("fileName").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)), GGS_string ("inFileName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("lineComment").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)), GGS_string ("inLineCommentPrefix"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("header").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)), GGS_string ("inHeader"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)), GGS_string ("inDefaultUserZone1"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)), GGS_string ("inGeneratedZone2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)), GGS_string ("inDefaultUserZone2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)), var_stringType_7373, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)), GGS_string ("inGeneratedZone3"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)) ;
  var_argList_7538.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)), var_boolType_7463, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)), GGS_string ("inMakeExecutable"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFileWithPattern"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 256)), inCompiler COMMA_HERE), var_argList_7538, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 255)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeSymbolicLinkWithPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GGS_string ("makeDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 307)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_10703 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10793 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_10793, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 314)) ;
  }
  var_argList_10703.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)), var_t_10793, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)), GGS_string ("inFilePath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_10793, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 316)) ;
  }
  var_argList_10703.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)), var_t_10793, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)), GGS_string ("outFileModified"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 320)), var_argList_10703, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 322)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 324)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToExecutableFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 328)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 329)), var_argList_10703, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 331)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 333)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 327)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inCapacity"), GGS_string ("setCapacity"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("incIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("decIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inColumnIndex"), GGS_string ("appendSpacesUntilColumn"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("insertCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("outChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("removeCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 395)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastCharacter"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingFirst"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 419)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string ("lstring"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 426)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string ("lstring"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 433)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doesEnvironmentVariableExist"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 440)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 447)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithUnicodeEscaping"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 461)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("assemblerRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileNameRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 475)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nameRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 482)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 489)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("identifierRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 496)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decodedStringFromRepresentation"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 503)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("HTMLRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 510)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEscapingQuestionMark"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 517)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Representation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithoutDelimiters"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 531)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 538)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32Representation"), GGS_string ("withZeroTerminator"), GGS_string ("bool"), GGS_string ("inAppendZeroTerminator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 545)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("trimmingSpaces"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 555)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasPrefix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPrefix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 562)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuffix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSuffix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 571)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("md5"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 580)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sha256"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 587)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsignedNumber"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 594)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsignedNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 601)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsigned64Number"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 608)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsigned64Number"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 615)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedNumber"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 622)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 629)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSigned64Number"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 636)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSigned64Number"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 643)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedBigInt"), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 650)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint\?"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 657)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedBigInt"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 664)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDoubleNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 671)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleNumber"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 678)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capacity"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 685)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isSymbolicLink"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 692)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExists"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 699)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExists"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 706)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pathExtension"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 713)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nativePathWithUnixPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 720)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unixPathWithNativePath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 727)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastPathComponent"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 734)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingPathExtension"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 741)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capitalizingFirstCharacter"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 748)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("firstCharacterOrNul"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 755)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingLastPathComponent"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 762)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("standardizedPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 769)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowercased"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 776)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uppercased"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 783)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("reversed"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 790)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentColumn"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 797)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 804)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("popen"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 811)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEnclosedWithin"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 818)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inArguments"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 827)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenCommandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inArguments"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 836)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("characterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 845)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 854)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacterInRange"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inLastCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 863)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingCharacterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 876)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subStringFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 885)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 894)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 903)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inStart"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 912)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 921)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("relativePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 930)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsSeparatedByString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 938)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 946)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 955)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftAndRightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 964)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacing"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSearchedString"), GGS_string ("by"), GGS_string ("string"), GGS_string ("inReplacementString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 973)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 982)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 992)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directories"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1001)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesWithExtensions"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inExtensionList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1010)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFilesWithExtensions"), GGS_string ("recursive"), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inExtensionList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1019)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1040))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@bigintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_bigintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 30))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("zero"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 39)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_bigIntType_2432 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), var_bigIntType_2432, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 55)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_2487 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_2487.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)), var_bigIntType_2432, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)), GGS_string ("inDivisor"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)) ;
  var_argList_2487.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("quotient").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)), var_bigIntType_2432, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)), GGS_string ("outQuotient"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)) ;
  var_argList_2487.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("remainder").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)), var_bigIntType_2432, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)), GGS_string ("outRemainder"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("divideBy"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 61)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 62)), var_argList_2487, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 64)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 66)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 60)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), GGS_string ("inBit"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 78)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("complementBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 88)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt64"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt64"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 125)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 132)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("spacedString"), GGS_string ("uint"), GGS_string ("inSeparation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 147)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForSignedRepresentation"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForUnsignedRepresentation"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u8"), GGS_string ("u8"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 193)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 200)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 207)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 214)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("abs"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 221)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitAtIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 228)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isZero"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 236)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sign"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 243)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForUnsignedRepresentation"), GGS_string ("[uint]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 250)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForSignedRepresentation"), GGS_string ("[uint]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 257)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForUnsignedRepresentation"), GGS_string ("[uint]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 264)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForSignedRepresentation"), GGS_string ("[uint]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 271)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForUnsignedRepresentation"), GGS_string ("[u64]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 278)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForSignedRepresentation"), GGS_string ("[u64]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 285)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_bigintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 303)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 303)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 303)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@locationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string ("location"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("next"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separator"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@locationPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GGS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 72)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 73)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 80)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 87)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 94)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("file"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 101)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLine"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 108)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLine"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 115)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startColumn"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 122)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endColumn"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 129)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isNowhere"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 136)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("union"), GGS_string::makeEmptyString (), GGS_string ("location"), GGS_string ("inOtherLocation"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 143)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 156))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@buildOptionValueDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_buildOptionValueDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_buildOptionValueDeclarationAST temp_0 = this ;
  result = GGS_string ("build option @").add_operation (temp_0.readProperty_buildOptionValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 29)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionValueDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionValueDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                          GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                          GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                          GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                          GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                          GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionValueDeclarationAST temp_0 = this ;
  const GGS_buildOptionValueDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2390 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_buildOptionValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 42)), temp_1.readProperty_buildOptionValueName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_buildOptionValueDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2390, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 43)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionValueDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionValueDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                    const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                    const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                    const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                    const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_classFunctionMap_3239 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_boolType_3310 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 58)), var_boolType_3310, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 58)) ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3376 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray ()) ;
  while (enumerator_3376.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 60)) ;
    var_classFunctionMap_3239.setter_insertKey (enumerator_3376.current (HERE).readProperty_mIdentifier (), temp_0, GGS_bool (false), var_boolType_3310, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 60)) ;
    }
    enumerator_3376.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_stringType_3541 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 62)), var_stringType_3541, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 62)) ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3611 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray ()) ;
  while (enumerator_3611.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_1 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 64)) ;
    var_classFunctionMap_3239.setter_insertKey (enumerator_3611.current (HERE).readProperty_mIdentifier (), temp_1, GGS_bool (false), var_stringType_3541, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 64)) ;
    }
    enumerator_3611.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_u_33__32_Type_3780 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("uint").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 66)), var_u_33__32_Type_3780, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 66)) ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3844 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray ()) ;
  while (enumerator_3844.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_2 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 68)) ;
    var_classFunctionMap_3239.setter_insertKey (enumerator_3844.current (HERE).readProperty_mIdentifier (), temp_2, GGS_bool (false), var_u_33__32_Type_3780, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 68)) ;
    }
    enumerator_3844.gotoNextObject () ;
  }
  GGS_setterMap var_setterMap_3983 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4026 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_4069 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4109 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_4138 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  const GGS_buildOptionValueDeclarationAST temp_3 = this ;
  const GGS_buildOptionValueDeclarationAST temp_4 = this ;
  const GGS_buildOptionValueDeclarationAST temp_5 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4205 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_3.readProperty_buildOptionValueName (), temp_4.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 82)), GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 83)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_4109, var_classFunctionMap_3239, var_getterMap_4069, var_setterMap_3983, var_instanceMethodMap_4026, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 94)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_4138, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 100)), GGS_string ("build-option-").add_operation (temp_5.readProperty_buildOptionValueName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 101)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 101)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 102)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4205.readProperty_typeName (), var_typeDefinition_4205, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 104)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionValueDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionValueDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                   const GGS_semanticContext constinArgument_inSemanticContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                   GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionValueDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_5913 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_buildOptionValueName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 117)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5913, var_nameForUsefulness_5913, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 118)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_buildOptionValueDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_5913  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 120)) ;
    }
  }
  const GGS_buildOptionValueDeclarationAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6175 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_buildOptionValueName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 123)) ;
  const GGS_buildOptionValueDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_buildOptionTypeForGeneration::init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (GGS_string ("build option ").add_operation (temp_4.readProperty_buildOptionValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 125)), var_selfType_6175, constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 124)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_7519 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 150)) ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_buildOptionGenerationTemplate_buildOptionTypeHeader_31_ (inCompiler, var_selfTypeDefinition_7519.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_7519.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 153)) COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 151))) ;
  const GGS_buildOptionTypeForGeneration temp_1 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_7519.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 157)), var_selfTypeDefinition_7519.readProperty_classFunctionMap (), var_selfTypeDefinition_7519.readProperty_classMethodMap () COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 155))), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 168)) ;
  const GGS_buildOptionTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8439 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 169)) ;
  const GGS_buildOptionTypeForGeneration temp_2 = this ;
  const GGS_buildOptionTypeForGeneration temp_3 = this ;
  const GGS_buildOptionTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_buildOptionGenerationTemplate_buildOptionTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_8439.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_8439.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 172)), temp_2.readProperty_boolBuildOptionArray (), temp_3.readProperty_u_33__32_BuildOptionArray (), temp_4.readProperty_stringBuildOptionArray () COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 170))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'buildOptionGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_buildOptionGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_buildOptionGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_buildOptionGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_buildOptionGenerationTemplate_0,
  0,
  gWrapperAllDirectories_buildOptionGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'buildOptionGenerationTemplate buildOptionTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_buildOptionGenerationTemplate_buildOptionTypeHeader_31_ (Compiler * /* inCompiler */,
                                                                                        const GGS_string & in_TYPE_5F_NAME,
                                                                                        const GGS_string & in_TYPE_5F_IDENTIFIER
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Package ") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("  {\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'buildOptionGenerationTemplate buildOptionTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_buildOptionGenerationTemplate_buildOptionTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                    const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                                    const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                    const GGS__5B_projectBuildOption_5D_ & in_BOOL_5F_OPTION_5F_ARRAY,
                                                                                                    const GGS__5B_projectBuildOption_5D_ & in_UINT_5F_OPTION_5F_ARRAY,
                                                                                                    const GGS__5B_projectBuildOption_5D_ & in_STRING_5F_OPTION_5F_ARRAY
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                               Bool options\n") ;
  GGS_uint index_188_ (0) ;
  if (in_BOOL_5F_OPTION_5F_ARRAY.isValid ()) {
    UpEnumerator__5B_projectBuildOption_5D_ enumerator_188 (in_BOOL_5F_OPTION_5F_ARRAY) ;
    while (enumerator_188.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nBoolCommandLineOption gBuildOption_") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" (\n  \"build\",\n  \"z\"") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mInvocationChar ().readProperty_char ().getter_uint (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 9)).getter_string (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mInvocationString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mExplanationString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString ("\n) ;\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_bool (gBuildOption_") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (".readProperty_value ()) ;\n}\n\n") ;
      enumerator_188.gotoNextObject () ;
      index_188_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                               U32 options\n") ;
  GGS_uint index_1218_ (0) ;
  if (in_UINT_5F_OPTION_5F_ARRAY.isValid ()) {
    UpEnumerator__5B_projectBuildOption_5D_ enumerator_1218 (in_UINT_5F_OPTION_5F_ARRAY) ;
    while (enumerator_1218.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nUIntCommandLineOption gBuildOption_") ;
      result.appendString (enumerator_1218.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (\n  \"build\",\n  \"z\"") ;
      result.appendString (enumerator_1218.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_1218.current_entry (HERE).readProperty_mInvocationChar ().readProperty_char ().getter_uint (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 29)).getter_string (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_1218.current_entry (HERE).readProperty_mInvocationString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 30)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_1218.current_entry (HERE).readProperty_mExplanationString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 31)).stringValue ()) ;
      result.appendString (",\n  0\n) ;\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_1218.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_uint (gBuildOption_") ;
      result.appendString (enumerator_1218.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (".readProperty_value ()) ;\n}\n\n") ;
      enumerator_1218.gotoNextObject () ;
      index_1218_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                              String options\n") ;
  GGS_uint index_2257_ (0) ;
  if (in_STRING_5F_OPTION_5F_ARRAY.isValid ()) {
    UpEnumerator__5B_projectBuildOption_5D_ enumerator_2257 (in_STRING_5F_OPTION_5F_ARRAY) ;
    while (enumerator_2257.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nStringCommandLineOption gBuildOption_") ;
      result.appendString (enumerator_2257.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (" (\n  \"build\",\n  \"z\"") ;
      result.appendString (enumerator_2257.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_2257.current_entry (HERE).readProperty_mInvocationChar ().readProperty_char ().getter_uint (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 50)).getter_string (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_2257.current_entry (HERE).readProperty_mInvocationString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (",\n  ") ;
      result.appendString (enumerator_2257.current_entry (HERE).readProperty_mExplanationString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (",\n  \"\"\n) ;\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_string GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_2257.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 58)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_string (gBuildOption_") ;
      result.appendString (enumerator_2257.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionValue.cpp.galgasTemplate", 59)).stringValue ()) ;
      result.appendString (".readProperty_value ()) ;\n}\n") ;
      enumerator_2257.gotoNextObject () ;
      index_2257_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u16PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_31__36_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_u_31__36__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 12))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u16PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_31__36_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 24)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u16PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_31__36_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u16"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 32)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u16PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_31__36_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 53)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string ("u16"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string ("u16"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string ("u16"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 116)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 123)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 130)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 144)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u16PredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_31__36_PredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@buildOptionStringDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_buildOptionStringDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_buildOptionStringDeclarationAST temp_0 = this ;
  result = GGS_string ("build option @").add_operation (temp_0.readProperty_buildOptionStringName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionStringDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionStringDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                           GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                           GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                           GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                           GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                           GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionStringDeclarationAST temp_0 = this ;
  const GGS_buildOptionStringDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2464 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_buildOptionStringName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 43)), temp_1.readProperty_buildOptionStringName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_buildOptionStringDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2464, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 44)) ;
  }
  const GGS_buildOptionStringDeclarationAST temp_3 = this ;
  const GGS_buildOptionStringDeclarationAST temp_4 = this ;
  GGS_lstring var_dep_2615 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_buildOptionValueName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 45)), temp_4.readProperty_buildOptionStringName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2464, var_dep_2615 COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 46)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionStringDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionStringDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                     const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                     const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                     const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                     const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_3500 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 60)), var_stringType_3500, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 60)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_3538 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3617 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray ()) ;
  while (enumerator_3617.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 63)) ;
    var_classFunctionMap_3538.setter_insertKey (enumerator_3617.current (HERE).readProperty_mIdentifier (), temp_0, GGS_bool (false), var_stringType_3500, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 63)) ;
    }
    enumerator_3617.gotoNextObject () ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3792 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray ()) ;
  while (enumerator_3792.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_1 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 66)) ;
    var_classFunctionMap_3538.setter_insertKey (enumerator_3792.current (HERE).readProperty_mIdentifier (), temp_1, GGS_bool (false), var_stringType_3500, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 66)) ;
    }
    enumerator_3792.gotoNextObject () ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3968 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray ()) ;
  while (enumerator_3968.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_2 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 69)) ;
    var_classFunctionMap_3538.setter_insertKey (enumerator_3968.current (HERE).readProperty_mIdentifier (), temp_2, GGS_bool (false), var_stringType_3500, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 69)) ;
    }
    enumerator_3968.gotoNextObject () ;
  }
  GGS_setterMap var_setterMap_4110 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4153 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_4196 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4236 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_4265 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  const GGS_buildOptionStringDeclarationAST temp_3 = this ;
  const GGS_buildOptionStringDeclarationAST temp_4 = this ;
  const GGS_buildOptionStringDeclarationAST temp_5 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4332 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_3.readProperty_buildOptionStringName (), temp_4.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 83)), GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 84)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_4236, var_classFunctionMap_3538, var_getterMap_4196, var_setterMap_4110, var_instanceMethodMap_4153, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 95)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_4265, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 101)), GGS_string ("option-").add_operation (temp_5.readProperty_buildOptionStringName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 102)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 102)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 103)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4332.readProperty_typeName (), var_typeDefinition_4332, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 105)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionStringDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionStringDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                    GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionStringDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6036 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_buildOptionStringName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 118)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6036, var_nameForUsefulness_6036, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 119)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_buildOptionStringDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6036  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 121)) ;
    }
  }
  const GGS_buildOptionStringDeclarationAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6299 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_buildOptionStringName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 124)) ;
  const GGS_buildOptionStringDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_buildOptionStringTypeForGeneration::init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (GGS_string ("build option string ").add_operation (temp_4.readProperty_buildOptionStringName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 126)), var_selfType_6299, constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 125)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionStringTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionStringTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                            GGS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionStringTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_7664 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 151)) ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_buildOptionStringGenerationTemplate_buildOptionTypeHeader_31_ (inCompiler, var_selfTypeDefinition_7664.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_7664.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 154)) COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 152))) ;
  const GGS_buildOptionStringTypeForGeneration temp_1 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_7664.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 158)), var_selfTypeDefinition_7664.readProperty_classFunctionMap (), var_selfTypeDefinition_7664.readProperty_classMethodMap () COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 156))), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 156)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionStringTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionStringTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionStringTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 169)) ;
  const GGS_buildOptionStringTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8590 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 170)) ;
  const GGS_buildOptionStringTypeForGeneration temp_2 = this ;
  const GGS_buildOptionStringTypeForGeneration temp_3 = this ;
  const GGS_buildOptionStringTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_buildOptionStringGenerationTemplate_buildOptionTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_8590.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_8590.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 173)), temp_2.readProperty_boolBuildOptionArray (), temp_3.readProperty_u_33__32_BuildOptionArray (), temp_4.readProperty_stringBuildOptionArray () COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 171))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'buildOptionStringGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_buildOptionStringGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_buildOptionStringGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_buildOptionStringGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_buildOptionStringGenerationTemplate_0,
  0,
  gWrapperAllDirectories_buildOptionStringGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'buildOptionStringGenerationTemplate buildOptionTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_buildOptionStringGenerationTemplate_buildOptionTypeHeader_31_ (Compiler * /* inCompiler */,
                                                                                              const GGS_string & in_TYPE_5F_NAME,
                                                                                              const GGS_string & in_TYPE_5F_IDENTIFIER
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Package ") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("  {\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'buildOptionStringGenerationTemplate buildOptionTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_buildOptionStringGenerationTemplate_buildOptionTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                          const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                          const GGS__5B_projectBuildOption_5D_ & in_BOOL_5F_OPTION_5F_ARRAY,
                                                                                                          const GGS__5B_projectBuildOption_5D_ & in_UINT_5F_OPTION_5F_ARRAY,
                                                                                                          const GGS__5B_projectBuildOption_5D_ & in_STRING_5F_OPTION_5F_ARRAY
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                               Bool options\n") ;
  GGS_uint index_188_ (0) ;
  if (in_BOOL_5F_OPTION_5F_ARRAY.isValid ()) {
    UpEnumerator__5B_projectBuildOption_5D_ enumerator_188 (in_BOOL_5F_OPTION_5F_ARRAY) ;
    while (enumerator_188.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_string GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionString.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_string (gBuildOption_") ;
      result.appendString (enumerator_188.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionString.cpp.galgasTemplate", 7)).stringValue ()) ;
      result.appendString (".readProperty_string ()) ;\n}\n\n") ;
      enumerator_188.gotoNextObject () ;
      index_188_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                               U32 options\n") ;
  GGS_uint index_731_ (0) ;
  if (in_UINT_5F_OPTION_5F_ARRAY.isValid ()) {
    UpEnumerator__5B_projectBuildOption_5D_ enumerator_731 (in_UINT_5F_OPTION_5F_ARRAY) ;
    while (enumerator_731.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_string GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_731.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionString.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_string (gBuildOption_") ;
      result.appendString (enumerator_731.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionString.cpp.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (".readProperty_string ()) ;\n}\n\n") ;
      enumerator_731.gotoNextObject () ;
      index_731_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                              String options\n") ;
  GGS_uint index_1278_ (0) ;
  if (in_STRING_5F_OPTION_5F_ARRAY.isValid ()) {
    UpEnumerator__5B_projectBuildOption_5D_ enumerator_1278 (in_STRING_5F_OPTION_5F_ARRAY) ;
    while (enumerator_1278.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n\nGGS_string GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_1278.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionString.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_string (gBuildOption_") ;
      result.appendString (enumerator_1278.current_entry (HERE).readProperty_mIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("buildOptionString.cpp.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (".readProperty_string ()) ;\n}\n") ;
      enumerator_1278.gotoNextObject () ;
      index_1278_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_u_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 28))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 40)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 48)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64MaskWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 55)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64BaseValueWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 64)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64WithBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 73)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 96)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 116)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintSlice"), GGS_string ("uint"), GGS_string ("inStartBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 123)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 132)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 164)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 178)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 185)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_u_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("u64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 26)) ;
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("u64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 27)) ;
  }
  {
  routine_append_5F_stringString_5F_StructAST_26_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 29)) ;
  }
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("stringString"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 30)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_u_38_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("u8"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 32)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_u_31__36_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("u16"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 33)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_bigintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bigint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 34)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_binarysetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("binaryset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 35)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_boolPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bool"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 36)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_charPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("char"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 37)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_dataPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("data"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 38)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_doublePredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("f64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 39)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_filewrapperPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("filewrapper"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_locationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("location"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_sintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("sint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_s_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("s64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 43)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_stringPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("string"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 44)) ;
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 45)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 46)) ;
  }
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("lstring"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 47)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_uintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("uint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 48)) ;
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 49)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_stringsetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("stringset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 50)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_timerPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("timer"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 51)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_applicationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("application"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 53)) ;
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 55)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 56)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 57)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("f64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 58)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 59)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("s64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 60)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 61)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("u64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 62)) ;
  }
  {
  routine_appendStructASTForRangeType_26_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 64)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                             GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_lstring var_key_5969 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 101)), GGS_location::class_func_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 101)), inCompiler COMMA_HERE) ;
  {
  const GGS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5969, temp_1, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 102)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_constructorMap_6819 ;
  const GGS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getClassFunctionMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_constructorMap_6819, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 115)) ;
  GGS_getterMap var_getterMap_6887 ;
  const GGS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_getterMap_6887, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 116)) ;
  GGS_setterMap var_setterMap_6950 ;
  const GGS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_setterMap_6950, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 117)) ;
  GGS_instanceMethodMap var_instanceMethodMap_7029 ;
  const GGS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_7029, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 118)) ;
  GGS_classMethodMap var_classMethodMap_7110 ;
  const GGS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_classMethodMap_7110, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 119)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationList_7211 ;
  GGS_string var_enumeratedTypeName_7247 ;
  const GGS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_enumerationList_7211, var_enumeratedTypeName_7247, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 120)) ;
  {
  const GGS_predefinedTypeAST temp_6 = this ;
  GGS_unifiedTypeMapEntry joker_7335 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_6.readProperty_mPredefinedTypeName (), joker_7335, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 125)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedTypeEntry_7388 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_enumeratedTypeName_7247.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_enumeratedTypeEntry_7388 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("all-predefined-types.galgas4", 129)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_7247, var_enumeratedTypeEntry_7388, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 131)) ;
    }
  }
  GGS_initializerMap var_initializerMap_7644 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_predefinedTypeAST temp_8 = this ;
  UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ enumerator_7693 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 135))) ;
  while (enumerator_7693.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_formalParameterList_7747 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_7795 (enumerator_7693.current (HERE)) ;
    while (enumerator_7795.hasCurrentObject ()) {
      var_formalParameterList_7747.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_7795.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7795.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 140)), enumerator_7795.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_7795.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 138)) ;
      enumerator_7795.gotoNextObject () ;
    }
    {
    var_initializerMap_7644.setter_insertKey (extensionGetter_initializerSignature (enumerator_7693.current (HERE), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 145)).getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 145)), var_formalParameterList_7747, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 145)) ;
    }
    enumerator_7693.gotoNextObject () ;
  }
  {
  const GGS_predefinedTypeAST temp_9 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_9.readProperty_mPredefinedTypeName ().getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 154)), GGS_bool (false), var_initializerMap_7644, var_getterMap_6887, var_setterMap_6950, var_instanceMethodMap_7029, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 147)) ;
  }
  const GGS_predefinedTypeAST temp_10 = this ;
  const GGS_predefinedTypeAST temp_11 = this ;
  const GGS_predefinedTypeAST temp_12 = this ;
  const GGS_predefinedTypeAST temp_13 = this ;
  const GGS_predefinedTypeAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8616 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (GGS_lstring::init_21__21_ (temp_10.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 164)), inCompiler COMMA_HERE), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("all-predefined-types.galgas4", 168)), callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_12.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 169)), callExtensionGetter_supportsCollectionValue ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 170)), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_7644, var_constructorMap_6819, var_getterMap_6887, var_setterMap_6950, var_instanceMethodMap_7029, var_classMethodMap_7110, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("all-predefined-types.galgas4", 180)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), var_enumerationList_7211, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 184)), GGS_bool (false), var_enumeratedTypeEntry_7388, GGS_string ("predefined-types"), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("all-predefined-types.galgas4", 188)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8616.readProperty_typeName (), var_typeDefinition_8616, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 190)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                      const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                      GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_10181 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (temp_0.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 203)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 203)) ;
  const GGS_predefinedTypeAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_10297 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (temp_1.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 205)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 205)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10297, var_nameForUsefulness_10297, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 206)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10297  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 207)) ;
  UpEnumerator_initializerMap enumerator_10621 (extensionGetter_definition (var_selfType_10181, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 209)).readProperty_initializerMap ()) ;
  while (enumerator_10621.hasCurrentObject ()) {
    const GGS_predefinedTypeAST temp_2 = this ;
    GGS_lstring var_initializerNameForUsefulness_10649 = function_initializerNameForUsefulEntitiesGraph (temp_2.readProperty_mPredefinedTypeName ().getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 211)), extensionGetter_initializerSignature (enumerator_10621.current (HERE).readProperty_mArgumentTypeList (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 210)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10649, var_initializerNameForUsefulness_10649, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 214)) ;
    }
    ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10649  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 215)) ;
    enumerator_10621.gotoNextObject () ;
  }
  const GGS_predefinedTypeAST temp_3 = this ;
  const GGS_predefinedTypeAST temp_4 = this ;
  const GGS_predefinedTypeAST temp_5 = this ;
  const GGS_predefinedTypeAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_primitiveTypeForGeneration::init_21_infoMessage_21__21__21__21_isPackage (GGS_string ("Predefined type ").add_operation (temp_3.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 219)), var_selfType_10181, temp_4.readProperty_mPredefinedTypeName (), callExtensionGetter_cppDeclarationString ((const cPtr_predefinedTypeAST *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 222)), GGS_bool (ComparisonKind::equal, callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 223)).objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("all-predefined-types.galgas4", 223)))), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 218)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedArrayTypeAST&?'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedArrayTypeAST_26__3F_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                   const GGS_string constinArgument_inElementTypeName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arrayTypeName_13768 = function_makeArrayTypeName (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 291)) ;
  ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (var_arrayTypeName_13768  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 292)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (GGS_bool (true), var_arrayTypeName_13768.getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 295)), constinArgument_inElementTypeName.getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 296)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 293)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F_ (GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationListASTs,
                                                         const GGS_string constinArgument_inElementTypeName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_14385 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_propertyList_14385.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 307)), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 308)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 309)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 310)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 312)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 306)) ;
  var_propertyList_14385.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 315)), GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 316)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 317)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 318)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 320)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 314)) ;
  GGS_structDeclarationAST var_type_14922 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 324)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 324)), inCompiler COMMA_HERE), var_propertyList_14385, GGS_string::makeEmptyString (), GGS_structComparison::class_func_equatable (SOURCE_FILE ("all-predefined-types.galgas4", 327)), GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioDeclarationListASTs.plusPlusAssignOperation (var_type_14922  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 330)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'append_stringString_StructAST&'
//
//--------------------------------------------------------------------------------------------------

void routine_append_5F_stringString_5F_StructAST_26_ (GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationListASTs,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_15389 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_propertyList_15389.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 338)), GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 339)), GGS_string ("left").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 340)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 341)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 343)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 337)) ;
  var_propertyList_15389.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 346)), GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 347)), GGS_string ("right").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 348)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 349)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 351)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 345)) ;
  GGS_structDeclarationAST var_type_15813 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_string ("stringString").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 355)), var_propertyList_15389, GGS_string::makeEmptyString (), GGS_structComparison::class_func_equatable (SOURCE_FILE ("all-predefined-types.galgas4", 358)), GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioDeclarationListASTs.plusPlusAssignOperation (var_type_15813  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 361)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26_ (GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationListASTs,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_16274 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_propertyList_16274.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 369)), GGS_string ("uint").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 370)), GGS_string ("start").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 371)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 372)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 374)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 368)) ;
  var_propertyList_16274.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 377)), GGS_string ("uint").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 378)), GGS_string ("length").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 379)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 380)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 382)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 376)) ;
  ioArgument_ioDeclarationListASTs.plusPlusAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_string ("range").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 386)), var_propertyList_16274, GGS_string ("uint"), GGS_structComparison::class_func_equatable (SOURCE_FILE ("all-predefined-types.galgas4", 389)), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 384)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (Compiler * inCompiler,
                                                                                               const GGS_sortedLexicalStyleArray & in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n// Lexical styles\n//--------------------------------------------------------------------------------------------------\n\nString styleNameForIndex (const uint32_t inStyleIndex) {\n  const char * array [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.getter_count (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 10)).add_operation (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.appendString ("] = {\n    \"Default Style\", // 0\n") ;
  GGS_uint index_564_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_564 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_564.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_564.current_entry (HERE).readProperty_name ().getter_cStringRepresentation (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (enumerator_564.current_entry (HERE).readProperty_index ().getter_string (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_564.gotoNextObject () ;
      index_564_.increment () ;
    }
  }
  result.appendString ("    \"Lexical error\", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.getter_count (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 16)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 16)).getter_string (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 16)).stringValue ()) ;
  result.appendString ("\n    \"Template\" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.getter_count (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 17)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 17)).getter_string (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString ("\n  } ;\n  return (inStyleIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.getter_count (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 19)).add_operation (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 19)).getter_string (SOURCE_FILE ("predefined_types.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.appendString (") \? array [inStyleIndex] : \"\" ;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"AC_GALGAS_root.h\"\n#include \"GALGAS_TypeDescriptor.h\"\n#include \"ComparisonResult.h\"\n#include \"ComparisonKind.h\"\n#include \"EnumerationOrder.h\"\n#include \"Enumerator_range.h\"\n#include \"String-class.h\"\n#include \"Timer.h\"\n#include \"AC_GALGAS_reference_class.h\"\n#include \"AC_GALGAS_enumAssociatedValues.h\"\n#include \"DirectedGraph.h\"\n#include \"AbstractStrongPtrClass.h\"\n#include \"PtrWeakReferenceProxy.h\"\n#include \"AC_GALGAS_weak_reference.h\"\n#include \"BoolCommandLineOption.h\"\n#include \"UIntCommandLineOption.h\"\n#include \"StringCommandLineOption.h\"\n#include \"PrologueEpilogue.h\"\n#include \"BigSigned.h\"\n#include \"GALGAS_GenericDictionary.h\"\n#include \"Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n// Lexical styles\n//--------------------------------------------------------------------------------------------------\n\nString styleNameForIndex (const uint32_t inStyleIndex) ;\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @sint type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_sint final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_sint (const int32_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate s64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_s_36__34__5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @s64 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_s_36__34_ final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mS64 ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t s64 (void) const { return mS64 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_s_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_s_36__34_ (const int64_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @uint type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_uint final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue += 1 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GGS_uint (const uint32_t inValue) ;\n  public: GGS_uint (const bool inValid, const uint32_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate u8_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_u_38__5F_type (Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @u8 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_u_38_ final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint8_t mU8 ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint8_t u8 (void) const { return mU8 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_u_38_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_u_38_ (const uint8_t inValue) ;\n  public: GGS_u_38_ (const bool inValid, const uint8_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate u16_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_u_31__36__5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @u16 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_u_31__36_ final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint16_t mU16 ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint16_t u16 (void) const { return mU16 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_u_31__36_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_u_31__36_ (const uint16_t inValue) ;\n  public: GGS_u_31__36_ (const bool inValid, const uint16_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate u64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_u_36__34__5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @u64 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_u_36__34_ final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mU64 ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t u64 (void) const { return mU64 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_u_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_u_36__34_ (const uint64_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @bool type\n//--------------------------------------------------------------------------------------------------\n\nenum class GalgasBool {boolNotValid, boolFalse, boolTrue} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_bool final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: GalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GGS_bool (const bool inValue) ; // Is built\n  public: GGS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GGS_bool (const ComparisonKind inComparisonKind,\n                    const ComparisonResult inComparisonResult) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// @binaryset type\n//--------------------------------------------------------------------------------------------------\n\n#include \"BinaryDecisionDiagram.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_binaryset final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: BinaryDecisionDiagram mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline BinaryDecisionDiagram bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GGS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_binaryset (const BinaryDecisionDiagram & inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @location type\n//--------------------------------------------------------------------------------------------------\n\n#include \"LocationInSource.h\"\n#include \"SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: class InternalLocation * mInternalLocation ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const ;\n  public: LocationInSource endLocation (void) const ;\n  public: SourceTextInString sourceText (void) const ;\n\n//--------------------------------- Default constructor\n  public: GGS_location (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_location (const GGS_location & inSource) ;\n  public: GGS_location & operator = (const GGS_location & inSource) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GGS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_location (const LocationInSource & inStartLocationInSource,\n                        const LocationInSource & inEndLocationInSource,\n                        const SourceTextInString & inSourceText) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Phase 1: @data enumerator\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_data final {\n  public: UpEnumerator_data (const class GGS_data & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }\n\n  public: void gotoNextObject (void) { mIndex += 1 ; }\n\n//--- Current element access\n  public: class GGS_u_38_ current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: U8Data mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_data (const UpEnumerator_data &) = delete ;\n  private: UpEnumerator_data & operator = (const UpEnumerator_data &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_data final {\n\n  public: DownEnumerator_data (const class GGS_data & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: void gotoNextObject (void) { mIndex -= 1 ; }\n\n//--- Current element access\n  public: class GGS_u_38_ current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: U8Data mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_data (const DownEnumerator_data &) = delete ;\n  private: DownEnumerator_data & operator = (const DownEnumerator_data &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//   @data type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_data final : public AC_GALGAS_root {\n\n//--------------------------------- Friends\n  friend class UpEnumerator_data ;\n  friend class DownEnumerator_data ;\n\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: U8Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline U8Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GGS_data (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_data (const U8Data & inData) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @char type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_char final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_char (const utf32 inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate f64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_f_36__34__5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @f64 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_f_36__34_ final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mF64 ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double f64 (void) const { return mF64 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_f_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_f_36__34_ (const double inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @string type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_string final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GGS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GGS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Phase 1: @stringset\n//--------------------------------------------------------------------------------------------------\n//  SharedStringMapNode\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMapNode final : public SharedObject {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: OptionalSharedRef <SharedStringMapNode> mInfPtr ;\n  private: OptionalSharedRef <SharedStringMapNode> mSupPtr ;\n  private: int32_t mBalance ;\n  public: const String mKey ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: SharedStringMapNode (const String & inKey\n                               COMMA_LOCATION_ARGS) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: virtual ~SharedStringMapNode (void) = default ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: SharedStringMapNode (const OptionalSharedRef <SharedStringMapNode> & inNodePtr\n                               COMMA_LOCATION_ARGS) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // No copy\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: SharedStringMapNode (const SharedStringMapNode &) = delete ;\n  private: SharedStringMapNode & operator = (const SharedStringMapNode &) = delete ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: static void populateStringArray (const OptionalSharedRef <SharedStringMapNode> & inNode,\n                                            GenericArray <String> & ioStringArray) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  friend class SharedStringMapRoot ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//  SharedStringMap\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMapRoot ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMap final {\n//--------------------------------- Private data members\n  private: OptionalSharedRef <SharedStringMapRoot> mSharedRoot ;\n\n//--------------------------------- Build\n  public: static SharedStringMap build (LOCATION_ARGS) ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const { return mSharedRoot.isNotNil () ; }\n\n//--------------------------------- Drop\n  public: void drop (void) ;\n\n//--------------------------------- Default constructor\n  public: SharedStringMap () ;\n\n//--------------------------------- Destructor\n  public: ~ SharedStringMap (void) ;\n\n//--------------------------------- Insulate\n  private: void insulate (LOCATION_ARGS) ;\n\n//--------------------------------- Handle copy\n  public: SharedStringMap (const SharedStringMap & inSource) ;\n  public: SharedStringMap & operator = (const SharedStringMap & inSource) ;\n\n//--------------------------------- Insert\n  public: void insert (OptionalSharedRef <SharedStringMapNode> & ioObject\n                       COMMA_LOCATION_ARGS) ;\n\n  public: void removeAndReturnRemovedNode (const String & inKey,\n                           OptionalSharedRef <SharedStringMapNode> & outRemovedNode\n                           COMMA_LOCATION_ARGS) ;\n\n  public: bool contains (const String & inKey) const ;\n\n  public: int32_t count (void) const ;\n\n  public: String rootNodeKey (void) const ;\n\n  public: GenericArray <String> sortedKeyArray (void) const ;\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_stringset final {\n  public: UpEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex < mStringArray.count () ; }\n\n  public: void gotoNextObject (void) { mIndex += 1 ; }\n\n//--- Current element access\n  public: class GGS_string current_key (LOCATION_ARGS) const ;\n  public: class GGS_string current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: const GenericArray <String> mStringArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_stringset (const UpEnumerator_stringset &) = delete ;\n  private: UpEnumerator_stringset & operator = (const UpEnumerator_stringset &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_stringset final {\n\n  public: DownEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: void gotoNextObject (void) { mIndex -= 1 ; }\n\n//--- Current element access\n  public: class GGS_string current_key (LOCATION_ARGS) const ;\n  public: class GGS_string current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: const GenericArray <String> mStringArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_stringset (const DownEnumerator_stringset &) = delete ;\n  private: DownEnumerator_stringset & operator = (const DownEnumerator_stringset &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//   @stringset type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_stringset final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: SharedStringMap mSharedMap ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedMap.isValid () ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mSharedMap.drop () ; }\n\n//--------------------------------- Default constructor\n  public: GGS_stringset (void) ;\n\n//--------------------------------- Virtual constructor\n  public: virtual ~ GGS_stringset (void) = default ;\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @filewrapper type\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper final {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper final {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_filewrapper final : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GGS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GGS_filewrapper (const GGS_filewrapper & inSource) ;\n  public: GGS_filewrapper & operator = (const GGS_filewrapper & inSource) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_package'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_package (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("@application package").stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_application final {\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @bigint type\n//--------------------------------------------------------------------------------------------------\n \nclass GGS_bigint final : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GGS_bigint (const BigSigned & inValue) ;\n  public: GGS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GGS_bigint (void) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @timer type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_timer final : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_timer (void) ;\n\n") ;
  return GGS_string (result) ;
}

