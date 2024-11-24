#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1076)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1086))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1086)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1096))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1096)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GGS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1107)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1107)).add_operation (GGS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1107))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1107)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1110)).add_operation (GGS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1110)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_2.readProperty_mObjcCocoaHeader (), GGS_string ("\n\n"), GGS_string ("\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1108)) ;
  }
  const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1120)).add_operation (GGS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1120))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1120)) ;
  const GGS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GGS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1121)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121)).add_operation (GGS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_6 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1124)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124)).add_operation (GGS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_6.readProperty_mObjcCocoaImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1122)) ;
  }
  const GGS_lexiqueDeclarationForGeneration temp_7 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_7.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1134)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1134)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1134))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1134)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_8 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_9 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_8.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1137)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1137)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1137)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_9.readProperty_mSwiftCocoaImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1153)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1162)) ;
  const GGS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1173)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GGS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GGS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1185)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1185))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1185)) ;
  cEnumerator_wrapperFileMap enumerator_47536 (constinArgument_inFilewrapperFileMap, EnumerationOrder::up) ;
  while (enumerator_47536.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1187)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1187))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1187)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_47536.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_47536.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1189))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1189)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_47536.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1191))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1191)) ;
    }
    enumerator_47536.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_47899 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_47899.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_47899.current_mRegularFileMap (HERE), enumerator_47899.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1195)) ;
    }
    enumerator_47899.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_regularFileIndexStringList_48430 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularBinaryContentIndexStringList_48480 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularTextContentIndexStringList_48539 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_directoryIndexStringList_48596 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_48430, var_directoryIndexStringList_48596, var_regularTextContentIndexStringList_48539, var_regularBinaryContentIndexStringList_48480, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1215)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_48430, var_directoryIndexStringList_48596, var_regularTextContentIndexStringList_48539, var_regularBinaryContentIndexStringList_48480, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223))) ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_49246 (temp_3.readProperty_mFilewrapperTemplateListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_49246.hasCurrentObject ()) {
    const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_49246.current_mFilewrapperTemplateName (HERE), enumerator_49246.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1232))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1232)) ;
    enumerator_49246.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inFilewrapperName,
                                                              const GGS_string constinArgument_inFilewrapperDirectory,
                                                              const GGS_uint constinArgument_inFilewrapperDirectoryIndex,
                                                              const GGS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GGS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_49969 (constinArgument_inFilewrapperRegularFileMap, EnumerationOrder::up) ;
  while (enumerator_49969.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_49969.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_contents_50056 = GGS_string::class_func_stringWithContentsOfFile (enumerator_49969.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1252)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)).add_operation (enumerator_49969.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1254)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_49969.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1255)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1256)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1257)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1257)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1258)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_50056.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1259)).objectCompare (GGS_uint (uint32_t (100U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GGS_stringlist var_components_50508 = var_contents_50056.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)) ;
            GGS_string var_lastLine_50601 ;
            {
            var_components_50508.setter_popLast (var_lastLine_50601, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1261)) ;
            }
            cEnumerator_stringlist enumerator_50624 (var_components_50508, EnumerationOrder::up) ;
            const bool bool_2 = true ;
            if (enumerator_50624.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssign_operation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1264)) ;
              while (enumerator_50624.hasCurrentObject () && bool_2) {
                GGS_string var_s_50720 = enumerator_50624.current_mValue (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)) ;
                ioArgument_ioImplementation.plusAssign_operation(var_s_50720.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1267)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1267)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1267)) ;
                enumerator_50624.gotoNextObject () ;
              }
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_50601.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1269)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                ioArgument_ioImplementation.plusAssign_operation(var_lastLine_50601.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1270)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1270)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          ioArgument_ioImplementation.plusAssign_operation(var_contents_50056.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1273)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1273)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1275)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_49969.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1276)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1276)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1277)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1278)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1279)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_49969.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1280)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_49969.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1282)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1282)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)) ;
        ioArgument_ioImplementation.plusAssign_operation(var_contents_50056.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1284)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1284)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_49969.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1286)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1287)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1288)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1288)) ;
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GGS_data var_contents_51898 = GGS_data::class_func_dataWithContentsOfFile (enumerator_49969.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291)) ;
      ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (enumerator_49969.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)).add_operation (enumerator_49969.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1294)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1295)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)).add_operation (var_contents_51898.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1295)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1295)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)).add_operation (var_contents_51898.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1296)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1296)).add_operation (GGS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1296)).add_operation (enumerator_49969.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)).add_operation (enumerator_49969.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1299)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)).add_operation (enumerator_49969.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1300)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1300)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1300)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1300)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)).add_operation (var_contents_51898.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1302)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1302)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)).add_operation (enumerator_49969.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)) ;
    }
    enumerator_49969.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_52904 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_52904.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_52904.current_lkey (HERE).readProperty_string (), enumerator_52904.current_mWrapperDirectoryIndex (HERE), enumerator_52904.current_mRegularFileMap (HERE), enumerator_52904.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)) ;
    }
    enumerator_52904.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)).add_operation (GGS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1322)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)) ;
  cEnumerator_wrapperFileMap enumerator_53510 (constinArgument_inFilewrapperRegularFileMap, EnumerationOrder::up) ;
  while (enumerator_53510.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_53510.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)) ;
    enumerator_53510.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)) ;
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (GGS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1332)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1332)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)) ;
  cEnumerator_wrapperDirectoryMap enumerator_54133 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_54133.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_54133.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)) ;
    enumerator_54133.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)) ;
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339)).add_operation (GGS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1340)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1341)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1341)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1341)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1343)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1343)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1343)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1343)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1344)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1344)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1345)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1345)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1345)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1345)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1345)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1356))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1356)) ;
  GGS_string var_filewrapperImplementation_55490 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GGS_string::makeEmptyString (), GGS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_55490, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_55490 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1366))) ;
  const GGS_filewrapperDeclarationForGeneration temp_5 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_55950 (temp_5.readProperty_mFilewrapperTemplateListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_55950.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_56103 = GGS_string::makeEmptyString () ;
    GGS_uint var_temporaryVariableIndex_56154 = GGS_uint (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_56200 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_56200.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1376))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1376)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_56320 (enumerator_55950.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
    while (enumerator_56320.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_56200.addAssign_operation (enumerator_56320.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1378)) ;
      enumerator_56320.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_56451 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_55950.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_56103, ioArgument_ioInclusionSet, var_temporaryVariableIndex_56154, var_unusedVariableCppNameSet_56200, var_useColumnMarker_56451, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1381)) ;
    }
    const GGS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_55950.current_mFilewrapperTemplateName (HERE), enumerator_55950.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_56200, var_useColumnMarker_56451, var_generatedCodeForInstructionList_56103 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1390))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1390)) ;
    enumerator_55950.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssign_operation(GGS_string ("class GGS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mCppDeclarationString () ;
  const GGS_primitiveTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_57937 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_57937.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)), var_selfTypeDefinition_57937.readProperty_classFunctionMap (), var_selfTypeDefinition_57937.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1422))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1422)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GGS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssign_operation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_57937.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)), var_selfTypeDefinition_57937.readProperty_isConcrete (), var_selfTypeDefinition_57937.readProperty_initializerMap (), var_selfTypeDefinition_57937.readProperty_classFunctionMap (), var_selfTypeDefinition_57937.readProperty_getterMap (), var_selfTypeDefinition_57937.readProperty_setterMap (), var_selfTypeDefinition_57937.readProperty_instanceMethodMap (), var_selfTypeDefinition_57937.readProperty_classMethodMap (), var_selfTypeDefinition_57937.readProperty_readSubscriptMap (), var_selfTypeDefinition_57937.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_57937.readProperty_features (), var_selfTypeDefinition_57937.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_57937.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_57937.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const GGS_string constinArgument_inDirectory,
                                                              const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                                              GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                              GGS_stringlist & ioArgument_ioToolCppFileList,
                                                              GGS_stringset & ioArgument_ioAllProductFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_generatedCode_59764 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_59865 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_59865.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59865.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_59865.current_mDeclaration (HERE).ptr (), var_generatedCode_59764, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)) ;
      }
    }
    enumerator_59865.gotoNextObject () ;
  }
  var_generatedCode_59764.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_60082 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_60082.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60082.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_59764.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_60082.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)) ;
      }
    }
    enumerator_60082.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_60273 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_60273.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60273.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1478)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GGS_stringset joker_60411 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_60436 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_60273.current_mDeclaration (HERE).ptr (), joker_60411, var_code_60436, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)) ;
        var_generatedCode_59764.plusAssign_operation(var_code_60436, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)) ;
      }
    }
    enumerator_60273.gotoNextObject () ;
  }
  var_generatedCode_59764.plusAssign_operation(GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_60584 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_60584.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60584.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_stringset joker_60735 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__60760 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_60584.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_60735, var_headerString_32__60760, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1486)) ;
        var_generatedCode_59764.plusAssign_operation(var_headerString_32__60760, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1487)) ;
      }
    }
    enumerator_60584.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1490)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1491)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1492)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.h"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_59764, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1493)) ;
      }
    }
  }
  var_generatedCode_59764 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_61526 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_61526.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_61526.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1508)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_59764.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_61526.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509)) ;
        GGS_stringset joker_61749 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_61774 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_61526.current_mDeclaration (HERE).ptr (), GGS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_61749, var_code_61774, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1510)) ;
        var_generatedCode_59764.plusAssign_operation(var_code_61774, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)) ;
      }
    }
    enumerator_61526.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1514)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1515)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.cpp"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_59764, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1517)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (Compiler * /* inCompiler */,
                                                                                  const GGS_string & /* in_COMPONENT_5F_NAME */,
                                                                                  const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_295_.increment () ;
      enumerator_295.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (Compiler * /* inCompiler */,
                                                                                          const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"Compiler.h\"\n#include \"galgas-input-output.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_264_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_264_.increment () ;
      enumerator_264.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const GGS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                              const GGS_lstringlist constinArgument_inRootEntities,
                                              const GGS_string /* constinArgument_inProductDirectory */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 42)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_stringlist var_undefinedNodeList_2160 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 44)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_2160.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 45)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GGS_string var_s_2277 = GGS_string ("usefulness computation, ").add_operation (var_undefinedNodeList_2160.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 46)).getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 46)).add_operation (GGS_string (" undefined nodes:"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 46)) ;
            cEnumerator_stringlist enumerator_2369 (var_undefinedNodeList_2160, EnumerationOrder::up) ;
            while (enumerator_2369.hasCurrentObject ()) {
              var_s_2277.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_2369.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)) ;
              enumerator_2369.gotoNextObject () ;
            }
            TC_Array <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 50)), var_s_2277, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 50)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GGS_lstringlist var_usefullEntityList_2535 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 53)) ;
          GGS_stringset var_usefullEntitySet_2629 = GGS_stringset::class_func_setWithLStringList (var_usefullEntityList_2535  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 54)) ;
          GGS_stringset var_allEntitySet_2709 = GGS_stringset::class_func_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 55))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
          GGS_stringset var_unusedEntities_2798 = var_allEntitySet_2709.substract_operation (var_usefullEntitySet_2629, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)) ;
          GGS_uselessEntityLocationMap var_uselessEntityLocationMap_2883 = GGS_uselessEntityLocationMap::init (inCompiler COMMA_HERE) ;
          cEnumerator_stringset enumerator_2924 (var_unusedEntities_2798, EnumerationOrder::up) ;
          while (enumerator_2924.hasCurrentObject ()) {
            GGS_location var_l_2971 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2924.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 59)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_l_2971.objectCompare (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 60)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 61)), GGS_string ("unused entity, '").add_operation (enumerator_2924.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)).add_operation (GGS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2883.getter_hasKey (var_l_2971.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 63)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2883.setter_insertKey (var_l_2971.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 64)), enumerator_2924.current_key (HERE), var_l_2971, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)) ;
                  }
                }
              }
            }
            enumerator_2924.gotoNextObject () ;
          }
          cEnumerator_uselessEntityLocationMap enumerator_3457 (var_uselessEntityLocationMap_2883, EnumerationOrder::up) ;
          while (enumerator_3457.hasCurrentObject ()) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3457.current_mLocation (HERE), GGS_string ("unused '").add_operation (enumerator_3457.current_mUnusedEntityName (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string ("' entity, due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)) ;
            enumerator_3457.gotoNextObject () ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_getterNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inGetterName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)), constinArgument_inGetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_getterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterNameForUsefulEntitiesGraph ("getterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_getterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_getterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_setterNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inSetterName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)), constinArgument_inSetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_setterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterNameForUsefulEntitiesGraph ("setterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_setterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_setterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_methodNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inMethodName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_methodNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_methodNameForUsefulEntitiesGraph ("methodNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_methodNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_methodNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_initializerNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                            const GGS_string & constinArgument_inParameterSignature,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)).add_operation (constinArgument_inParameterSignature, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_initializerNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_initializerNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GGS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_initializerNameForUsefulEntitiesGraph (operand0,
                                                         operand1,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_initializerNameForUsefulEntitiesGraph ("initializerNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_initializerNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       2,
                                                                                       functionArgs_initializerNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_equatableNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 103)).add_operation (GGS_string (" equatable"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 103)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_equatableNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_equatableNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_equatableNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_equatableNameForUsefulEntitiesGraph ("equatableNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_equatableNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_equatableNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inLexiqueName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 109)), constinArgument_inLexiqueName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_lexiqueNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_lexiqueNameForUsefulEntitiesGraph ("lexiqueNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_lexiqueNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_grammarNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inGrammarName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 115)), constinArgument_inGrammarName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_grammarNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_grammarNameForUsefulEntitiesGraph ("grammarNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_grammarNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_grammarNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_syntaxNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inSyntaxName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 121)), constinArgument_inSyntaxName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_syntaxNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxNameForUsefulEntitiesGraph ("syntaxNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_syntaxNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_optionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inOptionName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 127)), constinArgument_inOptionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_optionNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_optionNameForUsefulEntitiesGraph ("optionNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_optionNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_optionNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GGS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_filewrapperNameForUsefulEntitiesGraph (operand0,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperNameForUsefulEntitiesGraph ("filewrapperNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       1,
                                                                                       functionArgs_filewrapperNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                                    const GGS_lstring & constinArgument_inTemplateName,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 140)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 140)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 140)), constinArgument_inTemplateName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GGS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_filewrapperTemplateNameForUsefulEntitiesGraph (operand0,
                                                                 operand1,
                                                                 inCompiler
                                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperTemplateNameForUsefulEntitiesGraph ("filewrapperTemplateNameForUsefulEntitiesGraph",
                                                                                               functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph,
                                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                                               2,
                                                                                               functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_functionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFunctionName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 146)), constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_functionNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionNameForUsefulEntitiesGraph ("functionNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_functionNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_functionNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_procedureNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inProcName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 152)), constinArgument_inProcName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_procedureNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_procedureNameForUsefulEntitiesGraph ("procedureNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_procedureNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_procedureNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_typeNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 158)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_typeNameForUsefulEntitiesGraph (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_typeNameForUsefulEntitiesGraph ("typeNameForUsefulEntitiesGraph",
                                                                                functionWithGenericHeader_typeNameForUsefulEntitiesGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                1,
                                                                                functionArgs_typeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_afterNameForUsefulEntitiesGraph (const GGS_location & constinArgument_inLocation,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("after"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_afterNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_afterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GGS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_location operand0 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_afterNameForUsefulEntitiesGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_afterNameForUsefulEntitiesGraph ("afterNameForUsefulEntitiesGraph",
                                                                                 functionWithGenericHeader_afterNameForUsefulEntitiesGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_afterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_beforeNameForUsefulEntitiesGraph (const GGS_location & constinArgument_inLocation,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("before"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_beforeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_beforeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_location operand0 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_beforeNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_beforeNameForUsefulEntitiesGraph ("beforeNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_beforeNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_beforeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFileExtension,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 176)), constinArgument_inFileExtension.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_rootRuleNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_rootRuleNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_rootRuleNameForUsefulEntitiesGraph ("rootRuleNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_rootRuleNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 183)) ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 184)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8628 ;
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8628, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 199)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8986 ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8986, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 209)) ;
  GGS_unifiedTypeMapEntry var_leftType_9066 = var_leftExpression_8628.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_9113 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8628.ptr ())) ;
    if (nullptr == var_left_9113.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_9186 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_8986.ptr ())) ;
      if (nullptr == var_right_9186.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GGS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9113.readProperty_mValue ().right_shift_operation (var_right_9186.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 225)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_9455 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8628.ptr ())) ;
      if (nullptr == var_left_9455.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_9528 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_8986.ptr ())) ;
        if (nullptr == var_right_9528.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GGS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_9455.readProperty_mValue ().right_shift_operation (var_right_9528.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_9066, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 234)) COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).operator_not (SOURCE_FILE ("expression-additive.galgas", 234)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_rightShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_9066, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 235)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GGS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_9066, temp_9.readProperty_mOperatorLocation (), var_leftExpression_8628, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas", 244)), var_rightExpression_8986, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 255)) ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_11472 ;
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11472, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 271)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_11830 ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11830, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 281)) ;
  GGS_unifiedTypeMapEntry var_leftType_11910 = var_leftExpression_11472.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_11957 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11472.ptr ())) ;
    if (nullptr == var_left_11957.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_12030 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_11830.ptr ())) ;
      if (nullptr == var_right_12030.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GGS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_11957.readProperty_mValue ().left_shift_operation (var_right_12030.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 297)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_12299 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11472.ptr ())) ;
      if (nullptr == var_left_12299.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_12372 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_11830.ptr ())) ;
        if (nullptr == var_right_12372.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GGS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_12299.readProperty_mValue ().left_shift_operation (var_right_12372.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_11910, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 306)) COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).operator_not (SOURCE_FILE ("expression-additive.galgas", 306)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_leftShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_11910, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 307)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GGS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_11910, temp_9.readProperty_mOperatorLocation (), var_leftExpression_11472, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas", 316)), var_rightExpression_11830, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 327)) ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 328)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14323 ;
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14323, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 343)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14658 ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14323.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14658, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 353)) ;
  {
  const GGS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14323.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 364)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 364)) COMMA_SOURCE_FILE ("expression-additive.galgas", 364)), GGS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14323, var_rightExpression_14658, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 363)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_14962 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14323.ptr ())) ;
    if (nullptr == var_leftBigint_14962.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_15042 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14658.ptr ())) ;
      if (nullptr == var_rightBigint_15042.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GGS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_14962.readProperty_mValue ().add_operation (var_rightBigint_15042.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 376)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GGS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14323.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14323, GGS_binaryOperator::class_func_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 383)), var_rightExpression_14658, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 394)) ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 395)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16725 ;
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16725, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 409)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17060 ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16725.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_17060, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 419)) ;
  {
  const GGS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16725.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 430)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 430)) COMMA_SOURCE_FILE ("expression-additive.galgas", 430)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16725, var_rightExpression_17060, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 429)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_17358 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_16725.ptr ())) ;
    if (nullptr == var_leftBigint_17358.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_17438 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17060.ptr ())) ;
      if (nullptr == var_rightBigint_17438.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GGS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17358.readProperty_mValue ().add_operation (var_rightBigint_17438.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 442)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GGS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16725.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_16725, GGS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas", 449)), var_rightExpression_17060, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 460)) ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 461)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_19131 ;
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_19131, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 476)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_19466 ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19131.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19466, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 486)) ;
  {
  const GGS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_19131.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 497)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 497)) COMMA_SOURCE_FILE ("expression-additive.galgas", 497)), GGS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_19131, var_rightExpression_19466, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 496)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_19770 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19131.ptr ())) ;
    if (nullptr == var_leftBigint_19770.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_19850 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19466.ptr ())) ;
      if (nullptr == var_rightBigint_19850.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GGS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_19770.readProperty_mValue ().substract_operation (var_rightBigint_19850.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 509)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GGS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_19131.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_19131, GGS_binaryOperator::class_func_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 516)), var_rightExpression_19466, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 527)) ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 528)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_21533 ;
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_21533, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 542)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_21868 ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_21533.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_21868, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 552)) ;
  {
  const GGS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_21533.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 563)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 563)) COMMA_SOURCE_FILE ("expression-additive.galgas", 563)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_21533, var_rightExpression_21868, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 562)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_22166 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_21533.ptr ())) ;
    if (nullptr == var_leftBigint_22166.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_22246 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_21868.ptr ())) ;
      if (nullptr == var_rightBigint_22246.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GGS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_22166.readProperty_mValue ().substract_operation (var_rightBigint_22246.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 575)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GGS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_21533.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_21533, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas", 582)), var_rightExpression_21868, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 625)) ;
  GGS_string var_leftTemporaryOperand_24218 ;
  const GGS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_24218, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 627)) ;
  GGS_string var_rightTemporaryOperand_24399 ;
  const GGS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24399, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 629)) ;
  GGS_string var_operatorString_24461 ;
  GGS_bool var_hasCompilerOption_24488 ;
  const GGS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GGS_binaryOperator::Enumeration::invalid:
    break ;
  case GGS_binaryOperator::Enumeration::enum_rightShift:
    {
      var_operatorString_24461 = GGS_string ("right_shift_operation") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_leftShift:
    {
      var_operatorString_24461 = GGS_string ("left_shift_operation") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_add:
    {
      var_operatorString_24461 = GGS_string ("add_operation") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_addNoOverflow:
    {
      var_operatorString_24461 = GGS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_sub:
    {
      var_operatorString_24461 = GGS_string ("substract_operation") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_subNoOverflow:
    {
      var_operatorString_24461 = GGS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_and:
    {
      var_operatorString_24461 = GGS_string ("operator_and") ;
      var_hasCompilerOption_24488 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_or:
    {
      var_operatorString_24461 = GGS_string ("operator_or") ;
      var_hasCompilerOption_24488 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_xor:
    {
      var_operatorString_24461 = GGS_string ("operator_xor") ;
      var_hasCompilerOption_24488 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24461 = GGS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation:
    {
      var_operatorString_24461 = GGS_string ("multiply_operation") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation:
    {
      var_operatorString_24461 = GGS_string ("divide_operation") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24461 = GGS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_modulo_5F_operation:
    {
      var_operatorString_24461 = GGS_string ("modulo_operation") ;
      var_hasCompilerOption_24488 = GGS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_24218.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (var_operatorString_24461, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_24399, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 678)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_hasCompilerOption_24488.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 680)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) ;
      }
    }
  }
  const GGS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 683)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 103)) ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_5449 ;
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5449, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_5784 ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5449.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5784, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 128)) ;
  {
  const GGS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5449.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 139)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 139)) COMMA_SOURCE_FILE ("expression-and.galgas", 139)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5449, var_rightExpression_5784, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 138)) ;
  }
  const GGS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5449.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5449, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 150)), var_rightExpression_5784, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 160)) ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 161)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7467 ;
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7467, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 175)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_7802 ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7467.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7802, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 185)) ;
  {
  const GGS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7467.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 196)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 196)) COMMA_SOURCE_FILE ("expression-and.galgas", 196)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7467, var_rightExpression_7802, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 195)) ;
  }
  const GGS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7467.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7467, var_rightExpression_7802, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GGS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 227)) ;
  GGS_string var_leftTemporaryOperand_9281 ;
  const GGS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9281, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  GGS_string var_testVar_9337 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_bool ").add_operation (var_testVar_9337, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (var_leftTemporaryOperand_9281, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (kBoolTrue == ").add_operation (var_testVar_9337, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 241)) ;
  }
  GGS_string var_rightTemporaryOperand_9806 ;
  const GGS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9806, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_9337.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (var_rightTemporaryOperand_9806, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 251)) ;
  outArgument_outCppExpression = var_testVar_9337 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 75)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4082 ;
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-bang.galgas", 93)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4082, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 90)) ;
  GGS_unifiedTypeMapEntry var_type_4157 = var_expression_4082.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_typeKindEnum_2E_weakReferenceType var_weakRef_4196 = extensionGetter_definition (var_type_4157, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 101)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-bang.galgas", 101)).unwrappedValue () ;
    if (!extensionGetter_definition (var_type_4157, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 101)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-bang.galgas", 101)).isValuated ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GGS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_bangExpressionForGeneration::init_21__21__21__21_ (var_weakRef_4196.readProperty_referenceType (), temp_2.readProperty_mOperatorLocation (), var_expression_4082, extensionGetter_definition (var_type_4157, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_bangExpressionAST temp_3 = this ;
    TC_Array <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4157, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).add_operation (GGS_string ("' and does not support the 'bang' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 109)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 145)) ;
  GGS_string var_operand_6337 ;
  const GGS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_6337, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 147)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 155)) COMMA_SOURCE_FILE ("expression-bang.galgas", 155)) ;
  }
  const GGS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_6337.add_operation (GGS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 156)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 156)) ;
  const GGS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 157)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 157)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 157)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_classFuncExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_typeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_classFuncExpressionAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_5150 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_5150, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 137)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 139)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedType_6207 ;
  GGS_unifiedTypeMapEntry var_classFuncType_6252 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6314 ;
  GGS_bool var_hasCompilerArgument_6365 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_6419 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  const GGS_classFuncExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_6207, var_classFuncType_6252, var_constructorEffectiveParameterList_6314, var_hasCompilerArgument_6365, var_requiredTypes_6419, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 152)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_constructorTypeUsefulnessName_6447 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_6252, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 169)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 169)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_6447 COMMA_SOURCE_FILE ("expression-class-func.galgas", 170)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_6686 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_6207, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 171)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 171)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_6686 COMMA_SOURCE_FILE ("expression-class-func.galgas", 172)) ;
  }
  const GGS_classFuncExpressionAST temp_6 = this ;
  const GGS_classFuncExpressionAST temp_7 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_6207, temp_6.readProperty_classFuncName ().readProperty_location (), var_classFuncType_6252, temp_7.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_6314, var_hasCompilerArgument_6365, var_requiredTypes_6419, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       const GGS_lstring constinArgument_inTypeName,
                                                                                                       const GGS_lstring constinArgument_inConstructorName,
                                                                                                       const GGS_actualOutputArgumentList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                       const GGS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                       GGS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                       GGS_bool & outArgument_outHasCompilerArgument,
                                                                                                       GGS__5B_unifiedTypeMapEntry_5D_ & outArgument_outRequiredTypes,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outRequiredTypes.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  outArgument_outRequiredTypes = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 209)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas", 211)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas", 212)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_8804 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 217)).readProperty_classFunctionMap () ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GGS_bool test_4 = GGS_bool (ComparisonKind::equal, constinArgument_inConstructorName.readProperty_string ().objectCompare (GGS_string ("new"))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 219)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-class-func.galgas", 219)))) ;
      }
      test_3 = test_4.boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string var_initializerSignature_9017 = extensionGetter_initializerSignature (constinArgument_inInitializerEffectiveParameterExpressions, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 220)) ;
        GGS_initializerMap var_initializerMap_9116 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 221)).readProperty_initializerMap () ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = var_initializerMap_9116.getter_hasKey (var_initializerSignature_9017 COMMA_SOURCE_FILE ("expression-class-func.galgas", 222)).operator_not (SOURCE_FILE ("expression-class-func.galgas", 222)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (constinArgument_inConstructorName.readProperty_location (), GGS_string ("initializer @").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 224)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 224)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 224)).add_operation (var_initializerSignature_9017, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 225)).add_operation (GGS_string (" does not exist"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 225)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas", 223)) ;
          }
        }
      }
    }
    GGS_functionSignature var_constructorFormalArgumentTypeList_9474 ;
    const cMapElement_classFunctionMap * objectArray_9512 = (const cMapElement_classFunctionMap *) var_classFunctionMap_8804.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (nullptr != objectArray_9512) {
        macroValidSharedObject (objectArray_9512, cMapElement_classFunctionMap) ;
      var_constructorFormalArgumentTypeList_9474 = objectArray_9512->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_9512->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_9512->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_8804.getter_count (SOURCE_FILE ("expression-class-func.galgas", 235)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 237)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 237)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 237)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas", 236)) ;
          var_constructorFormalArgumentTypeList_9474.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <FixItDescription> fixItArray9 ;
        appendFixItActions (fixItArray9, kFixItReplace, var_classFunctionMap_8804.getter_keyList (SOURCE_FILE ("expression-class-func.galgas", 245))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 243)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 243)), fixItArray9  COMMA_SOURCE_FILE ("expression-class-func.galgas", 241)) ;
        var_constructorFormalArgumentTypeList_9474.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 249)).objectCompare (var_constructorFormalArgumentTypeList_9474.getter_count (SOURCE_FILE ("expression-class-func.galgas", 249)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 251)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 251)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 252)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 251)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 252)).add_operation (var_constructorFormalArgumentTypeList_9474.getter_count (SOURCE_FILE ("expression-class-func.galgas", 253)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 252)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 253)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 254)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 253)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 254)), fixItArray11  COMMA_SOURCE_FILE ("expression-class-func.galgas", 250)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    cEnumerator_actualOutputArgumentList enumerator_10925 (constinArgument_inInitializerEffectiveParameterExpressions, EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_10990 (var_constructorFormalArgumentTypeList_9474, EnumerationOrder::up) ;
    while (enumerator_10925.hasCurrentObject () && enumerator_10990.hasCurrentObject ()) {
      {
      outArgument_outRequiredTypes.setter_append (enumerator_10990.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 259)) ;
      }
      GGS_semanticExpressionForGeneration var_exp_11421 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10925.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10990.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11421, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 260)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10990.current (HERE).readProperty_mFormalArgumentType (), var_exp_11421.readProperty_mResultType (), enumerator_10925.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11421, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 269)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_11421  COMMA_SOURCE_FILE ("expression-class-func.galgas", 275)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, enumerator_10990.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10925.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          GGS_string temp_13 ;
          const enumGalgasBool test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_10990.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = enumerator_10990.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 278)) ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11785 = GGS_string ("!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 277)) ;
          TC_Array <FixItDescription> fixItArray15 ;
          appendFixItActions (fixItArray15, kFixItReplace, var_s_11785) ;
          inCompiler->emitSemanticError (enumerator_10925.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11785, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 282)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 282)), fixItArray15  COMMA_SOURCE_FILE ("expression-class-func.galgas", 281)) ;
        }
      }
      enumerator_10925.gotoNextObject () ;
      enumerator_10990.gotoNextObject () ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    GGS_bool test_17 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_17.boolEnum ()) {
      test_17 = GGS_bool (ComparisonKind::equal, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 288)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    test_16 = test_17.boolEnum () ;
    if (kBoolTrue == test_16) {
      GGS_stringset temp_18 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptyList"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptyMap"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptySortedList"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      temp_18.enterElement (GGS_string ("emptyDict"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 289)) ;
      GGS_stringset var_oldCollectionInitializers_12220 = temp_18 ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_oldCollectionInitializers_12220.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-class-func.galgas", 290)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, GGS_string (" ()")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GGS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray20  COMMA_SOURCE_FILE ("expression-class-func.galgas", 291)) ;
        }
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_21) {
      GGS_stringset temp_22 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 297)) ;
      temp_22.enterElement (GGS_string ("emptyGraph"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 297)) ;
      temp_22.enterElement (GGS_string ("new"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 297)) ;
      GGS_stringset var_oldInitializers_12680 = temp_22 ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = var_oldInitializers_12680.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-class-func.galgas", 298)).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("old style constructor, use initializer '.init (...)'"), fixItArray24  COMMA_SOURCE_FILE ("expression-class-func.galgas", 299)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 322)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  cEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_13971 (temp_1.readProperty_requiredTypes (), EnumerationOrder::up) ;
  while (enumerator_13971.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13971.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 324)) ;
    enumerator_13971.gotoNextObject () ;
  }
  GGS_stringlist var_parameterList_14064 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14092 (temp_2.readProperty_mEffectiveParameterList (), EnumerationOrder::up) ;
  while (enumerator_14092.hasCurrentObject ()) {
    GGS_string var_parameter_14322 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14092.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14322, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 328)) ;
    var_parameterList_14064.addAssign_operation (var_parameter_14322  COMMA_SOURCE_FILE ("expression-class-func.galgas", 335)) ;
    enumerator_14092.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 337)) ;
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string ("::class_func_").add_operation (temp_4.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 338)) ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 339)) ;
  cEnumerator_stringlist enumerator_14588 (var_parameterList_14064, EnumerationOrder::up) ;
  while (enumerator_14588.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14588.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 341)) ;
    if (enumerator_14588.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 342)) ;
    }
    enumerator_14588.gotoNextObject () ;
  }
  GGS_bool var_needsComma_14710 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_14064.getter_count (SOURCE_FILE ("expression-class-func.galgas", 344)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GGS_classFuncExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_needsComma_14710.boolEnum () ;
        if (kBoolTrue == test_7) {
          outArgument_outCppExpression.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 347)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 349)) COMMA_SOURCE_FILE ("expression-class-func.galgas", 349)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 350)) ;
      var_needsComma_14710 = GGS_bool (true) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_needsComma_14710.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GGS_classFuncExpressionForGeneration temp_9 = this ;
      outArgument_outCppExpression.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 354)) ;
    }
  }
  if (kBoolFalse == test_8) {
    const GGS_classFuncExpressionForGeneration temp_10 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 356)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 356)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  cEnumerator_collectionValueElementList enumerator_4190 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_4190.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4190.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
    enumerator_4190.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_4853 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_4853 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4853 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 131)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4853.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-collection-value.galgas", 134)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 135)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4853, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 136)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-collection-value.galgas", 136)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4853, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 138)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 138)).add_operation (GGS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 138)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 137)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      GGS_initializerMap var_initializerMap_5354 = extensionGetter_definition (var_targetType_4853, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 141)).readProperty_initializerMap () ;
      GGS_functionSignature var_emptyArgumentList_5439 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_initializerMap_5354.getter_hasKey (extensionGetter_initializerSignature (var_emptyArgumentList_5439, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 143)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 143)).operator_not (SOURCE_FILE ("expression-collection-value.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 144)).add_operation (GGS_string (" has no init () initializer"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 144)), fixItArray12  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 144)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5684 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4853, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 148)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_5439, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 147)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5684 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 151)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_5953 = extensionGetter_definition (var_targetType_4853, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 153)).readProperty_typeForEnumeratedElement () ;
      GGS_collectionValueElementListForGeneration var_expressionListForGeneration_6067 = GGS_collectionValueElementListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      cEnumerator_collectionValueElementList enumerator_6122 (temp_13.readProperty_mExpressionList (), EnumerationOrder::up) ;
      while (enumerator_6122.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_6437 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6122.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_5953, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6437, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 156)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_5953, var_expressionForGeneration_6437.readProperty_mResultType (), enumerator_6122.current_location (HERE), var_expressionForGeneration_6437, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 166)) ;
        }
        var_expressionListForGeneration_6067.addAssign_operation (var_expressionForGeneration_6437, enumerator_6122.current_location (HERE)  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 172)) ;
        enumerator_6122.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4853, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_6067, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_6990 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4853, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 180)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6990 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 181)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 212)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 214)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 214)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 214)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 215)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("::init (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 216)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 217)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 217)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  cEnumerator_collectionValueElementListForGeneration enumerator_8863 (temp_4.readProperty_expressionList (), EnumerationOrder::up) ;
  while (enumerator_8863.hasCurrentObject ()) {
    GGS_string var_argumentCppName_9072 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8863.current_expression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_9072, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 220)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GGS_string (".enterElement ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 227)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(var_argumentCppName_9072.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 228)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 229)).add_operation (extensionGetter_commaSourceFile (enumerator_8863.current_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 229)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 229)) ;
    enumerator_8863.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 181)) ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8772 ;
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8772, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 197)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9111 ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8772.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9111, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 207)) ;
  GGS_bool var_isEquatable_9156 = extensionGetter_definition (var_leftExpression_8772.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("expression-comparison.galgas", 217)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)) ;
  GGS_bool var_isComparable_9248 = extensionGetter_definition (var_leftExpression_8772.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("expression-comparison.galgas", 218)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)) ;
  GGS_bool var_isReferenceEquatable_9342 = extensionGetter_definition (var_leftExpression_8772.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 219)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 219)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 219)) ;
  GGS_bool var_operatorIsAvailable_9458 ;
  GGS_string var_operatorName_9492 ;
  const GGS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
    {
      var_operatorName_9492 = GGS_string ("==") ;
      var_operatorIsAvailable_9458 = var_isEquatable_9156 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
    {
      var_operatorName_9492 = GGS_string ("!=") ;
      var_operatorIsAvailable_9458 = var_isEquatable_9156 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_9492 = GGS_string ("<=") ;
      var_operatorIsAvailable_9458 = var_isComparable_9248 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_9492 = GGS_string ("<") ;
      var_operatorIsAvailable_9458 = var_isComparable_9248 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_9492 = GGS_string (">=") ;
      var_operatorIsAvailable_9458 = var_isComparable_9248 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_9492 = GGS_string (">") ;
      var_operatorIsAvailable_9458 = var_isComparable_9248 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_9492 = GGS_string ("===") ;
      var_operatorIsAvailable_9458 = var_isReferenceEquatable_9342 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_9492 = GGS_string ("!==") ;
      var_operatorIsAvailable_9458 = var_isReferenceEquatable_9342 ;
    }
    break ;
  }
  {
  const GGS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9458, var_operatorName_9492, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8772, var_rightExpression_9111, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 249)) ;
  }
  const GGS_comparisonExpressionAST temp_4 = this ;
  const GGS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8772, temp_5.readProperty_mComparison (), var_rightExpression_9111, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 285)) ;
  GGS_string var_leftTemporaryOperand_11716 ;
  const GGS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11716, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 287)) ;
  GGS_string var_rightTemporaryOperand_11921 ;
  const GGS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_11921, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 295)) ;
  GGS_string var_operatorName_11980 ;
  const GGS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_11980 = GGS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_11980 = GGS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_11980 = GGS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_11980 = GGS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_11980 = GGS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_11980 = GGS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_operatorName_11980, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_leftTemporaryOperand_11716, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_rightTemporaryOperand_11921, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_5422 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5422 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 143)) ;
  }
  GGS_lstring var_filewrapperPath_5744 ;
  GGS_bool var_isInternal_5783 ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GGS_lstringlist joker_5764_4 ; // Joker input parameter
  GGS_wrapperFileMap joker_5764_3 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_5764_2 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_5764_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5744, joker_5764_4, joker_5764_3, joker_5764_2, joker_5764_1, var_isInternal_5783, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 145)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5783.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GGS_location var_filewrapperDeclarationLocation_5847 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GGS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)).objectCompare (var_filewrapperDeclarationLocation_5847.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GGS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5847.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)) ;
        }
      }
    }
  }
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GGS_filewrapperInExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 160)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5744.readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_6704 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_6704.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6704.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 172)) ;
    enumerator_6704.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GGS_lstring var_usefulnessName_7373 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7373 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 188)) ;
  }
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_7713 ;
  GGS_bool var_isInternal_7752 ;
  const GGS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GGS_lstring joker_7675_4 ; // Joker input parameter
  GGS_lstringlist joker_7675_3 ; // Joker input parameter
  GGS_wrapperFileMap joker_7675_2 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_7675_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7675_4, joker_7675_3, joker_7675_2, joker_7675_1, var_filewrapperTemplateMap_7713, var_isInternal_7752, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_7752.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GGS_location var_filewrapperDeclarationLocation_7817 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GGS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)).objectCompare (var_filewrapperDeclarationLocation_7817.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GGS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7817.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)) ;
        }
      }
    }
  }
  GGS_functionSignature var_templateSignature_8271 ;
  const GGS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GGS_lstring joker_8289 ; // Joker input parameter
  var_filewrapperTemplateMap_7713.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8271, joker_8289, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 204)) ;
  GGS_semanticExpressionListForGeneration var_effectiveParameterList_8360 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GGS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)).objectCompare (var_templateSignature_8271.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GGS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GGS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GGS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (var_templateSignature_8271.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 210)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 211)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 211)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 208)) ;
      var_effectiveParameterList_8360.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_8360 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperTemplateInExpressionAST temp_17 = this ;
    cEnumerator_actualOutputArgumentList enumerator_8859 (temp_17.readProperty_mExpressions (), EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_8945 (var_templateSignature_8271, EnumerationOrder::up) ;
    while (enumerator_8859.hasCurrentObject () && enumerator_8945.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_8945.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8859.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GGS_string temp_19 ;
          const enumGalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_8945.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_8945.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_9055 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          TC_Array <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_9055) ;
          inCompiler->emitSemanticError (enumerator_8859.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9055, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_9542 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8859.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8945.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9542, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 220)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8945.current_mFormalArgumentType (HERE), var_exp_9542.readProperty_mResultType (), enumerator_8859.current_mEndOfExpressionLocation (HERE), var_exp_9542, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 229)) ;
      }
      var_effectiveParameterList_8360.addAssign_operation (var_exp_9542  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 230)) ;
      enumerator_8859.gotoNextObject () ;
      enumerator_8945.gotoNextObject () ;
    }
  }
  const GGS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GGS_filewrapperTemplateInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8360, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_10779 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10779 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 261)) ;
  }
  GGS_stringlist var_directoryList_10987 ;
  GGS_string var_fileName_11015 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 265)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)) ;
      var_directoryList_10987.drop () ; // Release error dropped variable
      var_fileName_11015.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GGS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 267)).objectCompare (GGS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 268)) ;
        var_directoryList_10987.drop () ; // Release error dropped variable
        var_fileName_11015.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GGS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_10987 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 270)) ;
      {
      var_directoryList_10987.setter_popLast (var_fileName_11015, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)) ;
      }
    }
  }
  GGS_wrapperFileMap var_filewrapperFileMap_11595 ;
  GGS_wrapperDirectoryMap var_filewrapperDirectoryMap_11644 ;
  GGS_bool var_isInternal_11690 ;
  const GGS_filewrapperInExpressionAST temp_10 = this ;
  GGS_lstring joker_11560 ; // Joker input parameter
  GGS_lstringlist joker_11567 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_11672 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11560, joker_11567, var_filewrapperFileMap_11595, var_filewrapperDirectoryMap_11644, joker_11672, var_isInternal_11690, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_11690.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_filewrapperInExpressionAST temp_12 = this ;
      GGS_location var_filewrapperDeclarationLocation_11754 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GGS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).objectCompare (var_filewrapperDeclarationLocation_11754.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GGS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11754.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)) ;
        }
      }
    }
  }
  GGS_string var_builtPath_12147 = GGS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11644.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).isValid ()) {
    uint32_t variant_12164 = var_filewrapperDirectoryMap_11644.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).uintValue () ;
    bool loop_12164 = true ;
    while (loop_12164) {
      loop_12164 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_10987.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12164) {
        loop_12164 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_10987.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12164 && (0 == variant_12164)) {
        loop_12164 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 292)) ;
      }
      if (loop_12164) {
        variant_12164 -- ;
        GGS_string var_directoryName_12279 ;
        {
        var_directoryList_10987.setter_popFirst (var_directoryName_12279, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)) ;
        }
        var_builtPath_12147.plusAssign_operation(var_directoryName_12279.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11644.getter_hasKey (var_directoryName_12279 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GGS_uint joker_12552 ; // Joker input parameter
            var_filewrapperDirectoryMap_11644.method_searchKey (GGS_lstring::init_21__21_ (var_directoryName_12279, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 298)), inCompiler COMMA_HERE), var_filewrapperFileMap_11595, var_filewrapperDirectoryMap_11644, joker_12552, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 297)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GGS_filewrapperInExpressionAST temp_18 = this ;
          const GGS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_builtPath_12147, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GGS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)) ;
          var_filewrapperFileMap_11595.drop () ; // Release error dropped variable
          var_directoryList_10987 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  GGS_uint var_fileIndex_12810 ;
  GGS_bool var_isTextFile_12832 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11595.getter_hasKey (var_fileName_11015 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GGS_string joker_12963 ; // Joker input parameter
      GGS_uint joker_12978 ; // Joker input parameter
      var_filewrapperFileMap_11595.method_searchKey (GGS_lstring::init_21__21_ (var_fileName_11015, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)), inCompiler COMMA_HERE), joker_12963, var_isTextFile_12832, joker_12978, var_fileIndex_12810, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GGS_filewrapperInExpressionAST temp_22 = this ;
    const GGS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_fileName_11015, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GGS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (var_builtPath_12147, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GGS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 313)) ;
    var_fileIndex_12810.drop () ; // Release error dropped variable
    var_isTextFile_12832.drop () ; // Release error dropped variable
  }
  GGS_unifiedTypeMapEntry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_12832.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("data"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)) ;
  }
  const GGS_filewrapperInExpressionAST temp_27 = this ;
  const GGS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GGS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21_ (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12810, var_isTextFile_12832, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346)) ;
  const GGS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367)) ;
  GGS_stringlist var_parameterList_15271 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15309 (temp_1.readProperty_mActualOutputParameterList (), EnumerationOrder::up) ;
  while (enumerator_15309.hasCurrentObject ()) {
    GGS_string var_parameter_15522 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15309.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15522, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 370)) ;
    var_parameterList_15271.addAssign_operation (var_parameter_15522  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)) ;
    enumerator_15309.gotoNextObject () ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)) ;
  cEnumerator_stringlist enumerator_15801 (var_parameterList_15271, EnumerationOrder::up) ;
  while (enumerator_15801.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GGS_string (", ").add_operation (enumerator_15801.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)) ;
    enumerator_15801.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GGS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)) ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GGS_string temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GGS_string ("GGS_string") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GGS_string ("GGS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_4488 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_4488.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4488.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)) ;
    enumerator_4488.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_5151 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 125)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5151 COMMA_SOURCE_FILE ("expression-function-call.galgas", 126)) ;
  }
  GGS_functionSignature var_functionSignature_5451 ;
  GGS_unifiedTypeMapEntry var_resultType_5499 ;
  GGS_bool var_isInternal_5525 ;
  const GGS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_5451, var_resultType_5499, var_isInternal_5525, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 128)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5525.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_functionCallExpressionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_5589 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GGS_functionCallExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)).objectCompare (var_procDeclarationLocation_5589.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GGS_functionCallExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_5589.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GGS_functionCallExpressionAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_5451.getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GGS_functionCallExpressionAST temp_10 = this ;
      const GGS_functionCallExpressionAST temp_11 = this ;
      const GGS_functionCallExpressionAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (var_functionSignature_5451.getter_count (SOURCE_FILE ("expression-function-call.galgas", 144)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 145)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 143)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_6311 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_functionCallExpressionAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_6410 (var_functionSignature_5451, EnumerationOrder::up) ;
    cEnumerator_actualOutputArgumentList enumerator_6447 (temp_14.readProperty_mExpressionList (), EnumerationOrder::up) ;
    while (enumerator_6410.hasCurrentObject () && enumerator_6447.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_6786 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6447.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6410.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6786, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 151)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6410.current (HERE).readProperty_mFormalArgumentType (), var_expression_6786.readProperty_mResultType (), enumerator_6447.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6786, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 160)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_6410.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_6447.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GGS_string temp_16 ;
          const enumGalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_6410.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_6410.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 168)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_7102 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 167)) ;
          TC_Array <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_7102) ;
          inCompiler->emitSemanticError (enumerator_6447.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7102, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)) ;
        }
      }
      var_semanticExpressionListForGeneration_6311.addAssign_operation (var_expression_6786  COMMA_SOURCE_FILE ("expression-function-call.galgas", 174)) ;
      enumerator_6410.gotoNextObject () ;
      enumerator_6447.gotoNextObject () ;
    }
    const GGS_functionCallExpressionAST temp_19 = this ;
    const GGS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_5499, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_6311, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 201)) ;
  const GGS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 203))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 203)) ;
  GGS_stringlist var_parameterList_8673 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_functionCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_8713 (temp_2.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_8713.hasCurrentObject ()) {
    GGS_string var_parameter_8884 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8713.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_8884, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 207)) ;
    var_parameterList_8673.addAssign_operation (var_parameter_8884  COMMA_SOURCE_FILE ("expression-function-call.galgas", 208)) ;
    enumerator_8713.gotoNextObject () ;
  }
  const GGS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)) ;
  cEnumerator_stringlist enumerator_9036 (var_parameterList_8673, EnumerationOrder::up) ;
  while (enumerator_9036.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_9036.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)) ;
    enumerator_9036.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)) ;
  const GGS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 63)) ;
  const GGS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 64)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_getterCallExpressionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiver ().ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_getterCallExpressionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 79)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_4267 ;
  const GGS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 85)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4267, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 82)) ;
  GGS_unifiedTypeMapEntry var_receiverType_4321 = var_receiverExpression_4267.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_getterCallExpressionAST temp_5 = this ;
    const GGS_getterMap_2E_element var_aGetter_4435 = extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        GGS_bool test_7 = GGS_bool (ComparisonKind::notEqual, var_aGetter_4435.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())) ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_6 = test_7.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_getterCallExpressionAST temp_8 = this ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_aGetter_4435.readProperty_mGetterNameThatObsoletesInvokationName ()) ;
          inCompiler->emitSemanticError (temp_8.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray9  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 95)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GGS_getterCallExpressionAST temp_11 = this ;
        GGS_bool test_12 = temp_11.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_12.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_13 = this ;
          test_12 = extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)).readProperty_propertyMap ().getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)) ;
        }
        GGS_bool test_14 = test_12 ;
        if (kBoolTrue == test_14.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_15 = this ;
          test_14 = GGS_bool (ComparisonKind::equal, temp_15.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 101)).objectCompare (GGS_uint (uint32_t (0U)))) ;
        }
        test_10 = test_14.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_getterCallExpressionAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mExpressionLocation (), GGS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray17  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 102)) ;
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        const GGS_getterCallExpressionAST temp_19 = this ;
        test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)).objectCompare (var_aGetter_4435.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GGS_getterCallExpressionAST temp_20 = this ;
          const GGS_getterCallExpressionAST temp_21 = this ;
          const GGS_getterCallExpressionAST temp_22 = this ;
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_21.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (var_aGetter_4435.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 107)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (temp_22.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 108)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)), fixItArray23  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_18) {
        GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5572 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
        const GGS_getterCallExpressionAST temp_24 = this ;
        cEnumerator_actualOutputArgumentList enumerator_5652 (temp_24.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
        cEnumerator_functionSignature enumerator_5757 (var_aGetter_4435.readProperty_mArgumentTypeList (), EnumerationOrder::up) ;
        while (enumerator_5652.hasCurrentObject () && enumerator_5757.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_exp_6124 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5652.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5757.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6124, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 113)) ;
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_5757.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5652.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_25) {
              GGS_string temp_26 ;
              const enumGalgasBool test_27 = GGS_bool (ComparisonKind::notEqual, enumerator_5757.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_27) {
                temp_26 = enumerator_5757.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 123)) ;
              }else if (kBoolFalse == test_27) {
                temp_26 = GGS_string::makeEmptyString () ;
              }
              GGS_string var_s_6231 = GGS_string ("!").add_operation (temp_26, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 123)) ;
              TC_Array <FixItDescription> fixItArray28 ;
              appendFixItActions (fixItArray28, kFixItReplace, var_s_6231) ;
              inCompiler->emitSemanticError (enumerator_5652.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6231, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)), fixItArray28  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5757.current_mFormalArgumentType (HERE), var_exp_6124.readProperty_mResultType (), enumerator_5652.current_mEndOfExpressionLocation (HERE), var_exp_6124, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)) ;
          }
          var_constructorEffectiveParameterList_5572.addAssign_operation (var_exp_6124  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)) ;
          enumerator_5652.gotoNextObject () ;
          enumerator_5757.gotoNextObject () ;
        }
        const GGS_getterCallExpressionAST temp_29 = this ;
        GGS_string temp_30 ;
        const enumGalgasBool test_31 = GGS_bool (ComparisonKind::equal, var_aGetter_4435.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_31) {
          const GGS_getterCallExpressionAST temp_32 = this ;
          temp_30 = temp_32.readProperty_mGetterName ().readProperty_string () ;
        }else if (kBoolFalse == test_31) {
          temp_30 = var_aGetter_4435.readProperty_mGetterNameThatObsoletesInvokationName () ;
        }
        outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_aGetter_4435.readProperty_mReturnedType (), temp_29.readProperty_mGetterName ().readProperty_location (), var_aGetter_4435.readProperty_mKind (), var_receiverExpression_4267, GGS_stringlist::init (inCompiler COMMA_HERE), temp_30, var_constructorEffectiveParameterList_5572, var_aGetter_4435.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          GGS_bool test_34 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_galgas_34_ () ;
          if (kBoolTrue == test_34.boolEnum ()) {
            const GGS_getterCallExpressionAST temp_35 = this ;
            test_34 = GGS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 140)).objectCompare (GGS_uint (uint32_t (0U)))) ;
          }
          GGS_bool test_36 = test_34 ;
          if (kBoolTrue == test_36.boolEnum ()) {
            test_36 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument.readProperty_value ()) ;
          }
          test_33 = test_36.boolEnum () ;
          if (kBoolTrue == test_33) {
            const GGS_getterCallExpressionAST temp_37 = this ;
            TC_Array <FixItDescription> fixItArray38 ;
            fixItArray38.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GGS_string ("getter with no argument, remove parenthesis"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 142)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      const GGS_getterCallExpressionAST temp_40 = this ;
      test_39 = GGS_bool (ComparisonKind::equal, temp_40.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 146)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_39) {
        const GGS_getterCallExpressionAST temp_41 = this ;
        const GGS_propertyMap_2E_element var_prop_7519 = extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 146)).readProperty_propertyMap ().readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 146)).readProperty_propertyMap ().readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_39 = kBoolFalse ;
        }
        if (kBoolTrue == test_39) {
          const GGS_getterCallExpressionAST temp_42 = this ;
          extensionMethod_checkGetAccess (var_prop_7519.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_42.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)) ;
          const GGS_getterCallExpressionAST temp_43 = this ;
          const GGS_getterCallExpressionAST temp_44 = this ;
          outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_7519.readProperty_mPropertyType (), temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4267, temp_44.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_45 = kBoolTrue ;
          if (kBoolTrue == test_45) {
            const GGS_getterCallExpressionAST temp_46 = this ;
            test_45 = temp_46.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_45) {
              const GGS_getterCallExpressionAST temp_47 = this ;
              TC_Array <FixItDescription> fixItArray48 ;
              inCompiler->emitSemanticError (temp_47.readProperty_mExpressionLocation (), GGS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray48  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 155)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_39) {
      GGS_uint var_matchingReaderCount_8221 = GGS_uint (uint32_t (0U)) ;
      enumGalgasBool test_49 = kBoolTrue ;
      if (kBoolTrue == test_49) {
        test_49 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 160)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas", 160)))).boolEnum () ;
        if (kBoolTrue == test_49) {
          GGS_functionSignature var_getterFormalArgumentTypeList_8340 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          GGS_bool var_hasCompilerArgument_8386 = GGS_bool (true) ;
          GGS_unifiedTypeMapEntry var_returnedType_8425 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 163)) ;
          GGS_methodKind var_kind_8478 = GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 164)) ;
          GGS_stringlist var_fieldList_8540 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_obsoletedByGetter_8567 = GGS_string::makeEmptyString () ;
          cEnumerator_typedPropertyList enumerator_8635 (extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 167)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
          while (enumerator_8635.hasCurrentObject ()) {
            GGS_unifiedTypeMapEntry var_propertyType_8709 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (extensionGetter_definition (enumerator_8635.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 168)).readProperty_typeName ().readProperty_string (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 168)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 168)) ;
            GGS_getterMap var_aMap_8834 = extensionGetter_definition (var_propertyType_8709, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 169)).readProperty_getterMap () ;
            const GGS_getterCallExpressionAST temp_50 = this ;
            const cMapElement_getterMap * objectArray_8887 = (const cMapElement_getterMap *) var_aMap_8834.readAccessForWithInstruction (temp_50.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_8887) {
                macroValidSharedObject (objectArray_8887, cMapElement_getterMap) ;
              enumGalgasBool test_51 = kBoolTrue ;
              if (kBoolTrue == test_51) {
                test_51 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_propertyType_8709, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_8635.current_name (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_51) {
                  var_matchingReaderCount_8221.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)) ;
                  var_getterFormalArgumentTypeList_8340 = objectArray_8887->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_8386 = objectArray_8887->mProperty_mHasCompilerArgument ;
                  var_returnedType_8425 = objectArray_8887->mProperty_mReturnedType ;
                  const GGS_getterCallExpressionAST temp_52 = this ;
                  var_receiverExpression_4267 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_8425, temp_52.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4267, enumerator_8635.current_name (HERE).readProperty_string (), inCompiler COMMA_HERE) ;
                  var_kind_8478 = objectArray_8887->mProperty_mKind ;
                  var_obsoletedByGetter_8567 = objectArray_8887->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
            }
            enumerator_8635.gotoNextObject () ;
          }
          enumGalgasBool test_53 = kBoolTrue ;
          if (kBoolTrue == test_53) {
            test_53 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_8221.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_53) {
              const GGS_getterCallExpressionAST temp_54 = this ;
              const GGS_getterCallExpressionAST temp_55 = this ;
              TC_Array <FixItDescription> fixItArray56 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)).add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)).add_operation (GGS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)), fixItArray56  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 188)) ;
              var_getterFormalArgumentTypeList_8340.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8386.drop () ; // Release error dropped variable
              var_returnedType_8425.drop () ; // Release error dropped variable
              var_kind_8478.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_53) {
            enumGalgasBool test_57 = kBoolTrue ;
            if (kBoolTrue == test_57) {
              test_57 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_8221.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_57) {
                GGS_string var_s_10003 = GGS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_10025 (var_fieldList_8540, EnumerationOrder::up) ;
                while (enumerator_10025.hasCurrentObject ()) {
                  var_s_10003.plusAssign_operation(enumerator_10025.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)) ;
                  if (enumerator_10025.hasNextObject ()) {
                    var_s_10003.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 196)) ;
                  }
                  enumerator_10025.gotoNextObject () ;
                }
                const GGS_getterCallExpressionAST temp_58 = this ;
                const GGS_getterCallExpressionAST temp_59 = this ;
                TC_Array <FixItDescription> fixItArray60 ;
                inCompiler->emitSemanticError (temp_58.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)).add_operation (temp_59.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)).add_operation (GGS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)).add_operation (var_s_10003, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)), fixItArray60  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 198)) ;
                var_getterFormalArgumentTypeList_8340.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8386.drop () ; // Release error dropped variable
                var_returnedType_8425.drop () ; // Release error dropped variable
                var_kind_8478.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_61 = kBoolTrue ;
          if (kBoolTrue == test_61) {
            const GGS_getterCallExpressionAST temp_62 = this ;
            test_61 = GGS_bool (ComparisonKind::notEqual, temp_62.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 204)).objectCompare (var_getterFormalArgumentTypeList_8340.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 204)))).boolEnum () ;
            if (kBoolTrue == test_61) {
              const GGS_getterCallExpressionAST temp_63 = this ;
              const GGS_getterCallExpressionAST temp_64 = this ;
              const GGS_getterCallExpressionAST temp_65 = this ;
              TC_Array <FixItDescription> fixItArray66 ;
              inCompiler->emitSemanticError (temp_63.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_64.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (var_getterFormalArgumentTypeList_8340.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 206)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).add_operation (temp_65.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 207)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)), fixItArray66  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_61) {
            GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10999 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
            const GGS_getterCallExpressionAST temp_67 = this ;
            cEnumerator_actualOutputArgumentList enumerator_11081 (temp_67.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
            cEnumerator_functionSignature enumerator_11188 (var_getterFormalArgumentTypeList_8340, EnumerationOrder::up) ;
            while (enumerator_11081.hasCurrentObject () && enumerator_11188.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_exp_11574 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11081.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11188.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11574, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)) ;
              enumGalgasBool test_68 = kBoolTrue ;
              if (kBoolTrue == test_68) {
                test_68 = GGS_bool (ComparisonKind::notEqual, enumerator_11188.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11081.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_68) {
                  GGS_string temp_69 ;
                  const enumGalgasBool test_70 = GGS_bool (ComparisonKind::notEqual, enumerator_11188.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_70) {
                    temp_69 = enumerator_11188.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)) ;
                  }else if (kBoolFalse == test_70) {
                    temp_69 = GGS_string::makeEmptyString () ;
                  }
                  GGS_string var_s_11687 = GGS_string ("!").add_operation (temp_69, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)) ;
                  TC_Array <FixItDescription> fixItArray71 ;
                  appendFixItActions (fixItArray71, kFixItReplace, var_s_11687) ;
                  inCompiler->emitSemanticError (enumerator_11081.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11687, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 223)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 223)), fixItArray71  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 223)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11188.current_mFormalArgumentType (HERE), var_exp_11574.readProperty_mResultType (), enumerator_11081.current_mEndOfExpressionLocation (HERE), var_exp_11574, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)) ;
              }
              var_constructorEffectiveParameterList_10999.addAssign_operation (var_exp_11574  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)) ;
              enumerator_11081.gotoNextObject () ;
              enumerator_11188.gotoNextObject () ;
            }
            enumGalgasBool test_72 = kBoolTrue ;
            if (kBoolTrue == test_72) {
              GGS_bool test_73 = GGS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_8567.objectCompare (GGS_string::makeEmptyString ())) ;
              if (kBoolTrue == test_73.boolEnum ()) {
                test_73 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
              }
              test_72 = test_73.boolEnum () ;
              if (kBoolTrue == test_72) {
                const GGS_getterCallExpressionAST temp_74 = this ;
                TC_Array <FixItDescription> fixItArray75 ;
                appendFixItActions (fixItArray75, kFixItReplace, var_obsoletedByGetter_8567) ;
                inCompiler->emitSemanticError (temp_74.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
              }
            }
            const GGS_getterCallExpressionAST temp_76 = this ;
            GGS_string temp_77 ;
            const enumGalgasBool test_78 = GGS_bool (ComparisonKind::equal, var_obsoletedByGetter_8567.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_78) {
              const GGS_getterCallExpressionAST temp_79 = this ;
              temp_77 = temp_79.readProperty_mGetterName ().readProperty_string () ;
            }else if (kBoolFalse == test_78) {
              temp_77 = var_obsoletedByGetter_8567 ;
            }
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_8425, temp_76.readProperty_mGetterName ().readProperty_location (), var_kind_8478, var_receiverExpression_4267, var_fieldList_8540, temp_77, var_constructorEffectiveParameterList_10999, var_hasCompilerArgument_8386, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (kBoolFalse == test_49) {
        enumGalgasBool test_80 = kBoolTrue ;
        if (kBoolTrue == test_80) {
          test_80 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 242)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 242)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_80) {
            const GGS_getterCallExpressionAST temp_81 = this ;
            TC_Array <FixItDescription> fixItArray82 ;
            inCompiler->emitSemanticError (temp_81.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)).add_operation (GGS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)), fixItArray82  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 243)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_80) {
          const GGS_getterCallExpressionAST temp_83 = this ;
          const GGS_getterCallExpressionAST temp_84 = this ;
          TC_Array <FixItDescription> fixItArray85 ;
          appendFixItActions (fixItArray85, kFixItReplace, extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).readProperty_getterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 250))) ;
          inCompiler->emitSemanticError (temp_83.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4321, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).add_operation (temp_84.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).add_operation (GGS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)), fixItArray85  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 247)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 281)) ;
  GGS_string var_receiverCppName_14489 ;
  const GGS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_14489, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 283)) ;
  GGS_stringlist var_getterArgumentCppNameList_14554 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_getterCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14594 (temp_2.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_14594.hasCurrentObject ()) {
    GGS_string var_argumentCppName_14812 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14594.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_14812, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 293)) ;
    var_getterArgumentCppNameList_14554.addAssign_operation (var_argumentCppName_14812  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 300)) ;
    enumerator_14594.gotoNextObject () ;
  }
  const GGS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_getterCallExpressionForGeneration temp_4 = this ;
      GGS_unifiedTypeMapEntry var_baseType_15007 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_15007, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 306)) ;
      GGS_bool var_searching_15122 = GGS_bool (true) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 308)).isValid ()) {
        uint32_t variant_15145 = GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 308)).uintValue () ;
        bool loop_15145 = true ;
        while (loop_15145) {
          loop_15145 = var_searching_15122.isValid () ;
          if (loop_15145) {
            loop_15145 = var_searching_15122.boolValue () ;
          }
          if (loop_15145 && (0 == variant_15145)) {
            loop_15145 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 308)) ;
          }
          if (loop_15145) {
            variant_15145 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_15007, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 309)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 309)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 309)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GGS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_15007, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 310)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 310)).readProperty_getterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 310)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_15007 = extensionGetter_definition (var_baseType_15007, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 311)).readProperty_superType () ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_15122 = GGS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_15122 = GGS_bool (false) ;
            }
          }
        }
      }
      const GGS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_15007, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 319)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 319)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 319)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 319))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 319)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_14489 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 320)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GGS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 321)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GGS_getterCallExpressionForGeneration temp_11 = this ;
          const GGS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GGS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)).add_operation (GGS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).add_operation (var_receiverCppName_14489, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GGS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)) ;
        const GGS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GGS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (var_receiverCppName_14489, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_14489 ;
      const GGS_getterCallExpressionForGeneration temp_15 = this ;
      cEnumerator_stringlist enumerator_16359 (temp_15.readProperty_mFieldList (), EnumerationOrder::up) ;
      while (enumerator_16359.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GGS_string (".readProperty_").add_operation (enumerator_16359.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 331)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 331)) ;
        enumerator_16359.gotoNextObject () ;
      }
      const GGS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)) ;
      const GGS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssign_operation(GGS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 334)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 334)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_16656 (var_getterArgumentCppNameList_14554, EnumerationOrder::up) ;
  while (enumerator_16656.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_16656.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)) ;
    if (enumerator_16656.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 338)) ;
    }
    enumerator_16656.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_14554.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 340)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GGS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 342)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 342)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_18) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      const GGS_getterCallExpressionForGeneration temp_22 = this ;
      test_21 = temp_22.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (kBoolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)) ;
    }
  }
  const GGS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 116)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_if_5F_expression_5250 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5250, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 132)) ;
  GGS_semanticExpressionForGeneration var_then_5F_expression_5535 ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5535, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)) ;
  GGS_semanticExpressionForGeneration var_else_5F_expression_5822 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5822, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 152)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5250.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_ifExpressionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GGS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5250.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 164)).add_operation (GGS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-if.galgas", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_then_5F_expression_5535.readProperty_mResultType ().objectCompare (var_else_5F_expression_5822.readProperty_mResultType ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GGS_ifExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5535.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).add_operation (GGS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5822.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).add_operation (GGS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-if.galgas", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GGS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GGS_ifExpressionForGeneration::init_21__21__21__21__21_ (var_then_5F_expression_5535.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5250, var_then_5F_expression_5535, var_else_5F_expression_5822, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GGS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_ifExpression_7686 ;
  const GGS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7686, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 202)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 211)) ;
  const GGS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 212)) ;
  GGS_string var_testVar_7951 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 214)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("const enumGalgasBool ").add_operation (var_testVar_7951, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (var_ifExpression_7686, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (kBoolTrue == ").add_operation (var_testVar_7951, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 216)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 218)) ;
  }
  GGS_string var_thenExpression_8419 ;
  const GGS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8419, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 219)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 226)).add_operation (var_thenExpression_8419, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 226)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_7951, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 229)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 230)) ;
  }
  GGS_string var_elseExpression_8840 ;
  const GGS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_8840, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 231)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 238)).add_operation (var_elseExpression_8840, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 240)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_initializerCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_initializerCallAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_9362 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_9362, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 260)) ;
      }
    }
  }
  const GGS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 262)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_instanciedType_10270 ;
  GGS_lstring var_initializerName_10305 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10369 ;
  {
  const GGS_initializerCallAST temp_0 = this ;
  const GGS_initializerCallAST temp_1 = this ;
  const GGS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_10270, var_initializerName_10305, var_constructorEffectiveParameterList_10369, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 275)) ;
  }
  GGS_lstring var_typeUsefulnessName_10445 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_instanciedType_10270, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 290)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 290)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_10445 COMMA_SOURCE_FILE ("expression-initializer.galgas", 291)) ;
  }
  const GGS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GGS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_10270, temp_3.readProperty_mEndOfExpressions (), var_initializerName_10305.readProperty_string (), var_constructorEffectiveParameterList_10369, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                           const GGS_lstring constinArgument_inTypeName,
                                                                                           const GGS_actualOutputArgumentList constinArgument_inInvocationArguments,
                                                                                           const GGS_location constinArgument_inEndOfExpressions,
                                                                                           GGS_unifiedTypeMapEntry & outArgument_outInstanciedType,
                                                                                           GGS_lstring & outArgument_outInitializerName,
                                                                                           GGS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanciedType.drop () ; // Release 'out' argument
  outArgument_outInitializerName.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outInstanciedType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstanciedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 321)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outInstanciedType.getter_isNull (SOURCE_FILE ("expression-initializer.galgas", 323)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas", 324)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GGS_unifiedTypeDefinition var_instanciedTypeDefinition_12102 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 328)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_12102.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas", 329)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas", 330)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      GGS_lstring var_nameForUsefulness_12415 = function_initializerNameForUsefulEntitiesGraph (var_instanciedTypeDefinition_12102.readProperty_typeName (), extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 335)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_12415 COMMA_SOURCE_FILE ("expression-initializer.galgas", 339)) ;
      }
      outArgument_outInitializerName = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 341)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GGS_initializerMap var_initializerMap_12808 = var_instanciedTypeDefinition_12102.readProperty_initializerMap () ;
      GGS_functionSignature var_formalSignature_12894 ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_initializerMap_12808.getter_hasKey (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas", 344)).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_initializerMap_12808.method_searchKey (outArgument_outInitializerName, var_formalSignature_12894, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 345)) ;
        }
      }
      if (kBoolFalse == test_5) {
        GGS_string var_s_13063 = GGS_string ("@").add_operation (var_instanciedTypeDefinition_12102.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 347)).add_operation (GGS_string (".init("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 347)) ;
        cEnumerator_actualOutputArgumentList enumerator_13143 (constinArgument_inInvocationArguments, EnumerationOrder::up) ;
        while (enumerator_13143.hasCurrentObject ()) {
          var_s_13063.plusAssign_operation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 350)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_13143.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_s_13063.plusAssign_operation(enumerator_13143.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 352)) ;
            }
          }
          if (enumerator_13143.hasNextObject ()) {
            var_s_13063.plusAssign_operation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 355)) ;
          }
          enumerator_13143.gotoNextObject () ;
        }
        var_s_13063.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 357)) ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GGS_string ("the ").add_operation (var_s_13063, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 359)).add_operation (GGS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 359)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas", 358)) ;
        var_formalSignature_12894.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      cEnumerator_actualOutputArgumentList enumerator_13617 (constinArgument_inInvocationArguments, EnumerationOrder::up) ;
      cEnumerator_functionSignature enumerator_13663 (var_formalSignature_12894, EnumerationOrder::up) ;
      while (enumerator_13617.hasCurrentObject () && enumerator_13663.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_exp_14027 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_13617.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_13663.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_14027, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 366)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_13663.current (HERE).readProperty_mFormalArgumentType (), var_exp_14027.readProperty_mResultType (), enumerator_13617.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_14027, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 375)) ;
        }
        outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_14027  COMMA_SOURCE_FILE ("expression-initializer.galgas", 381)) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_13663.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_13617.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            GGS_string temp_9 ;
            const enumGalgasBool test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_13663.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              temp_9 = enumerator_13663.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 384)) ;
            }else if (kBoolFalse == test_10) {
              temp_9 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_14411 = GGS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 383)) ;
            TC_Array <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, kFixItReplace, var_s_14411) ;
            inCompiler->emitSemanticError (enumerator_13617.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_14411, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 388)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 388)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas", 387)) ;
          }
        }
        enumerator_13617.gotoNextObject () ;
        enumerator_13663.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerCallForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 410)) ;
  GGS_stringlist var_parameterList_15631 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_initializerCallForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15659 (temp_1.readProperty_mEffectiveParameterList (), EnumerationOrder::up) ;
  while (enumerator_15659.hasCurrentObject ()) {
    GGS_string var_parameter_15889 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15659.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15889, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 413)) ;
    var_parameterList_15631.addAssign_operation (var_parameter_15889  COMMA_SOURCE_FILE ("expression-initializer.galgas", 420)) ;
    enumerator_15659.gotoNextObject () ;
  }
  const GGS_initializerCallForGeneration temp_2 = this ;
  const GGS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 422)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 422)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 423)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 423)) ;
  cEnumerator_stringlist enumerator_16141 (var_parameterList_15631, EnumerationOrder::up) ;
  while (enumerator_16141.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_16141.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 426)) ;
    enumerator_16141.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 428)) COMMA_SOURCE_FILE ("expression-initializer.galgas", 428)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 429)) ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 430)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 144)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_5980 ;
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 162)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5980, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 159)) ;
  const GGS_testDynamicClassInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_6028 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 169)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5980.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 171)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_6277 = var_castType_6028 ;
      GGS_bool var_found_6304 = GGS_bool (ComparisonKind::equal, var_t_6277.objectCompare (var_expression_5980.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).isValid ()) {
        uint32_t variant_6344 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).uintValue () ;
        bool loop_6344 = true ;
        while (loop_6344) {
          loop_6344 = var_found_6304.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6277, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).isValid () ;
          if (loop_6344) {
            loop_6344 = var_found_6304.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6277, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).boolValue () ;
          }
          if (loop_6344 && (0 == variant_6344)) {
            loop_6344 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 175)) ;
          }
          if (loop_6344) {
            variant_6344 -- ;
            var_t_6277 = extensionGetter_definition (var_t_6277, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 177)).readProperty_superType () ;
            var_found_6304 = GGS_bool (ComparisonKind::equal, var_t_6277.objectCompare (var_expression_5980.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_6304.operator_not (SOURCE_FILE ("expression-is-as.galgas", 180)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GGS_testDynamicClassInExpressionAST temp_4 = this ;
          const GGS_testDynamicClassInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (extensionGetter_definition (var_expression_5980.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 181)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5980.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5980.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)) ;
  }
  const GGS_testDynamicClassInExpressionAST temp_8 = this ;
  const GGS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5980, temp_9.readProperty_mTypeComparisonKind (), var_castType_6028, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_8291 ;
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8291, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 217)) ;
  const GGS_castInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_8340 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 227)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_8291.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 229)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 229)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_8585 = var_type_8340 ;
      GGS_bool var_found_8608 = GGS_bool (ComparisonKind::equal, var_t_8585.objectCompare (var_expression_8291.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).isValid ()) {
        uint32_t variant_8648 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).uintValue () ;
        bool loop_8648 = true ;
        while (loop_8648) {
          loop_8648 = var_found_8608.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8585, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).isValid () ;
          if (loop_8648) {
            loop_8648 = var_found_8608.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8585, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).boolValue () ;
          }
          if (loop_8648 && (0 == variant_8648)) {
            loop_8648 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 233)) ;
          }
          if (loop_8648) {
            variant_8648 -- ;
            var_t_8585 = extensionGetter_definition (var_t_8585, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 235)).readProperty_superType () ;
            var_found_8608 = GGS_bool (ComparisonKind::equal, var_t_8585.objectCompare (var_expression_8291.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_8608.operator_not (SOURCE_FILE ("expression-is-as.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GGS_castInExpressionAST temp_4 = this ;
          const GGS_castInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (extensionGetter_definition (var_expression_8291.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 239)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_8291.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 243)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_8291.readProperty_mLocation (), GGS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_8291.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 245)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 244)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_8291.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 249)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GGS_castInExpressionAST temp_10 = this ;
      const GGS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GGS_extractObjectInExpressionForGeneration::init_21__21__21__21_ (var_type_8340, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_8291, temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GGS_castInExpressionAST temp_12 = this ;
    const GGS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GGS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_8340, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_8291, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_8340, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GGS_string var_typeNameRepresentation_10606 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 284)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 284)) ;
  GGS_string var_receiverExpression_10898 ;
  const GGS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10898, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 286)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 294)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GGS_dynamicTypeComparisonKind::Enumeration::invalid:
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_equal:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_receiverExpression_10898, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (GGS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (var_typeNameRepresentation_10606, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 298)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 299)) ;
    }
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_inherited:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_10606, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 301)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 302)).add_operation (var_receiverExpression_10898, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)).add_operation (GGS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)) ;
    }
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_strictlyInherited:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool ((").add_operation (var_receiverExpression_10898, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (GGS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (var_typeNameRepresentation_10606, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 306)).add_operation (GGS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (var_typeNameRepresentation_10606, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 308)).add_operation (var_receiverExpression_10898, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)).add_operation (GGS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 322)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 323)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)) ;
  GGS_string var_receiverExpression_12366 ;
  const GGS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_12366, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)) ;
  const GGS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (var_receiverExpression_12366, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)) ;
  }
  const GGS_castInExpressionForGeneration temp_3 = this ;
  const GGS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)).add_operation (var_receiverExpression_12366, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (var_receiverExpression_12366, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)).add_operation (GGS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 346)) ;
  }
  const GGS_castInExpressionForGeneration temp_5 = this ;
  const GGS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GGS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (var_receiverExpression_12366, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GGS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 347)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 352)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 356)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 374)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)) ;
  GGS_string var_receiverExpression_14313 ;
  const GGS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_14313, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)) ;
  const GGS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GGS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (GGS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (var_receiverExpression_14313, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionAST temp_0 = this ;
  const GGS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (TO_UNICODE (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-literal-char.galgas", 103)).getter_string (SOURCE_FILE ("expression-literal-char.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 103)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionAST temp_0 = this ;
  const GGS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_double (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_double (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-double.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 105)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 105)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionAST temp_0 = this ;
  const GGS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 195)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 195)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 212)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 229)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 229)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 265)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3892 = GGS_string::makeEmptyString () ;
  const GGS_literalStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_3906 (temp_0.readProperty_mStringSequence (), EnumerationOrder::up) ;
  while (enumerator_3906.hasCurrentObject ()) {
    var_s_3892.plusAssign_operation(enumerator_3906.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 93)) ;
    enumerator_3906.gotoNextObject () ;
  }
  const GGS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3892, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCppExpression = GGS_string ("GGS_string::makeEmptyString ()") ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GGS_string ("GGS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-literal-string.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 117)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 117)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_literalTypeInExpressionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_3090 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_3090, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalTypeInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3673 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 83)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3673 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 84)) ;
  }
  const GGS_literalTypeInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_3839 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 86)) ;
  const GGS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_literalTypeInExpressionForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("type"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 88)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 88)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_3839, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 111)) ;
  const GGS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 113)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 112)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 113)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3784 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3784 COMMA_SOURCE_FILE ("expression-lexique.galgas", 92)) ;
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GGS_bool joker_4102_7 ; // Joker input parameter
  GGS_terminalMap joker_4102_6 ; // Joker input parameter
  GGS_indexingListAST joker_4102_5 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_4102_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_4102_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_4102_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_4102_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_4102_7, joker_4102_6, joker_4102_5, joker_4102_4, joker_4102_3, joker_4102_2, joker_4102_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 94)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GGS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GGS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 100)) ;
    }
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_lexiqueIntrospectionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 104)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 128))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 128)) ;
  const GGS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 130)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_4836 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 121)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4836 COMMA_SOURCE_FILE ("expression-option.galgas", 122)) ;
  }
  GGS_bool var_optionComponentIsPredefined_5134 ;
  GGS_commandLineOptionMap var_boolOptionMap_5193 ;
  GGS_commandLineOptionMap var_uintOptionMap_5238 ;
  GGS_commandLineOptionMap var_stringOptionMap_5283 ;
  GGS_commandLineOptionMap var_stringListOptionMap_5330 ;
  const GGS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_5134, var_boolOptionMap_5193, var_uintOptionMap_5238, var_stringOptionMap_5283, var_stringListOptionMap_5330, inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 124)) ;
  const GGS_optionExpressionAST temp_2 = this ;
  GGS_bool var_found_5366 = var_boolOptionMap_5193.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 132)) ;
  GGS_unifiedTypeMapEntry var_returnedType_5454 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_5366.operator_not (SOURCE_FILE ("expression-option.galgas", 134)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_optionExpressionAST temp_4 = this ;
      var_found_5366 = var_uintOptionMap_5238.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 135)) ;
      var_returnedType_5454 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_5366.operator_not (SOURCE_FILE ("expression-option.galgas", 138)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_optionExpressionAST temp_6 = this ;
      var_found_5366 = var_stringOptionMap_5283.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 139)) ;
      var_returnedType_5454 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_5366.operator_not (SOURCE_FILE ("expression-option.galgas", 142)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GGS_optionExpressionAST temp_8 = this ;
      var_found_5366 = var_stringListOptionMap_5330.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 143)) ;
      var_returnedType_5454 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_5366.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GGS_optionExpressionAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_optionExpressionAST temp_12 = this ;
          const GGS_optionExpressionAST temp_13 = this ;
          const GGS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_5454, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5134, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GGS_optionExpressionAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GGS_optionExpressionAST temp_17 = this ;
            const GGS_optionExpressionAST temp_18 = this ;
            const GGS_optionExpressionAST temp_19 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5134, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GGS_optionExpressionAST temp_21 = this ;
            test_20 = GGS_bool (ComparisonKind::equal, temp_21.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GGS_optionExpressionAST temp_22 = this ;
              const GGS_optionExpressionAST temp_23 = this ;
              const GGS_optionExpressionAST temp_24 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5134, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GGS_optionExpressionAST temp_26 = this ;
              test_25 = GGS_bool (ComparisonKind::equal, temp_26.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GGS_optionExpressionAST temp_27 = this ;
                const GGS_optionExpressionAST temp_28 = this ;
                const GGS_optionExpressionAST temp_29 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5134, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GGS_optionExpressionAST temp_30 = this ;
              TC_Array <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-option.galgas", 176)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GGS_stringlist var_s_7484 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    cEnumerator_commandLineOptionMap enumerator_7511 (var_boolOptionMap_5193, EnumerationOrder::up) ;
    while (enumerator_7511.hasCurrentObject ()) {
      var_s_7484.addAssign_operation (enumerator_7511.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 181)) ;
      enumerator_7511.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7579 (var_uintOptionMap_5238, EnumerationOrder::up) ;
    while (enumerator_7579.hasCurrentObject ()) {
      var_s_7484.addAssign_operation (enumerator_7579.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 184)) ;
      enumerator_7579.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7647 (var_stringOptionMap_5283, EnumerationOrder::up) ;
    while (enumerator_7647.hasCurrentObject ()) {
      var_s_7484.addAssign_operation (enumerator_7647.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 187)) ;
      enumerator_7647.gotoNextObject () ;
    }
    const GGS_optionExpressionAST temp_32 = this ;
    const GGS_optionExpressionAST temp_33 = this ;
    const GGS_optionExpressionAST temp_34 = this ;
    TC_Array <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_7484) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GGS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 190)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 190)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 190)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 190)), fixItArray35  COMMA_SOURCE_FILE ("expression-option.galgas", 189)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 215))  COMMA_SOURCE_FILE ("expression-option.galgas", 215)) ;
    }
  }
  const GGS_optionValueExpressionForGeneration temp_3 = this ;
  const GGS_optionValueExpressionForGeneration temp_4 = this ;
  const GGS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (GGS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)).add_operation (GGS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 238))  COMMA_SOURCE_FILE ("expression-option.galgas", 238)) ;
    }
  }
  const GGS_optionCharExpressionForGeneration temp_3 = this ;
  const GGS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)).add_operation (GGS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 260)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 261))  COMMA_SOURCE_FILE ("expression-option.galgas", 261)) ;
    }
  }
  const GGS_optionStringExpressionForGeneration temp_3 = this ;
  const GGS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 263)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 263)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 264)).add_operation (GGS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 264)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 275)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 276))  COMMA_SOURCE_FILE ("expression-option.galgas", 276)) ;
    }
  }
  const GGS_optionCommentExpressionForGeneration temp_3 = this ;
  const GGS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 278)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 278)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 279)).add_operation (GGS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 279)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 163)) ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7966 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7966, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8301 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7966.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8301, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 188)) ;
  {
  const GGS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7966.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 199)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 199)), GGS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7966, var_rightExpression_8301, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 198)) ;
  }
  const GGS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7966.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7966, GGS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 210)), var_rightExpression_8301, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 221)) ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 222)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_localVarManager & ioArgument_ioVariableMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_10017 ;
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10017, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 236)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10352 ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10017.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10352, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 246)) ;
  {
  const GGS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_10017.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas", 257)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10017, var_rightExpression_10352, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 256)) ;
  }
  const GGS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_10017.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10017, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 268)), var_rightExpression_10352, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 278)) ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 279)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12061 ;
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12061, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 293)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12396 ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12061.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12396, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 303)) ;
  {
  const GGS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12061.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 314)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)), GGS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12061, var_rightExpression_12396, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 313)) ;
  }
  const GGS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12061.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_12061, GGS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 325)), var_rightExpression_12396, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 335)) ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 336)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14096 ;
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14096, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 350)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14431 ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14096.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14431, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 360)) ;
  {
  const GGS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14096.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 371)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas", 371)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 371)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14096, var_rightExpression_14431, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 370)) ;
  }
  const GGS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14096.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14096, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 382)), var_rightExpression_14431, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 392)) ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 393)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16114 ;
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16114, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 407)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16449 ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16114.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16449, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 417)) ;
  {
  const GGS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16114.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 428)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16114, var_rightExpression_16449, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 427)) ;
  }
  const GGS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16114.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16114, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 439)), var_rightExpression_16449, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nilExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nilExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                              GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                              const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                              GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                              GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inType.getter_isNull (SOURCE_FILE ("expression-nil.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_nilExpressionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-nil.galgas", 73)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_unwrappedType_3370 = extensionGetter_definition (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("expression-nil.galgas", 75)).readProperty_unwrappedType () ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_unwrappedType_3370.getter_isNull (SOURCE_FILE ("expression-nil.galgas", 76)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GGS_nilExpressionAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mLocation (), GGS_string ("the inferred type @").add_operation (extensionGetter_typeName (var_unwrappedType_3370, inCompiler COMMA_SOURCE_FILE ("expression-nil.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("expression-nil.galgas", 77)).add_operation (GGS_string (" is not an optional type"), inCompiler COMMA_SOURCE_FILE ("expression-nil.galgas", 77)), fixItArray5  COMMA_SOURCE_FILE ("expression-nil.galgas", 77)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      const GGS_nilExpressionAST temp_6 = this ;
      outArgument_outExpression = GGS_nilExpressionForGeneration::init_21__21_ (constinArgument_inType, temp_6.readProperty_mLocation (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nilExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nilExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-nil.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-nil.galgas", 102)).add_operation (GGS_string ("::init_nil ()"), inCompiler COMMA_SOURCE_FILE ("expression-nil.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4012 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4012, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4087 = var_expression_4012.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (var_expression_4012.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (var_expression_4012.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4087, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 101)) COMMA_SOURCE_FILE ("expression-not.galgas", 101)).operator_not (SOURCE_FILE ("expression-not.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4087, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4087, temp_8.readProperty_mOperatorLocation (), var_expression_4012, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 131)) ;
  GGS_string var_operand_5784 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5784, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5784.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 163)) ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7866 ;
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7866, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8202 ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7866.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8202, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 188)) ;
  {
  const GGS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7866.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 199)) COMMA_SOURCE_FILE ("expression-or.galgas", 199)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7866, var_rightExpression_8202, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 198)) ;
  }
  const GGS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7866.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7866, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 209)), var_rightExpression_8202, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 219)) ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 220)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9857 ;
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9857, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 234)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10193 ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9857.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10193, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 244)) ;
  {
  const GGS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9857.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 255)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 255)) COMMA_SOURCE_FILE ("expression-or.galgas", 255)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9857, var_rightExpression_10193, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 254)) ;
  }
  const GGS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_9857.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9857, var_rightExpression_10193, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 274)) ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 275)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_11837 ;
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11837, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 289)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12173 ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11837.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12173, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 299)) ;
  {
  const GGS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11837.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 310)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 310)) COMMA_SOURCE_FILE ("expression-or.galgas", 310)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11837, var_rightExpression_12173, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 309)) ;
  }
  const GGS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_11837.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11837, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 321)), var_rightExpression_12173, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 331)) ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 332)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_13898 ;
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13898, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 347)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14255 ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14255, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 357)) ;
  GGS_unifiedTypeMapEntry var_leftType_14335 = var_leftExpression_13898.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_14335, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 368)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_13898.readProperty_mLocation (), GGS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 369)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightType_14557 = var_rightExpression_14255.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_14557, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 372)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_14255.readProperty_mLocation (), GGS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 373)) ;
    }
  }
  const GGS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_13898.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 377)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_13898, var_rightExpression_14255, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 389)) ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 390)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16509 ;
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16509, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 404)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16866 ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16866, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 414)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_16509.readProperty_mResultType (), var_leftExpression_16509.readProperty_mLocation (), var_leftExpression_16509, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 424)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_16866.readProperty_mResultType (), var_rightExpression_16866.readProperty_mLocation (), var_rightExpression_16866, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 434)) ;
  }
  const GGS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_16509.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 446)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16509, var_rightExpression_16866, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GGS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 484)) ;
  GGS_string var_leftTemporaryOperand_19673 ;
  const GGS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19673, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 486)) ;
  GGS_string var_testVar_19729 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 495)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_bool ").add_operation (var_testVar_19729, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (var_leftTemporaryOperand_19673, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 496)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (kBoolTrue != ").add_operation (var_testVar_19729, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 497)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 499)) ;
  }
  GGS_string var_rightTemporaryOperand_20198 ;
  const GGS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20198, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_19729.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (var_rightTemporaryOperand_20198, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 507)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 509)) ;
  outArgument_outCppExpression = var_testVar_19729 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 521)) ;
  GGS_string var_leftTemporaryOperand_20998 ;
  const GGS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20998, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 523)) ;
  GGS_string var_rightTemporaryOperand_21202 ;
  const GGS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_21202, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 531)) ;
  const GGS_closedSliceExpressionForGeneration temp_3 = this ;
  const GGS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_20998, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (var_rightTemporaryOperand_21202, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (var_leftTemporaryOperand_20998, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string (").add_operation (GGS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 553)) ;
  GGS_string var_leftTemporaryOperand_22169 ;
  const GGS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22169, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)) ;
  GGS_string var_rightTemporaryOperand_22373 ;
  const GGS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22373, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 563)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 571)) COMMA_SOURCE_FILE ("expression-or.galgas", 571)) ;
  }
  const GGS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_22169, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (var_rightTemporaryOperand_22373, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (var_leftTemporaryOperand_22169, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_5891 ;
  const GGS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-property-subscript-access.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5891, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 149)) ;
  GGS_unifiedTypeMapEntry var_expressionType_5976 = var_expression_5891.readProperty_mResultType () ;
  GGS_propertyMap var_propertyMap_6024 = extensionGetter_definition (var_expressionType_5976, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 160)).readProperty_propertyMap () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_structPropertyAccessExpressionAST temp_2 = this ;
    const GGS_propertyMap_2E_element var_prop_6089 = var_propertyMap_6024.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_propertyMap_6024.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_expression_5891.ptr ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          const GGS_structPropertyAccessExpressionAST temp_4 = this ;
          const GGS_structPropertyAccessExpressionAST temp_5 = this ;
          GGS_unifiedTypeMapEntry joker_6560_3 ; // Joker input parameter
          GGS_string joker_6560_2 ; // Joker input parameter
          GGS_string joker_6560_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_4.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 168)), temp_5.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_6560_3, joker_6560_2, joker_6560_1, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 167)) ;
          }
        }
      }
      const GGS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_prop_6089.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_6.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 172)) ;
      const GGS_structPropertyAccessExpressionAST temp_7 = this ;
      const GGS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_6089.readProperty_mPropertyType (), temp_7.readProperty_operatorLocation (), var_expression_5891, temp_8.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    GGS_getterMap var_getterMap_6914 = extensionGetter_definition (var_expressionType_5976, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 181)).readProperty_getterMap () ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GGS_structPropertyAccessExpressionAST temp_10 = this ;
      const GGS_getterMap_2E_element var_theGetter_6977 = var_getterMap_6914.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_getterMap_6914.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_9 = kBoolFalse ;
      }
      if (kBoolTrue == test_9) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_theGetter_6977.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-property-subscript-access.galgas", 183)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            const GGS_structPropertyAccessExpressionAST temp_12 = this ;
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_propertyName ().readProperty_location (), GGS_string ("for being called as a property read, the getter should have no formal argument (has ").add_operation (var_theGetter_6977.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-property-subscript-access.galgas", 186)).getter_string (SOURCE_FILE ("expression-property-subscript-access.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 185)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 186)), fixItArray13  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 184)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_11) {
          const GGS_structPropertyAccessExpressionAST temp_14 = this ;
          GGS_string temp_15 ;
          const enumGalgasBool test_16 = GGS_bool (ComparisonKind::equal, var_theGetter_6977.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GGS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_propertyName ().readProperty_string () ;
          }else if (kBoolFalse == test_16) {
            temp_15 = var_theGetter_6977.readProperty_mGetterNameThatObsoletesInvokationName () ;
          }
          outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_theGetter_6977.readProperty_mReturnedType (), temp_14.readProperty_propertyName ().readProperty_location (), var_theGetter_6977.readProperty_mKind (), var_expression_5891, GGS_stringlist::init (inCompiler COMMA_HERE), temp_15, GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_theGetter_6977.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (kBoolFalse == test_9) {
      GGS_string var_s_7783 = GGS_string ("undefined property, undefined getter") ;
      cEnumerator_propertyMap enumerator_7850 (var_propertyMap_6024, EnumerationOrder::up) ;
      while (enumerator_7850.hasCurrentObject ()) {
        var_s_7783.plusAssign_operation(GGS_string ("\n  -- property: ").add_operation (enumerator_7850.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 203)) ;
        enumerator_7850.gotoNextObject () ;
      }
      cEnumerator_getterMap enumerator_7951 (var_getterMap_6914, EnumerationOrder::up) ;
      while (enumerator_7951.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_7951.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-property-subscript-access.galgas", 206)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            var_s_7783.plusAssign_operation(GGS_string ("\n  -- getter: ").add_operation (enumerator_7951.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 207)) ;
          }
        }
        enumerator_7951.gotoNextObject () ;
      }
      const GGS_structPropertyAccessExpressionAST temp_19 = this ;
      TC_Array <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_propertyName ().readProperty_location (), var_s_7783, fixItArray20  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 210)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@propertyAccessExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_propertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 232)) ;
  GGS_string var_operand_9242 ;
  const GGS_propertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_9242, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 234)) ;
  const GGS_propertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_9242.add_operation (GGS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 242)).add_operation (temp_2.readProperty_structFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-subscript-access.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 242)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 242)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subscriptReadAccessExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_10140 (temp_0.readProperty_actualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_10140.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_10140.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 262)) ;
    enumerator_10140.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subscriptReadAccessExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_11259 ;
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-property-subscript-access.galgas", 280)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11259, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 277)) ;
  GGS_unifiedTypeMapEntry var_expressionType_11305 = var_expression_11259.readProperty_mResultType () ;
  const GGS_subscriptReadAccessExpressionAST temp_1 = this ;
  GGS_string var_invocationSignature_11391 = extensionGetter_subscriptSignature (temp_1.readProperty_actualArgumentList (), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 288)) ;
  GGS_subscriptMap var_subscriptMap_11502 = extensionGetter_definition (var_expressionType_11305, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 290)).readProperty_readSubscriptMap () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_subscriptMap_2E_element var_aSubscript_11573 = var_subscriptMap_11502.readSubscript__3F_ (var_invocationSignature_11391, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_subscriptMap_11502.readSubscript__3F_ (var_invocationSignature_11391, inCompiler COMMA_HERE).isValuated ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_11676 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_subscriptReadAccessExpressionAST temp_3 = this ;
      cEnumerator_functionSignature enumerator_11788 (var_aSubscript_11573.readProperty_argumentTypeList (), EnumerationOrder::up) ;
      cEnumerator_actualOutputArgumentList enumerator_11824 (temp_3.readProperty_actualArgumentList (), EnumerationOrder::up) ;
      while (enumerator_11788.hasCurrentObject () && enumerator_11824.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_12182 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11824.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11788.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12182, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 295)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11788.current (HERE).readProperty_mFormalArgumentType (), var_expression_12182.readProperty_mResultType (), enumerator_11824.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_12182, inCompiler  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 304)) ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_11788.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11824.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            GGS_string temp_5 ;
            const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_11788.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              temp_5 = enumerator_11788.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 312)) ;
            }else if (kBoolFalse == test_6) {
              temp_5 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_12516 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 311)) ;
            TC_Array <FixItDescription> fixItArray7 ;
            appendFixItActions (fixItArray7, kFixItReplace, var_s_12516) ;
            inCompiler->emitSemanticError (enumerator_11824.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12516, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 315)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 315)), fixItArray7  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 315)) ;
          }
        }
        var_semanticExpressionListForGeneration_11676.addAssign_operation (var_expression_12182  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 318)) ;
        enumerator_11788.gotoNextObject () ;
        enumerator_11824.gotoNextObject () ;
      }
      const GGS_subscriptReadAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionForGeneration::init_21__21__21__21__21_ (var_aSubscript_11573.readProperty_valueType (), temp_8.readProperty_endOfArgsLocation (), var_expression_11259, var_invocationSignature_11391, var_semanticExpressionListForGeneration_11676, inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GGS_subscriptReadAccessExpressionAST temp_9 = this ;
    TC_Array <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_endOfArgsLocation (), GGS_string ("unknown subscript signature"), fixItArray10  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 329)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subscriptReadAccessExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subscriptReadAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 351)) ;
  GGS_string var_operand_14404 ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_14404, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 353)) ;
  GGS__5B_string_5D_ var_subscriptArgumentList_14461 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14514 (temp_2.readProperty_actualExpressionList (), EnumerationOrder::up) ;
  while (enumerator_14514.hasCurrentObject ()) {
    GGS_string var_actualArgOperand_14730 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14514.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_actualArgOperand_14730, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 363)) ;
    {
    var_subscriptArgumentList_14461.setter_append (var_actualArgOperand_14730, inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 370)) ;
    }
    enumerator_14514.gotoNextObject () ;
  }
  const GGS_subscriptReadAccessExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = var_operand_14404.add_operation (GGS_string (".readSubscript_"), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 373)).add_operation (temp_3.readProperty_subscriptInvocationName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-subscript-access.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 373)) ;
  outArgument_outCppExpression.plusAssign_operation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 374)) ;
  cEnumerator__5B_string_5D_ enumerator_14993 (var_subscriptArgumentList_14461, EnumerationOrder::up) ;
  while (enumerator_14993.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14993.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 376)) ;
    enumerator_14993.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 378)) COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 378)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 379)).add_operation (GGS_string (" COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("expression-property-subscript-access.galgas", 379)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3484 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-self.galgas", 80)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-self.galgas", 80)).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GGS_string var_selfCppName_3571 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      const GGS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GGS_selfInExpressionForGeneration::init_21__21__21_ (var_selfAvailable_3484.readProperty_type (), temp_1.readProperty_mSelfLocation (), var_selfCppName_3571, inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_selfInExpressionAST temp_2 = this ;
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 105)) ;
  const GGS_selfInExpressionForGeneration temp_0 = this ;
  const GGS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 106)) ;
  {
  const GGS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 66)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3786 ;
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3786, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 81)) ;
  GGS_unifiedTypeMapEntry var_type_3867 = var_expression_3786.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3908 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3786.ptr ())) ;
    if (nullptr == var_exp_3908.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3908.readProperty_mResultType (), var_exp_3908.readProperty_mLocation (), var_exp_3908.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 96)), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3867, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 98)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 98)) COMMA_SOURCE_FILE ("expression-tilde.galgas", 98)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 98)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GGS_tildeExpressionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3867, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 100)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 100)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 100)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 99)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GGS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_3867, temp_5.readProperty_mOperatorLocation (), var_expression_3786, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 133)) ;
  GGS_string var_operand_5563 ;
  const GGS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5563, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 135)) ;
  const GGS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5563.add_operation (GGS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 137)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                  GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                  GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (true)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (false)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4049 ;
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4049, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 87)) ;
  GGS_unifiedTypeMapEntry var_type_4124 = var_expression_4049.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_4163 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_4049.ptr ())) ;
    if (nullptr == var_exp_4163.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_4163.readProperty_mResultType (), var_exp_4163.readProperty_mLocation (), var_exp_4163.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 102)), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_4124, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas", 104)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GGS_unaryMinusExpressionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4124, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 105)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GGS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_4124, temp_5.readProperty_mOperatorLocation (), var_expression_4049, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 133)) ;
  GGS_string var_operand_5988 ;
  const GGS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5988, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 135)) ;
  const GGS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5988.add_operation (GGS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 144)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 144)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4065 = outArgument_outExpression.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4065, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 97)) COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_unaryPlusExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4065, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).add_operation (GGS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4085 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4085, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4160 = var_expression_4085.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4160, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4160, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4160, temp_4.readProperty_mOperatorLocation (), var_expression_4085, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 126)) ;
  GGS_string var_operand_5584 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5584, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 128)) ;
  outArgument_outCppExpression = var_operand_5584.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 136)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_3508 ;
  GGS_string var_sourceVariableCppName_3532 ;
  GGS_string var_nameForCheckingFormalParameterUsing_3573 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_3508, var_sourceVariableCppName_3532, var_nameForCheckingFormalParameterUsing_3573, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 72)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_3508, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_3532, var_nameForCheckingFormalParameterUsing_3573, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 106)) ;
  const GGS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GGS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-var.galgas", 108)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const GGS_unifiedTypeMapEntry constinArgument_inTargetType,
                                               const GGS_unifiedTypeMapEntry constinArgument_inSourceType,
                                               const GGS_location constinArgument_inErrorLocation,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_sourceType_3376 = constinArgument_inSourceType ;
  GGS_bool var_ok_3414 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3376)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).isValid ()) {
    uint32_t variant_3448 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).uintValue () ;
    bool loop_3448 = true ;
    while (loop_3448) {
      loop_3448 = var_ok_3414.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_and (extensionGetter_definition (var_sourceType_3376, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).isValid () ;
      if (loop_3448) {
        loop_3448 = var_ok_3414.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_and (extensionGetter_definition (var_sourceType_3376, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).boolValue () ;
      }
      if (loop_3448 && (0 == variant_3448)) {
        loop_3448 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) ;
      }
      if (loop_3448) {
        variant_3448 -- ;
        var_sourceType_3376 = extensionGetter_definition (var_sourceType_3376, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)).readProperty_superType () ;
        var_ok_3414 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3376)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_3414.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_typeKindEnum_2E_weakReferenceType var_weakRefType_3644 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).unwrappedValue () ;
      if (!extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).isValuated ()) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_3376 = constinArgument_inSourceType ;
        var_ok_3414 = GGS_bool (ComparisonKind::equal, var_weakRefType_3644.readProperty_referenceType ().objectCompare (var_sourceType_3376)) ;
        if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).isValid ()) {
          uint32_t variant_3804 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).uintValue () ;
          bool loop_3804 = true ;
          while (loop_3804) {
            loop_3804 = var_ok_3414.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_and (extensionGetter_definition (var_sourceType_3376, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).isValid () ;
            if (loop_3804) {
              loop_3804 = var_ok_3414.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_and (extensionGetter_definition (var_sourceType_3376, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).boolValue () ;
            }
            if (loop_3804 && (0 == variant_3804)) {
              loop_3804 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) ;
            }
            if (loop_3804) {
              variant_3804 -- ;
              var_sourceType_3376 = extensionGetter_definition (var_sourceType_3376, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)).readProperty_superType () ;
              var_ok_3414 = GGS_bool (ComparisonKind::equal, var_weakRefType_3644.readProperty_referenceType ().objectCompare (var_sourceType_3376)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_3414.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).add_operation (GGS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 95)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const GGS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                                        const GGS_location constinArgument_inErrorLocation,
                                                                        GGS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition var_targetTypeDef_4839 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)) ;
  GGS_unifiedTypeMapEntry temp_0 ;
  const enumGalgasBool test_1 = var_targetTypeDef_4839.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = var_targetTypeDef_4839.readProperty_unwrappedType () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = constinArgument_inTargetType ;
  }
  GGS_unifiedTypeMapEntry var_targetTypeForBigIntAssignment_4887 = temp_0 ;
  GGS_bool var_handled_5067 = GGS_bool (false) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_bigIntSource_5092 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_5092.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4887, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GGS_bigint var_bigIntValue_5237 = var_bigIntSource_5092.readProperty_mValue () ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5237.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5237.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5237.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
            }
          }
          ioArgument_ioExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4887, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5237.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)), inCompiler COMMA_HERE) ;
          var_handled_5067 = GGS_bool (true) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4887, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 128)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GGS_bigint var_bigIntValue_5705 = var_bigIntSource_5092.readProperty_mValue () ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5705.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5705.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5705.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)) ;
              }
            }
            ioArgument_ioExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4887, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5705.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 136)), inCompiler COMMA_HERE) ;
            var_handled_5067 = GGS_bool (true) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4887, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 139)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              GGS_bigint var_bigIntValue_6184 = var_bigIntSource_5092.readProperty_mValue () ;
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6184.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6184.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  TC_Array <FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6184.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)) ;
                }
              }
              ioArgument_ioExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4887, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6184.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)), inCompiler COMMA_HERE) ;
              var_handled_5067 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4887, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)))).boolEnum () ;
              if (kBoolTrue == test_12) {
                GGS_bigint var_bigIntValue_6660 = var_bigIntSource_5092.readProperty_mValue () ;
                enumGalgasBool test_13 = kBoolTrue ;
                if (kBoolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6660.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6660.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    TC_Array <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6660.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)) ;
                  }
                }
                ioArgument_ioExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4887, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6660.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)), inCompiler COMMA_HERE) ;
                var_handled_5067 = GGS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = var_handled_5067.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 164)).boolEnum () ;
    if (kBoolTrue == test_15) {
      test_15 = var_targetTypeDef_4839.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 164)).boolEnum () ;
      if (kBoolTrue == test_15) {
        test_15 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).boolEnum () ;
        if (kBoolTrue == test_15) {
          GGS_unifiedTypeMapEntry var_targetUnwrappedType_7269 = var_targetTypeDef_4839.readProperty_unwrappedType () ;
          GGS_unifiedTypeMapEntry var_sourceUnwrappedType_7327 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 168)).readProperty_unwrappedType () ;
          var_handled_5067 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetUnwrappedType_7269, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)).objectCompare (extensionGetter_typeName (var_sourceUnwrappedType_7327, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)))) ;
        }
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_handled_5067.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 172)).boolEnum () ;
    if (kBoolTrue == test_16) {
      test_16 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 172)).boolEnum () ;
      if (kBoolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)).readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          var_handled_5067 = GGS_bool (true) ;
        }
      }
    }
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = var_handled_5067.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GGS_unifiedTypeMapEntry var_sourceType_7710 = constinArgument_inSourceType ;
      GGS_bool var_ok_7744 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 180)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 180)))) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).isValid ()) {
        uint32_t variant_7804 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).uintValue () ;
        bool loop_7804 = true ;
        while (loop_7804) {
          loop_7804 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_and (extensionGetter_definition (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).isValid () ;
          if (loop_7804) {
            loop_7804 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_and (extensionGetter_definition (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).boolValue () ;
          }
          if (loop_7804 && (0 == variant_7804)) {
            loop_7804 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)) ;
          }
          if (loop_7804) {
            variant_7804 -- ;
            var_sourceType_7710 = extensionGetter_definition (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).readProperty_superType () ;
            var_ok_7744 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_7710)) ;
          }
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GGS_typeKindEnum_2E_weakReferenceType var_targetWeakRef_8008 = var_targetTypeDef_4839.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).unwrappedValue () ;
          if (!var_targetTypeDef_4839.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)).isValuated ()) {
            test_18 = kBoolFalse ;
          }
          if (kBoolTrue == test_18) {
            var_sourceType_7710 = constinArgument_inSourceType ;
            var_ok_7744 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8008.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 187)).objectCompare (extensionGetter_typeName (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 187)))) ;
            if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).isValid ()) {
              uint32_t variant_8188 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).uintValue () ;
              bool loop_8188 = true ;
              while (loop_8188) {
                loop_8188 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_and (extensionGetter_definition (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).isValid () ;
                if (loop_8188) {
                  loop_8188 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_and (extensionGetter_definition (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)).boolValue () ;
                }
                if (loop_8188 && (0 == variant_8188)) {
                  loop_8188 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 188)) ;
                }
                if (loop_8188) {
                  variant_8188 -- ;
                  var_sourceType_7710 = extensionGetter_definition (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).readProperty_superType () ;
                  var_ok_7744 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8008.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)).objectCompare (extensionGetter_typeName (var_sourceType_7710, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)))) ;
                }
              }
            }
          }
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).boolEnum () ;
        if (kBoolTrue == test_19) {
          const GGS_propertyMap_2E_element var_prop_8512 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4839.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4839.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_19 = kBoolFalse ;
          }
          if (kBoolTrue == test_19) {
            extensionMethod_checkSetAccess (var_prop_8512.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8672 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_8512.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_4839.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8672 ;
            var_ok_7744 = GGS_bool (ComparisonKind::equal, var_prop_8512.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (kBoolFalse == test_19) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          GGS_bool test_21 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)) ;
          if (kBoolTrue == test_21.boolEnum ()) {
            test_21 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)).readProperty_getterMap ().getter_hasKey (var_targetTypeDef_4839.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 204)) ;
          }
          test_20 = test_21.boolEnum () ;
          if (kBoolTrue == test_20) {
            GGS_methodKind var_kind_9147 ;
            GGS_functionSignature var_argumentTypeList_9184 ;
            GGS_bool var_hasCompilerArgument_9225 ;
            GGS_unifiedTypeMapEntry var_returnedType_9258 ;
            GGS_location joker_9209 ; // Joker input parameter
            GGS_methodQualifier joker_9279_2 ; // Joker input parameter
            GGS_string joker_9279_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_4839.readProperty_typeName (), var_kind_9147, var_argumentTypeList_9184, joker_9209, var_hasCompilerArgument_9225, var_returnedType_9258, joker_9279_2, joker_9279_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)) ;
            var_ok_7744 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_9184.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_9258.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_9411 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_9147, ioArgument_ioExpression, GGS_stringlist::init (inCompiler COMMA_HERE), var_targetTypeDef_4839.readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_9225, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_9411 ;
          }
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = var_ok_7744.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 228)).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is '@").add_operation (var_targetTypeDef_4839.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)).add_operation (GGS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 231)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 231)).add_operation (GGS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 231)).add_operation (var_targetTypeDef_4839.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 232)).add_operation (GGS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 233)).add_operation (var_targetTypeDef_4839.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 234)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 235)), fixItArray23  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 229)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const GGS_bool constinArgument_inOperandIsHandled,
                                                                       const GGS_string constinArgument_inOperatorNameForErrorMessage,
                                                                       const GGS_location constinArgument_inErrorLocation,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioLeftExpression,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftResultType_10579 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10632 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 249)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 252)).add_operation (extensionGetter_definition (var_rightResultType_10632, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 253)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 250)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_11019 = var_rightResultType_10632 ;
    GGS_bool var_ok_11061 = GGS_bool (ComparisonKind::equal, var_leftResultType_10579.objectCompare (var_rightType_11019)) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).isValid ()) {
      uint32_t variant_11098 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).uintValue () ;
      bool loop_11098 = true ;
      while (loop_11098) {
        loop_11098 = var_ok_11061.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_and (extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).isValid () ;
        if (loop_11098) {
          loop_11098 = var_ok_11061.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_and (extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).boolValue () ;
        }
        if (loop_11098 && (0 == variant_11098)) {
          loop_11098 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)) ;
        }
        if (loop_11098) {
          variant_11098 -- ;
          var_rightType_11019 = extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 258)).readProperty_superType () ;
          var_ok_11061 = GGS_bool (ComparisonKind::equal, var_leftResultType_10579.objectCompare (var_rightType_11019)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_ok_11061.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 262)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_11331 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_11331.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 263)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GGS_bigint var_bigIntValue_11483 = var_bigIntSource_11331.readProperty_mValue () ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11483.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11483.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 265)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11483.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10579, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11483.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 268)), inCompiler COMMA_HERE) ;
              var_ok_11061 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 270)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_6) {
                GGS_bigint var_bigIntValue_11926 = var_bigIntSource_11331.readProperty_mValue () ;
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11926.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11926.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 272)).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11926.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10579, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11926.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 275)), inCompiler COMMA_HERE) ;
                var_ok_11061 = GGS_bool (true) ;
              }
            }
            if (kBoolFalse == test_6) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 277)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GGS_bigint var_bigIntValue_12380 = var_bigIntSource_11331.readProperty_mValue () ;
                  enumGalgasBool test_10 = kBoolTrue ;
                  if (kBoolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12380.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 279)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12380.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 279)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 279)).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      TC_Array <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12380.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10579, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12380.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 282)), inCompiler COMMA_HERE) ;
                  var_ok_11061 = GGS_bool (true) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 284)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    GGS_bigint var_bigIntValue_12831 = var_bigIntSource_11331.readProperty_mValue () ;
                    enumGalgasBool test_13 = kBoolTrue ;
                    if (kBoolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12831.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 286)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12831.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 286)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 286)).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        TC_Array <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12831.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 287)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10579, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12831.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 289)), inCompiler COMMA_HERE) ;
                    var_ok_11061 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_ok_11061.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 294)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_13280 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_13280.ptr ()) {
          test_15 = kBoolFalse ;
        }
        if (kBoolTrue == test_15) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 295)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_16) {
              GGS_bigint var_bigIntValue_13426 = var_bigIntSource_13280.readProperty_mValue () ;
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13426.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13426.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 297)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  TC_Array <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13426.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_11019, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13426.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)), inCompiler COMMA_HERE) ;
              var_ok_11061 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 302)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                GGS_bigint var_bigIntValue_13856 = var_bigIntSource_13280.readProperty_mValue () ;
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13856.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 304)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13856.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 304)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 304)).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    TC_Array <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13856.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 305)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_11019, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13856.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 307)), inCompiler COMMA_HERE) ;
                var_ok_11061 = GGS_bool (true) ;
              }
            }
            if (kBoolFalse == test_19) {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 309)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_22) {
                  GGS_bigint var_bigIntValue_14297 = var_bigIntSource_13280.readProperty_mValue () ;
                  enumGalgasBool test_23 = kBoolTrue ;
                  if (kBoolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14297.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 311)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14297.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 311)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 311)).boolEnum () ;
                    if (kBoolTrue == test_23) {
                      TC_Array <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14297.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 312)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11019, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14297.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 314)), inCompiler COMMA_HERE) ;
                  var_ok_11061 = GGS_bool (true) ;
                }
              }
              if (kBoolFalse == test_22) {
                enumGalgasBool test_25 = kBoolTrue ;
                if (kBoolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 316)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14735 = var_bigIntSource_13280.readProperty_mValue () ;
                    enumGalgasBool test_26 = kBoolTrue ;
                    if (kBoolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14735.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 318)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14735.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 318)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 318)).boolEnum () ;
                      if (kBoolTrue == test_26) {
                        TC_Array <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14735.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 319)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11019, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14735.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 321)), inCompiler COMMA_HERE) ;
                    var_ok_11061 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_ok_11061.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).boolEnum () ;
      if (kBoolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_15215 = extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = kBoolFalse ;
        }
        if (kBoolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_15215.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_15379 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_15215.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 332)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15379 ;
          var_ok_11061 = GGS_bool (ComparisonKind::equal, var_prop_15215.readProperty_mPropertyType ().objectCompare (var_leftResultType_10579)) ;
        }
      }
    }
    if (kBoolFalse == test_28) {
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        GGS_bool test_30 = var_ok_11061.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)) ;
        if (kBoolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)).readProperty_getterMap ().getter_hasKey (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 336)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (kBoolTrue == test_29) {
          GGS_methodKind var_kind_15902 ;
          GGS_functionSignature var_argumentTypeList_15939 ;
          GGS_bool var_hasCompilerArgument_15980 ;
          GGS_unifiedTypeMapEntry var_returnedType_16013 ;
          GGS_location joker_15964 ; // Joker input parameter
          GGS_methodQualifier joker_16034_2 ; // Joker input parameter
          GGS_string joker_16034_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 337)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 338)).readProperty_typeName (), var_kind_15902, var_argumentTypeList_15939, joker_15964, var_hasCompilerArgument_15980, var_returnedType_16013, joker_16034_2, joker_16034_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 337)) ;
          var_ok_11061 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_15939.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 346)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_16013.objectCompare (var_leftResultType_10579)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 346)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_16168 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10579, constinArgument_inErrorLocation, var_kind_15902, ioArgument_ioRightExpression, GGS_stringlist::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 354)).readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_15980, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_16168 ;
        }
      }
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_ok_11061.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 360)).boolEnum () ;
      if (kBoolTrue == test_31) {
        TC_Array <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 362)).add_operation (extensionGetter_definition (var_rightType_11019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 363)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 363)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 363)).add_operation (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)).add_operation (GGS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).add_operation (extensionGetter_definition (var_leftResultType_10579, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 365)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 361)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 172)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 180)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_7216 ;
  {
  const GGS_assignmentInstructionAST temp_0 = this ;
  GGS_string joker_7233 ; // Joker input parameter
  GGS_string joker_7240 ; // Joker input parameter
  extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_0.readProperty_mTargetVariableName (), var_receiverType_7216, joker_7233, joker_7240, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 196)) ;
  }
  GGS_unifiedTypeMapEntry var_targetType_7253 = var_receiverType_7216 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_assignmentInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_propertyMap var_propertyMap_7333 = extensionGetter_definition (var_targetType_7253, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 204)).readProperty_propertyMap () ;
      GGS_AccessControl var_accessControl_7439 ;
      GGS_bool var_isConstant_7458 ;
      const GGS_assignmentInstructionAST temp_3 = this ;
      var_propertyMap_7333.method_searchKey (temp_3.readProperty_mOptionalProperty (), var_accessControl_7439, var_isConstant_7458, var_targetType_7253, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 205)) ;
      const GGS_assignmentInstructionAST temp_4 = this ;
      extensionMethod_checkSetAccess (var_accessControl_7439, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_4.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 206)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_7458.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GGS_assignmentInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 208)) ;
        }
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expression_7993 ;
  const GGS_assignmentInstructionAST temp_8 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_8.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_7253, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7993, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 212)) ;
  {
  const GGS_assignmentInstructionAST temp_9 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_7253, var_expression_7993.readProperty_mResultType (), temp_9.readProperty_mInstructionLocation (), var_expression_7993, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 222)) ;
  }
  GGS_string var_targetVariableCppName_8230 ;
  GGS_string var_nameForCheckingFormalParameterUsing_8266 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GGS_assignmentInstructionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      const GGS_assignmentInstructionAST temp_12 = this ;
      GGS_unifiedTypeMapEntry joker_8428 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_12.readProperty_mTargetVariableName (), joker_8428, var_targetVariableCppName_8230, var_nameForCheckingFormalParameterUsing_8266, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 232)) ;
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GGS_assignmentInstructionAST temp_13 = this ;
    GGS_unifiedTypeMapEntry joker_8600 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mTargetVariableName (), joker_8600, var_targetVariableCppName_8230, var_nameForCheckingFormalParameterUsing_8266, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 239)) ;
    }
  }
  const GGS_assignmentInstructionAST temp_14 = this ;
  const GGS_assignmentInstructionAST temp_15 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_receiverType_7216, var_targetType_7253, var_targetVariableCppName_8230, var_nameForCheckingFormalParameterUsing_8266, temp_14.readProperty_mOptionalProperty ().readProperty_string (), var_expression_7993, temp_15.readProperty_mTargetVariableName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 247)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_9576 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 267)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 267)).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_propertiesAreMutable (var_selfAvailable_9576.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GGS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
        }
      }
      GGS_propertyMap var_propertyMap_9817 = extensionGetter_definition (var_selfAvailable_9576.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)).readProperty_propertyMap () ;
      GGS_bool var_isConstant_9940 ;
      GGS_unifiedTypeMapEntry var_targetType_9956 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GGS_AccessControl joker_9932 ; // Joker input parameter
      var_propertyMap_9817.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_9932, var_isConstant_9940, var_targetType_9956, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_9940.operator_and (var_selfAvailable_9576.readProperty_selfMutability ().getter_isInitializer (SOURCE_FILE ("instruction-assignment.galgas", 273)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 273)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GGS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 274)) ;
        }
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GGS_string var_targetVariableCppName_10142 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 277)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GGS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GGS_propertyMap var_propertyMap_10400 = extensionGetter_definition (var_targetType_9956, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)).readProperty_propertyMap () ;
          GGS_AccessControl var_accessControl_10508 ;
          GGS_bool var_isConstant_10527 ;
          const GGS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_10400.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_accessControl_10508, var_isConstant_10527, var_targetType_9956, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
          const GGS_selfPropertyAssignmentInstructionAST temp_12 = this ;
          extensionMethod_checkSetAccess (var_accessControl_10508, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_12.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_isConstant_10527.boolEnum () ;
            if (kBoolTrue == test_13) {
              const GGS_selfPropertyAssignmentInstructionAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 284)) ;
            }
          }
        }
      }
      GGS_semanticExpressionForGeneration var_expression_11099 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_16.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9956, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11099, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 288)) ;
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      GGS_unifiedTypeMapEntry joker_11251_3 ; // Joker input parameter
      GGS_string joker_11251_2 ; // Joker input parameter
      GGS_string joker_11251_1 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_17.readProperty_mTargetSelfPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 299)), temp_18.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_11251_3, joker_11251_2, joker_11251_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 298)) ;
      }
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_9956, var_expression_11099.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_11099, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 302)) ;
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_20 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_21 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_9576.readProperty_type (), var_targetType_9956, var_targetVariableCppName_10142, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_11099, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 304)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_selfPropertyAssignmentInstructionAST temp_22 = this ;
    TC_Array <FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 314)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_13130 ;
  const GGS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13130, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 338)) ;
  {
  const GGS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 345)) ;
  }
  const GGS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 347)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mOptionalProperty ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)).add_operation (var_sourceVar_13130, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GGS_assignmentInstructionForGeneration temp_7 = this ;
      test_6 = extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 350)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-assignment.galgas", 350)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GGS_bool var_isReference_13567 ;
        const GGS_assignmentInstructionForGeneration temp_8 = this ;
        extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 351)).readProperty_typeKind ().method_extractClassType (var_isReference_13567, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 351)) ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_13567.boolEnum () ;
          if (kBoolTrue == test_9) {
            const GGS_assignmentInstructionForGeneration temp_10 = this ;
            ioArgument_ioGeneratedCode.plusAssign_operation(temp_10.readProperty_mTargetCppName ().add_operation (GGS_string (".setProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)) ;
            const GGS_assignmentInstructionForGeneration temp_11 = this ;
            ioArgument_ioGeneratedCode.plusAssign_operation(temp_11.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)) ;
            ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" (").add_operation (var_sourceVar_13130, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)) ;
          }
        }
        if (kBoolFalse == test_9) {
          const GGS_assignmentInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_12.readProperty_mTargetCppName ().add_operation (GGS_string (".setter_setProperty_5F_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
          const GGS_assignmentInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 358)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" (").add_operation (var_sourceVar_13130, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)).add_operation (GGS_string (" COMMA_HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_6) {
      const GGS_assignmentInstructionForGeneration temp_14 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_14.readProperty_mTargetCppName ().add_operation (GGS_string (".mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)) ;
      const GGS_assignmentInstructionForGeneration temp_15 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" = ").add_operation (var_sourceVar_13130, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 365)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 365)) ;
    }
  }
  {
  const GGS_assignmentInstructionForGeneration temp_16 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_16.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 367)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 139)) ;
  const GGS_structuredCastInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 140)) ;
  const GGS_structuredCastInstructionAST temp_2 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_5742 (temp_2.readProperty_mCastInstructionBranchList (), EnumerationOrder::up) ;
  while (enumerator_5742.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5742.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 142)) ;
    enumerator_5742.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_castExpression_6724 ;
  const GGS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-cast.galgas", 161)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_castExpression_6724, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
  }
  GGS_castInstructionBranchListForGeneration var_castBranchList_6864 = GGS_castInstructionBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_structuredCastInstructionAST temp_1 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_6995 (temp_1.readProperty_mCastInstructionBranchList (), EnumerationOrder::up) ;
  while (enumerator_6995.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_7083 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6995.current_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    GGS_unifiedTypeMapEntry var_t_7219 = var_type_7083 ;
    GGS_bool var_found_7242 = GGS_bool (ComparisonKind::equal, var_t_7219.objectCompare (var_castExpression_6724.readProperty_mResultType ())) ;
    if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 177)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 177)).isValid ()) {
      uint32_t variant_7286 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 177)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 177)).uintValue () ;
      bool loop_7286 = true ;
      while (loop_7286) {
        loop_7286 = var_found_7242.operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_and (extensionGetter_definition (var_t_7219, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).isValid () ;
        if (loop_7286) {
          loop_7286 = var_found_7242.operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_and (extensionGetter_definition (var_t_7219, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 178)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 178)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).boolValue () ;
        }
        if (loop_7286 && (0 == variant_7286)) {
          loop_7286 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 177)) ;
        }
        if (loop_7286) {
          variant_7286 -- ;
          var_t_7219 = extensionGetter_definition (var_t_7219, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 179)).readProperty_superType () ;
          var_found_7242 = GGS_bool (ComparisonKind::equal, var_t_7219.objectCompare (var_castExpression_6724.readProperty_mResultType ())) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_7242.operator_not (SOURCE_FILE ("instruction-cast.galgas", 182)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6995.current_mTypeName (HERE).readProperty_location (), GGS_string ("the '@").add_operation (enumerator_6995.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).add_operation (extensionGetter_definition (var_castExpression_6724.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 183)) ;
      }
    }
    GGS_string var_localConstantName_7727 ;
    GGS_localConstantList var_localConstantList_7753 = GGS_localConstantList::init (inCompiler COMMA_HERE) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_6995.current_mConstantVarName (HERE).readProperty_string ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 189)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_7727 = GGS_string ("cast_").add_operation (enumerator_6995.current_mConstantVarName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)).add_operation (enumerator_6995.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 190)) ;
        var_localConstantList_7753.addAssign_operation (var_type_7083, enumerator_6995.current_mConstantVarName (HERE), GGS_bool (true), var_localConstantName_7727  COMMA_SOURCE_FILE ("instruction-cast.galgas", 191)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_7727 = GGS_string::makeEmptyString () ;
    }
    GGS_semanticInstructionListForGeneration var_instructionList_8551 ;
    {
    routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_7753, GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), enumerator_6995.current_mInstructionList (HERE), enumerator_6995.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_8551, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 200)) ;
    }
    var_castBranchList_6864.addAssign_operation (enumerator_6995.current_mTypeComparisonKind (HERE), var_type_7083, var_localConstantName_7727, var_instructionList_8551  COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
    enumerator_6995.gotoNextObject () ;
  }
  GGS_semanticInstructionListForGeneration var_else_5F_instructionList_9059 ;
  {
  const GGS_structuredCastInstructionAST temp_5 = this ;
  const GGS_structuredCastInstructionAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_9059, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 216)) ;
  }
  {
  const GGS_structuredCastInstructionAST temp_7 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 230)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_structuredCastInstructionForGeneration::init_21__21__21_ (var_castExpression_6724, var_castBranchList_6864, var_else_5F_instructionList_9059, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-cast.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_castCppVarName_10920 ;
  const GGS_structuredCastInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_10920, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 268)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (").add_operation (var_castCppVarName_10920, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)) ;
  }
  const GGS_structuredCastInstructionForGeneration temp_1 = this ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_11101 (temp_1.readProperty_mCastBranchList (), EnumerationOrder::up) ;
  while (enumerator_11101.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11101.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 279)) ;
    switch (enumerator_11101.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GGS_dynamicTypeComparisonKind::Enumeration::invalid:
      break ;
    case GGS_dynamicTypeComparisonKind::Enumeration::enum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (").add_operation (var_castCppVarName_10920, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GGS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (extensionGetter_identifierRepresentation (enumerator_11101.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)) ;
      }
      break ;
    case GGS_dynamicTypeComparisonKind::Enumeration::enum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (extensionGetter_identifierRepresentation (enumerator_11101.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 286)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 287)).add_operation (var_castCppVarName_10920, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 286)) ;
      }
      break ;
    case GGS_dynamicTypeComparisonKind::Enumeration::enum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("if ((").add_operation (var_castCppVarName_10920, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)).add_operation (GGS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)).add_operation (extensionGetter_identifierRepresentation (enumerator_11101.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 291)).add_operation (GGS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)).add_operation (extensionGetter_identifierRepresentation (enumerator_11101.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)).add_operation (var_castCppVarName_10920, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 294)).add_operation (GGS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 290)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_11101.current_mCastedVarCppName (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 296)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11101.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)).add_operation (enumerator_11101.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (extensionGetter_identifierRepresentation (enumerator_11101.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (var_castCppVarName_10920, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)).add_operation (GGS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)) ;
      }
    }
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11101.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 302)) ;
    }
    if (enumerator_11101.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
    }
    enumerator_11101.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_structuredCastInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 313)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 314)) ;
      {
      const GGS_structuredCastInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 315)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 325)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 326)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 327)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opAssignExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_opAssignExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 397)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opAssignExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_14695 ;
  GGS_string var_targetVariableCppName_14722 ;
  GGS_string var_nameForCheckingFormalParameterUsing_14760 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_opAssignExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_14842 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 414)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 414)).isValuated ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = extensionGetter_propertiesAreMutable (var_selfAvailable_14842.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 415)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 415)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GGS_opAssignExpressionInstructionAST temp_4 = this ;
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GGS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 416)) ;
            }
          }
          GGS_propertyMap var_propertyMap_15253 = extensionGetter_definition (var_selfAvailable_14842.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 421)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_15370 ;
          const GGS_opAssignExpressionInstructionAST temp_6 = this ;
          GGS_AccessControl joker_15362 ; // Joker input parameter
          var_propertyMap_15253.method_searchKey (temp_6.readProperty_mReceiverName (), joker_15362, var_isConstant_15370, var_targetType_14695, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 422)) ;
          var_nameForCheckingFormalParameterUsing_14760 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_opAssignExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_14722 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 424)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 425)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_15370.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GGS_opAssignExpressionInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 427)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfAvailable_14842.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 429)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 429)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GGS_opAssignExpressionInstructionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 430)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GGS_opAssignExpressionInstructionAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)) ;
        var_targetType_14695.drop () ; // Release error dropped variable
        var_targetVariableCppName_14722.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14760.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GGS_opAssignExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_14695, var_targetVariableCppName_14722, var_nameForCheckingFormalParameterUsing_14760, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 437)) ;
    }
  }
  const GGS_opAssignExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_16347 (temp_17.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_16347.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_16396 = extensionGetter_definition (var_targetType_14695, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 446)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_16487 ;
    GGS_bool var_isConstant_16506 ;
    var_propertyMap_16396.method_searchKey (enumerator_16347.current_mValue (HERE), var_accessControl_16487, var_isConstant_16506, var_targetType_14695, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 447)) ;
    extensionMethod_checkSetAccess (var_accessControl_16487, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_16347.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 448)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_16506.boolEnum () ;
      if (kBoolTrue == test_18) {
        const GGS_opAssignExpressionInstructionAST temp_19 = this ;
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas", 450)) ;
      }
    }
    enumerator_16347.gotoNextObject () ;
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GGS_opAssignExpressionInstructionAST temp_22 = this ;
    test_21 = extensionGetter_definition (var_targetType_14695, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)).readProperty_features ().getter_contains (extensionGetter_features (temp_22.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 454)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GGS_opAssignExpressionInstructionAST temp_23 = this ;
      const GGS_opAssignExpressionInstructionAST temp_24 = this ;
      TC_Array <FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_14695, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 456)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 456)).add_operation (GGS_string ("' type, but this type does not support the '"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 456)).add_operation (extensionGetter_string (temp_24.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)).add_operation (GGS_string ("' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 455)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_17420 ;
  const GGS_opAssignExpressionInstructionAST temp_26 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_14695, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17420, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 460)) ;
  {
  const GGS_opAssignExpressionInstructionAST temp_27 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_14695, var_expression_17420.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_17420, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 470)) ;
  }
  const GGS_opAssignExpressionInstructionAST temp_28 = this ;
  const GGS_opAssignExpressionInstructionAST temp_29 = this ;
  const GGS_opAssignExpressionInstructionAST temp_30 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetType_14695, var_targetVariableCppName_14722, var_nameForCheckingFormalParameterUsing_14760, temp_29.readProperty_mStructAttributeList (), var_expression_17420, extensionGetter_cppFunctionName (temp_30.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 479)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 498)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_19272 ;
  GGS_string var_targetVariableCppName_19299 ;
  GGS_string var_nameForCheckingFormalParameterUsing_19337 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_19419 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 515)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 515)).isValuated ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          GGS_propertyMap var_propertyMap_19502 = extensionGetter_definition (var_selfAvailable_19419.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 516)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_19619 ;
          const GGS_plusEqualElementsInstructionAST temp_3 = this ;
          GGS_AccessControl joker_19611 ; // Joker input parameter
          var_propertyMap_19502.method_searchKey (temp_3.readProperty_mReceiverName (), joker_19611, var_isConstant_19619, var_targetType_19272, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 517)) ;
          var_nameForCheckingFormalParameterUsing_19337 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_plusEqualElementsInstructionAST temp_4 = this ;
          var_targetVariableCppName_19299 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 519)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 520)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_isConstant_19619.boolEnum () ;
            if (kBoolTrue == test_5) {
              const GGS_plusEqualElementsInstructionAST temp_6 = this ;
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 522)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfAvailable_19419.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 524)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 524)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const GGS_plusEqualElementsInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 525)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GGS_plusEqualElementsInstructionAST temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 528)) ;
        var_targetType_19272.drop () ; // Release error dropped variable
        var_targetVariableCppName_19299.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_19337.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GGS_plusEqualElementsInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_19272, var_targetVariableCppName_19299, var_nameForCheckingFormalParameterUsing_19337, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 532)) ;
    }
  }
  const GGS_plusEqualElementsInstructionAST temp_14 = this ;
  cEnumerator_lstringlist enumerator_20599 (temp_14.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_20599.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_20648 = extensionGetter_definition (var_targetType_19272, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_20782 ;
    GGS_bool var_isConstant_20801 ;
    var_propertyMap_20648.method_searchKey (enumerator_20599.current_mValue (HERE), var_accessControl_20782, var_isConstant_20801, var_targetType_19272, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 543)) ;
    extensionMethod_checkSetAccess (var_accessControl_20782, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_20599.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)) ;
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_isConstant_20801.boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_20599.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 556)) ;
      }
    }
    enumerator_20599.gotoNextObject () ;
  }
  GGS_functionSignature var_addAssignOperatorArguments_21465 = extensionGetter_definition (var_targetType_19272, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)).readProperty_addAssignOperatorArguments () ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_21465.getter_count (SOURCE_FILE ("instruction-concat.galgas", 561)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      const GGS_plusEqualElementsInstructionAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_19272, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 562)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GGS_plusEqualElementsInstructionAST temp_21 = this ;
      test_20 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 565)).objectCompare (var_addAssignOperatorArguments_21465.getter_count (SOURCE_FILE ("instruction-concat.galgas", 565)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GGS_plusEqualElementsInstructionAST temp_22 = this ;
        const GGS_plusEqualElementsInstructionAST temp_23 = this ;
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_19272, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).add_operation (GGS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).add_operation (var_addAssignOperatorArguments_21465.getter_count (SOURCE_FILE ("instruction-concat.galgas", 568)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).add_operation (GGS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 568)).add_operation (temp_23.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 569)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 568)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 569)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 566)) ;
      }
    }
    if (kBoolFalse == test_20) {
      GGS_semanticExpressionListForGeneration var_effectiveParameterList_22296 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_plusEqualElementsInstructionAST temp_25 = this ;
      cEnumerator_actualOutputArgumentList enumerator_22363 (temp_25.readProperty_mExpressions (), EnumerationOrder::up) ;
      cEnumerator_functionSignature enumerator_22449 (var_addAssignOperatorArguments_21465, EnumerationOrder::up) ;
      while (enumerator_22363.hasCurrentObject () && enumerator_22449.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_22801 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_22363.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22449.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_22801, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 573)) ;
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::notEqual, enumerator_22449.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22363.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_26) {
            GGS_string temp_27 ;
            const enumGalgasBool test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_22449.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_28) {
              temp_27 = enumerator_22449.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)) ;
            }else if (kBoolFalse == test_28) {
              temp_27 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_22909 = GGS_string ("!").add_operation (temp_27, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)) ;
            TC_Array <FixItDescription> fixItArray29 ;
            appendFixItActions (fixItArray29, kFixItReplace, var_s_22909) ;
            inCompiler->emitSemanticError (enumerator_22363.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_22909, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_22449.current_mFormalArgumentType (HERE), var_expression_22801.readProperty_mResultType (), enumerator_22363.current_mEndOfExpressionLocation (HERE), var_expression_22801, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 588)) ;
        }
        var_effectiveParameterList_22296.addAssign_operation (var_expression_22801  COMMA_SOURCE_FILE ("instruction-concat.galgas", 589)) ;
        enumerator_22363.gotoNextObject () ;
        enumerator_22449.gotoNextObject () ;
      }
      const GGS_plusEqualElementsInstructionAST temp_30 = this ;
      const GGS_plusEqualElementsInstructionAST temp_31 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (var_targetVariableCppName_19299, var_targetType_19272, var_nameForCheckingFormalParameterUsing_19337, temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mStructAttributeList (), var_effectiveParameterList_22296, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 592)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualnstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusEqualnstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 627)) ;
  GGS_stringlist var_parameterList_24897 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_plusEqualnstructionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_24937 (temp_1.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_24937.hasCurrentObject ()) {
    GGS_string var_parameter_25159 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_24937.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_25159, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 630)) ;
    var_parameterList_24897.addAssign_operation (var_parameter_25159  COMMA_SOURCE_FILE ("instruction-concat.galgas", 637)) ;
    enumerator_24937.gotoNextObject () ;
  }
  {
  const GGS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 640)) ;
  }
  const GGS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 641)) ;
  const GGS_plusEqualnstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_25377 (temp_4.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_25377.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (".mProperty_").add_operation (enumerator_25377.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 643)) ;
    enumerator_25377.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 646)) ;
  {
  const GGS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 647)) ;
  }
  cEnumerator_stringlist enumerator_25669 (var_parameterList_24897, EnumerationOrder::up) ;
  while (enumerator_25669.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25669.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 649)) ;
    if (enumerator_25669.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 650)) ;
    }
    enumerator_25669.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 652)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 652)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 652)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 653)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 654)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 654)) ;
      }
    }
  }
  const GGS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 656)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 656)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 656)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opAssignInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_opAssignInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)) ;
  GGS_string var_sourceVar_27317 ;
  const GGS_opAssignInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_27317, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 683)) ;
  {
  const GGS_opAssignInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 690)) ;
  }
  const GGS_opAssignInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 691)) ;
  const GGS_opAssignInstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_27481 (temp_4.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_27481.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (".mProperty_").add_operation (enumerator_27481.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 693)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 693)) ;
    enumerator_27481.gotoNextObject () ;
  }
  const GGS_opAssignInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 695)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 695)).add_operation (var_sourceVar_27317, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 695)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 696)) ;
  const GGS_opAssignInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 697)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 697)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 698)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 698)) ;
  }
  {
  const GGS_opAssignInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 699)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dropInstructionAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4068 (temp_0.readProperty_mDropList (), EnumerationOrder::up) ;
  while (enumerator_4068.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_4068.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 95)) ;
    }
    enumerator_4068.gotoNextObject () ;
  }
}
