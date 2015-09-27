#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-15.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_gmp ("galgas_cli_options",
                                         "check_gmp",
                                         0,
                                         "check-gmp",
                                         "Run a GMP check") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_convertToGalgas_33_ ("galgas_cli_options",
                                         "convertToGalgas3",
                                         0,
                                         "convert-to-galgas-3",
                                         "Convert to GALGAS 3") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ("galgas_cli_options",
                                         "generateManyFiles",
                                         0,
                                         "generate-many-cpp-files",
                                         "Generate many C++ implementation files") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ("galgas_cli_options",
                                         "generateOneHeader",
                                         0,
                                         "generate-one-cpp-header",
                                         "Generate one C++ header file for all declarations") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles ("galgas_cli_options",
                                         "generateSharedMapAutomatonDotFiles",
                                         0,
                                         "generate-shared-map-automaton-dot-files",
                                         "Generate shared map automaton dot files") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ("galgas_cli_options",
                                         "outputHTMLTypeListFile",
                                         84,
                                         "output-html-type-dump-file",
                                         "Output a HTML file that contains all defined types") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ("galgas_cli_options",
                                         "outputHTMLgrammarFile",
                                         0,
                                         "output-html-grammar-file",
                                         "Output a HTML file for every grammar component") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ("galgas_cli_options",
                                         "printPredefinedLexicalActions",
                                         0,
                                         "print-predefined-lexical-actions",
                                         "Print the list of predefined lexical routines and functions") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ("galgas_cli_options",
                                         "cppCompile",
                                         0,
                                         "compile",
                                         "Perform C++ compilation on 'string' target",
                                         "") ;

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ("galgas_cli_options",
                                         "create_project",
                                         0,
                                         "create-project",
                                         "Create a new GALGAS Project",
                                         "") ;

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ("galgas_cli_options",
                                         "extractLIBPMOption",
                                         0,
                                         "extract-libpm",
                                         "Extract embedded LIBPM at given path",
                                         "") ;

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_generatePredefinedTypes ("galgas_cli_options",
                                         "generatePredefinedTypes",
                                         0,
                                         "generate-predefined-types",
                                         "Generate C++ files of predefined types (reserved for GALGAS development)",
                                         "") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'projectCreationFileWrapper'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_project'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "project (0:0:1) -> " ;
  result << in_PROJECT_5F_NAME.reader_utf_38_Representation (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue () ;
  result << " {\n"
    "#--- Targets\n"
    "  %makefile-macosx\n"
    "  %makefile-unix\n"
    "  %makefile-x86linux32-on-macosx\n"
    "  %makefile-x86linux64-on-macosx\n"
    "  %makefile-win32-on-macosx\n"
    "  %LatestMacOS\n"
    "  %applicationBundleBase : \"fr.what\"\n"
    "  %codeblocks-windows\n"
    "  %codeblocks-linux32\n"
    "  %codeblocks-linux64\n"
    "  %codeblocks-mac\n"
    "\n"
    "#--- Source files\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-lexique.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-options.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-semantics.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-syntax.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-grammar.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-cocoa.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-program.galgas\"\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (C_Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "gui cocoa {\n"
    "  with option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options\n"
    "\n"
    "  with lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "    fileExtension: \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "    title: \"Source\"\n"
    "    blockComment : \"#\"\n"
    "  }\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar \"LL1\" {\n"
    "  syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax\n"
    "  <start_symbol>\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "#   Identifiers and keywords                                                                                           *\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@string tokenString\n"
    "\n"
    "style keywordsStyle -> \"Keywords\"\n"
    "\n"
    "$identifier$ ! tokenString error message \"an identifier\"\n"
    "\n"
    "#--- This is the keyword list\n"
    "list keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n"
    "  \"begin\",\n"
    "  \"end\"\n"
    "}\n"
    "\n"
    "rule 'a'->'z' |  'A'->'Z' {\n"
    "  repeat\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n"
    "  end\n"
    "  send search tokenString in keyWordList default $identifier$\n"
    "}\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "#   Literal decimal integers                                                                                           *\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "style integerStyle -> \"Integer Constants\"\n"
    "@uint uint32value\n"
    "$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n"
    "\n"
    "message decimalNumberTooLarge : \"decimal number too large\"\n"
    "message internalError : \"internal error\"\n"
    "\n"
    "rule '0'->'9' {\n"
    "  enterCharacterIntoString (!\?tokenString !*)\n"
    "  repeat\n"
    "  while '0'->'9' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while '_' :\n"
    "  end\n"
    "  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n"
    "  send $integer$\n"
    "}\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "#   Literal character strings                                                                                          *\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "style stringStyle -> \"String Constants\"\n"
    "$literal_string$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n"
    "\n"
    "\n"
    "message incorrectStringEnd : \"string does not end with '\\\"'\"\n"
    "\n"
    "rule '\"' {\n"
    "  repeat\n"
    "   while ' ' | '!' | '#'-> '\\uFFFD' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  end\n"
    "  select\n"
    "  case '\"' :\n"
    "    send $literal_string$\n"
    "  default\n"
    "    error incorrectStringEnd\n"
    "  end\n"
    "}\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "#   Delimiters                                                                                                         *\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "style delimitersStyle -> \"Delimiters\"\n"
    "list delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n"
    "  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n"
    "}\n"
    "\n"
    "rule list delimitorsList\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "#   Comments                                                                                                           *\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "style commentStyle -> \"Comments\"\n"
    "$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\n"
    "rule '#' {\n"
    "  repeat\n"
    "  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n"
    "  end\n"
    "  drop $comment$\n"
    "}\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "#   Separators                                                                                                         *\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "rule '\\u0001' -> ' ' {\n"
    "}\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_options'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options {\n"
    "\n"
    "# ADD YOUR CODE\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_program'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#--- Prologue routine\n"
    "before {\n"
    "}\n"
    "\n"
    "#--- 'when' clauses\n"
    "case . \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "message \"a source text file with the ." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << " extension\"\n"
    "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar\n"
    "\?sourceFilePath:@lstring inSourceFile {\n"
    "  grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar in inSourceFile\n"
    "}\n"
    "\n"
    "#--- Epilogue routine\n"
    "after {\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "# ADD YOUR CODE\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (C_Compiler * /* inCompiler */,
                                                                                const GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax (" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique) {\n"
    "\n"
    "rule <start_symbol> {\n"
    "  # ADD YOUR SYNTAX INSTRUCTIONS\n"
    "}\n"
    "\n"
    "# ADD OTHER RULES\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performProjectCreation'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performProjectCreation (const GALGAS_string constinArgument_inProjectPath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectName = constinArgument_inProjectPath.reader_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  var_galgas_5F_sources_5F_DIR.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 52))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 53))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 54))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 55))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)) ;
  inCompiler->printMessage (GALGAS_string ("*** DONE ***\n")  COMMA_SOURCE_FILE ("projectCreation.galgas", 61)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'projectCreation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_projectCreation (const GALGAS_string constinArgument_inProjectPath,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.reader_length (SOURCE_FILE ("projectCreation.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 69)).add_operation (GALGAS_string (" option) ***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 69))  COMMA_SOURCE_FILE ("projectCreation.galgas", 69)) ;
    GALGAS_string var_projectName = constinArgument_inProjectPath.reader_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 71)) ;
    GALGAS_bool var_ok = var_projectName.reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 72)).reader_isalpha (SOURCE_FILE ("projectCreation.galgas", 72)) ;
    GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 1U) ;
    if (var_projectName.reader_length (SOURCE_FILE ("projectCreation.galgas", 74)).isValid ()) {
      uint32_t variant_5601 = var_projectName.reader_length (SOURCE_FILE ("projectCreation.galgas", 74)).uintValue () ;
      bool loop_5601 = true ;
      while (loop_5601) {
        loop_5601 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (var_projectName.reader_length (SOURCE_FILE ("projectCreation.galgas", 75)))).operator_and (var_ok COMMA_SOURCE_FILE ("projectCreation.galgas", 75)).isValid () ;
        if (loop_5601) {
          loop_5601 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (var_projectName.reader_length (SOURCE_FILE ("projectCreation.galgas", 75)))).operator_and (var_ok COMMA_SOURCE_FILE ("projectCreation.galgas", 75)).boolValue () ;
        }
        if (loop_5601 && (0 == variant_5601)) {
          loop_5601 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 74)) ;
        }
        if (loop_5601) {
          variant_5601 -- ;
          GALGAS_char var_c = var_projectName.reader_characterAtIndex (var_idx, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 76)) ;
          var_ok = var_c.reader_isalnum (SOURCE_FILE ("projectCreation.galgas", 77)).operator_or (GALGAS_bool (kIsEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 77)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 78)) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_ok.operator_not (SOURCE_FILE ("projectCreation.galgas", 80)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 81)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 82))  COMMA_SOURCE_FILE ("projectCreation.galgas", 81)) ;
    }
    const enumGalgasBool test_2 = var_ok.boolEnum () ;
    if (kBoolTrue == test_2) {
      var_ok = constinArgument_inProjectPath.reader_directoryExists (SOURCE_FILE ("projectCreation.galgas", 86)).operator_not (SOURCE_FILE ("projectCreation.galgas", 86)) ;
      const enumGalgasBool test_3 = var_ok.operator_not (SOURCE_FILE ("projectCreation.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 88)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 88))  COMMA_SOURCE_FILE ("projectCreation.galgas", 88)) ;
      }
    }
    const enumGalgasBool test_4 = var_ok.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_performProjectCreation (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 92)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'enterTemplateString'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterTemplateString (GALGAS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateTypesForAST.galgas", 446)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_s.reader_length (SOURCE_FILE ("templateTypesForAST.galgas", 447)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s  COMMA_SOURCE_FILE ("templateTypesForAST.galgas", 448))  COMMA_SOURCE_FILE ("templateTypesForAST.galgas", 448)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'templateInstructionListAnalysis'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateInstructionListAnalysis (const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                              const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                              GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_53694 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_53694.hasCurrentObject ()) {
    callCategoryMethod_templateInstructionAnalysis ((const cPtr_templateInstructionAST *) enumerator_53694.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1151)) ;
    enumerator_53694.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'templateCodeGenerationForListInstruction'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateCodeGenerationForListInstruction (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_2619 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_2619.hasCurrentObject ()) {
    callCategoryMethod_templateCodeGeneration ((const cPtr_templateInstructionForGeneration *) enumerator_2619.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 35)) ;
    enumerator_2619.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'buildLexicalTypeMap'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_outLexicalTypeMap ; // Returned variable
  result_outLexicalTypeMap = GALGAS_lexicalTypeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 508)) ;
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 509))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 509)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 509)) ;
  }
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 510))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 510)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 510)) ;
  }
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 511))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 511)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 511)) ;
  }
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 512))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 512)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 512)) ;
  }
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 513))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 513)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 513)) ;
  }
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 514))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 514)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 514)) ;
  }
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 515))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 515)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 515)) ;
  }
  {
  result_outLexicalTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)) ;
  }
//---
  return result_outLexicalTypeMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (NULL,
                                                                 releaseOnceFunctionResult_buildLexicalTypeMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'buildLexicalAttributeMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalAttributeMap (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                       const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                       GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_21979 (constinArgument_inLexicalAttributeList, kEnumeration_up) ;
  while (enumerator_21979.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inLexicalTypeMap.reader_hasKey (enumerator_21979.current_mTypeName (HERE).reader_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 536)) COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 536)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lexicalTypeEnum var_lexicalType ;
      constinArgument_inLexicalTypeMap.method_searchKey (enumerator_21979.current_mTypeName (HERE), var_lexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 537)) ;
      {
      ioArgument_ioLexicalAttributeMap.modifier_insertKey (enumerator_21979.current_mName (HERE), var_lexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 538)) ;
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_m = GALGAS_string::makeEmptyString () ;
      var_m.dotAssign_operation (GALGAS_string ("the @").add_operation (enumerator_21979.current_mTypeName (HERE).reader_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 541)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 541))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 541)) ;
      GALGAS_bool var_firstLoop = GALGAS_bool (true) ;
      cEnumerator_lexicalTypeMap enumerator_22367 (constinArgument_inLexicalTypeMap, kEnumeration_up) ;
      while (enumerator_22367.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" @").add_operation (enumerator_22367.current_lkey (HERE).reader_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 544))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 544)) ;
        if (enumerator_22367.hasNextObject ()) {
          var_m.dotAssign_operation (GALGAS_string (",")  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 546)) ;
        }
        enumerator_22367.gotoNextObject () ;
      }
      GALGAS_location location_1 (enumerator_21979.current_mTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, var_m  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 548)) ;
    }
    enumerator_21979.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'buildTerminalMap'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTerminalMap (const GALGAS_galgas_33_LexiqueComponentListAST_2D_element constinArgument_inLexiqueComponentRoot,
                               GALGAS_terminalMap & outArgument_outTerminalMap,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTerminalMap.drop () ; // Release 'out' argument
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 559)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 560)) ;
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, constinArgument_inLexiqueComponentRoot.mAttribute_mLexicalAttributeList, var_lexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 561)) ;
  }
  outArgument_outTerminalMap = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 567)) ;
  cEnumerator_terminalDeclarationListAST enumerator_23176 (constinArgument_inLexiqueComponentRoot.reader_mTerminalDeclarationList (SOURCE_FILE ("lexiqueTypesForAST.galgas", 568)), kEnumeration_up) ;
  while (enumerator_23176.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexiqueTypesForAST.galgas", 569)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_23272 (enumerator_23176.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_23272.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_23272.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 572)) ;
      var_argumentTypeList.addAssign_operation (enumerator_23272.current_mFormalSelector (HERE), enumerator_23272.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 573)) ;
      enumerator_23272.gotoNextObject () ;
    }
    {
    outArgument_outTerminalMap.modifier_insertKey (enumerator_23176.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 575)) ;
    }
    enumerator_23176.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_23625 (constinArgument_inLexiqueComponentRoot.reader_mLexicalListDeclarationList (SOURCE_FILE ("lexiqueTypesForAST.galgas", 578)), kEnumeration_up) ;
  while (enumerator_23625.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexiqueTypesForAST.galgas", 579)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_23721 (enumerator_23625.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_23721.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_23721.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 582)) ;
      var_argumentTypeList.addAssign_operation (enumerator_23721.current_mFormalSelector (HERE), enumerator_23721.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 583)) ;
      enumerator_23721.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_23965 (enumerator_23625.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_23965.hasCurrentObject ()) {
      {
      outArgument_outTerminalMap.modifier_insertKey (enumerator_23965.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 586)) ;
      }
      enumerator_23965.gotoNextObject () ;
    }
    enumerator_23625.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalRoutineMap'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalRoutineMap (GALGAS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GALGAS_lexicalRoutineMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 36)) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 38)) ;
  GALGAS_stringlist var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 39)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 40)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 41)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 42)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 43)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 44)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 54)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 55)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 56)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 57)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), var_lexicalRoutineFormalArgumentList, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 70)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 67)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("resetString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), temp_0, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 82)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 95)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 96)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 97)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 105)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 106)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 107)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 108)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 116)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 117)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 118)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 119)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 127)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 128)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 129)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 130)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 131)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 139)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 140)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 141)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 142)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 143)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 151)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 152)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 153)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 154)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 155)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 156)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 164)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 165)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 166)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 167)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 168)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 169)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 178)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), var_lexicalRoutineFormalArgumentList, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 179)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), var_lexicalRoutineFormalArgumentList, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), var_lexicalRoutineFormalArgumentList, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), var_lexicalRoutineFormalArgumentList, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 218)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 218)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 220)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 221)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 223))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 223)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 222)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 229)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 230)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 231)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 231)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 232)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 232)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 232)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 233)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 234)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 242)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 243)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 244)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 246)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 247)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 255)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 256)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 257)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 257)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 257)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 258)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 258)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 260)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 262))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 262)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 261)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 268)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 269)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 269)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 269)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 270)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 270)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 270)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  temp_5.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 272))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 272)), var_lexicalRoutineFormalArgumentList, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 278)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 279)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 280)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 280)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 280)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 281)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 281)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 281)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 282)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 283)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 285))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 285)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 291)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 292)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 293)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 293)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 293)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 294)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 294)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 294)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 295)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 296)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 304)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 305)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 306)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 306)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 306)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 307)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 307)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 308)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 309)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 311))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 311)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 317)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 318)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 319)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 319)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 319)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 320)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 320)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 322)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 324))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 324)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 323)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 330)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 331)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 332)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 332)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 332)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 333)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 333)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 334)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 335)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 337))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 337)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 336)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 343)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 344)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 345)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 345)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 345)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 346)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 346)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 347)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 349))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 348)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 355)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 356)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 357)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 357)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 357)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 358)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 358)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 358)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 361))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 360)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 367)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 368)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 369)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 369)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 369)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 370)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 370)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 370)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 371)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 374))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 373)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 380)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 381)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 382)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 382)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 382)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 383)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 383)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 383)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 385)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 387))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 386)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 393)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 394)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 395)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 395)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 395)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 396)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 396)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 397)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 398)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 400))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 400)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 399)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 406)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 407)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 408)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 408)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 408)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 409)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 409)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 410)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 411)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 413))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 413)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 412)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 419)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 420)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 421)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 421)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 421)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 422)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 422)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 423)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 425))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 424)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 431)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 432)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 433)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 433)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 433)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 434)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 434)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 434)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 437))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 436)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 443)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 444)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 445)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 445)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 445)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 446)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 446)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 446)) ;
  {
  outArgument_outLexicalRoutineMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 448))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 448)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 447)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalFunctionMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalFunctionMap (GALGAS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)) ;
  var_lexicalTypeList.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 463)) ;
  {
  outArgument_outLexicalFunctionMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toLower"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465)), var_lexicalTypeList, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 467)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 464)) ;
  }
  var_lexicalTypeList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  var_lexicalTypeList.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 473)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 473)) ;
  {
  outArgument_outLexicalFunctionMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toUpper"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 475))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), var_lexicalTypeList, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 477)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 474)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'printPredefinedLexicalActions'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_printPredefinedLexicalActions (C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 490)) ;
  }
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  var_s.dotAssign_operation (GALGAS_string ("**************** Prefined lexical routines  ****************\n")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  cEnumerator_lexicalRoutineMap enumerator_23156 (var_lexicalRoutineMap, kEnumeration_up) ;
  while (enumerator_23156.hasCurrentObject ()) {
    var_s.dotAssign_operation (enumerator_23156.current_lkey (HERE).reader_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 495))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 495)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_23230 (enumerator_23156.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_23230.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_lexicalFormalModeName (enumerator_23230.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497)).add_operation (categoryReader_lexicalTypeBaseName (enumerator_23230.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497)).add_operation (enumerator_23230.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 497)) ;
      enumerator_23230.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_23430 (enumerator_23156.current_mErrorMessageList (HERE), kEnumeration_up) ;
    const bool bool_0 = true ;
    if (enumerator_23430.hasCurrentObject () && bool_0) {
      var_s.dotAssign_operation (GALGAS_string (" error")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 500)) ;
      while (enumerator_23430.hasCurrentObject () && bool_0) {
        var_s.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_23430.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 501))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 501)) ;
        enumerator_23430.gotoNextObject () ;
        if (enumerator_23430.hasCurrentObject () && bool_0) {
          var_s.dotAssign_operation (GALGAS_string (",")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 502)) ;
        }
      }
    }
    var_s.dotAssign_operation (GALGAS_string (" ;\n"
      "\n")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504)) ;
    enumerator_23156.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 508)) ;
  }
  var_s.dotAssign_operation (GALGAS_string ("**************** Prefined lexical functions ****************\n")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 510)) ;
  cEnumerator_lexicalFunctionMap enumerator_23862 (var_lexicalFunctionMap, kEnumeration_up) ;
  while (enumerator_23862.hasCurrentObject ()) {
    var_s.dotAssign_operation (enumerator_23862.current_lkey (HERE).reader_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 512))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 512)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_23919 (enumerator_23862.current_mLexicalTypeList (HERE), kEnumeration_up) ;
    while (enumerator_23919.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string (" \?@").add_operation (categoryReader_lexicalTypeBaseName (enumerator_23919.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 514)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 514)).add_operation (enumerator_23919.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 514))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 514)) ;
      enumerator_23919.gotoNextObject () ;
    }
    var_s.dotAssign_operation (GALGAS_string (" -> @").add_operation (categoryReader_lexicalTypeBaseName (enumerator_23862.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 516)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 516))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 516)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_23862.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_s.dotAssign_operation (GALGAS_string ("Note: the '").add_operation (enumerator_23862.current_lkey (HERE).reader_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518)).add_operation (enumerator_23862.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518)) ;
    }
    var_s.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 520)) ;
    enumerator_23862.gotoNextObject () ;
  }
  var_s.dotAssign_operation (GALGAS_string ("************************************************************\n")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 523)) ;
  inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 524)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'lexiqueGenerationTemplates'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#ifndef " ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "_CLASS_DEFINED\n"
    "#define " ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "_CLASS_DEFINED\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/C_Lexique.h\"\n"
    "#include \"galgas2/predefined-types.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                    E X T E R N    R O U T I N E S                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_955_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 16)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_955 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 16)), kEnumeration_up) ;
    while (enumerator_955.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_955.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_routine_" ;
        result << enumerator_955.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 18)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_1101_ (0) ;
        if (enumerator_955.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_1101 (enumerator_955.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
          while (enumerator_1101.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result << categoryReader_cppConstInFormalArgument (enumerator_1101.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 20)).stringValue () ;
            result << categoryReader_cppTypeName (enumerator_1101.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 21)).stringValue () ;
            result << categoryReader_cppReferenceInFormalArgument (enumerator_1101.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 22)).stringValue () ;
            result << " " ;
            result << enumerator_1101.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1101_.increment () ;
            enumerator_1101.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1448_ (0) ;
        if (enumerator_955.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1448 (enumerator_955.current_mErrorMessageList (HERE), kEnumeration_up) ;
          while (enumerator_1448.hasCurrentObject ()) {
            result << ",\n"
              "                const char * " ;
            result << enumerator_1448.current_mValue (HERE).stringValue () ;
            index_1448_.increment () ;
            enumerator_1448.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_955_.increment () ;
      enumerator_955.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                    E X T E R N    F U N C T I O N S                                                                 *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_2207_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 38)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_2207 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 38)), kEnumeration_up) ;
    while (enumerator_2207.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_2207.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << categoryReader_cppTypeName (enumerator_2207.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 40)).stringValue () ;
        result << " scanner_function_" ;
        result << enumerator_2207.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 40)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_2370_ (0) ;
        if (enumerator_2207.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_2370 (enumerator_2207.current_mLexicalTypeList (HERE), kEnumeration_up) ;
          while (enumerator_2370.hasCurrentObject ()) {
            result << ",\n"
              "                const " ;
            result << categoryReader_cppTypeName (enumerator_2370.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 42)).stringValue () ;
            result << " " ;
            result << enumerator_2370.current_mArgumentNameForComment (HERE).stringValue () ;
            index_2370_.increment () ;
            enumerator_2370.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_2207_.increment () ;
      enumerator_2207.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                       T O K E N    C L A S S                                                                        *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public cToken {\n" ;
  GALGAS_uint index_3227_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 56)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3227 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 56)), kEnumeration_up) ;
    while (enumerator_3227.hasCurrentObject ()) {
      result << "  public : " ;
      result << categoryReader_cppTypeName (enumerator_3227.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 57)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3227.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 57)).stringValue () ;
      result << " ;\n" ;
      index_3227_.increment () ;
      enumerator_3227.gotoNextObject () ;
    }
  }
  result << "\n"
    "  public : cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                     S C A N N E R    C L A S S                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_Lexique {\n"
    "//--- Constructors\n"
    "  public : C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inDependencyFileExtension,\n"
    "                       const C_String & inDependencyFilePath,\n"
    "                       const C_String & inSourceFileName\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public : C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceString,\n"
    "                       const C_String & inStringForError\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Instrospection\n"
    "  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
    "//    an error if a direct delete is performed; only the static method\n"
    "//    C_SharedObject::detachPointer may invoke delete.\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    protected : virtual ~ C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {}\n"
    "  #endif\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 91)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n"
      "//--- Scanner mode for template scanner\n"
      "  private : int32_t mMatchedTemplateDelimiterIndex ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//--- Terminal symbols enumeration\n"
    "  public : enum {kToken_" ;
  GALGAS_uint index_118_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)).isValid ()) {
    cEnumerator_terminalList enumerator_118 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)), kEnumeration_up) ;
    while (enumerator_118.hasCurrentObject ()) {
      result << ",\n"
        "   kToken_" ;
      result << enumerator_118.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).reader_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).stringValue () ;
      index_118_.increment () ;
      enumerator_118.gotoNextObject () ;
    }
  }
  result << "} ;\n" ;
  GALGAS_uint index_243_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_243 (in_DELIMITOR_5F_LIST_5F_LIST, kEnumeration_up) ;
    while (enumerator_243.hasCurrentObject ()) {
      result << "\n"
        "//--- Key words table '" ;
      result << enumerator_243.current_mName (HERE).reader_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 10)).stringValue () ;
      result << "'\n"
        "  public : static int16_t search_into_" ;
      result << enumerator_243.current_mName (HERE).reader_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 11)).stringValue () ;
      result << " (const C_String & inSearchedString) ;\n" ;
      index_243_.increment () ;
      enumerator_243.gotoNextObject () ;
    }
  }
  result << "  \n"
    "\n"
    "//--- Assign from attribute\n" ;
  GALGAS_uint index_501_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_501 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)), kEnumeration_up) ;
    while (enumerator_501.hasCurrentObject ()) {
      result << "  public : GALGAS_l" ;
      result << categoryReader_lexicalTypeBaseName (enumerator_501.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).reader_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " synthetizedAttribute_" ;
      result << enumerator_501.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " (void) const ;\n" ;
      index_501_.increment () ;
      enumerator_501.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Attribute access\n" ;
  GALGAS_uint index_761_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_761 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)), kEnumeration_up) ;
    while (enumerator_761.hasCurrentObject ()) {
      result << "  public : " ;
      result << categoryReader_cppTypeName (enumerator_761.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " attributeValue_" ;
      result << enumerator_761.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " (void) const ;\n" ;
      index_761_.increment () ;
      enumerator_761.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Indexing keys\n" ;
  GALGAS_uint index_966_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_966 (in_INDEXING_5F_LIST, kEnumeration_up) ;
    const bool nonEmpty_enumerator_966 = enumerator_966.hasCurrentObject () ;
    if (nonEmpty_enumerator_966) {
      result << "  public : enum {" ;
    }
    while (enumerator_966.hasCurrentObject ()) {
      result << "\n"
        "    kIndexing_" ;
      result << enumerator_966.current_mIndexName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 33)).stringValue () ;
      if (enumerator_966.hasNextObject ()) {
        result << "," ;
      }
      index_966_.increment () ;
      enumerator_966.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_966) {
      result << "\n"
        "  } ;\n" ;
    }
  }
  result << "\n"
    "//--- Indexing directory\n"
    "  protected : virtual C_String indexingDirectory (void) const ;\n"
    "\n"
    "//--- Parse lexical token\n"
    "  protected : virtual bool parseLexicalToken (void) ;\n"
    "\n"
    "//--- Get terminal message\n"
    "  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;\n"
    "\n"
    "//--- Get terminal count\n"
    "  public : virtual int16_t terminalVocabularyCount (void) const { return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 48)).reader_length (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 48)).reader_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 48)).stringValue () ;
  result << " ; }\n"
    "\n"
    "//--- Get Token String\n"
    "  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;\n"
    "\n"
    "//--- Enter Token\n"
    "  protected : void enterToken (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & inToken) ;\n"
    "\n"
    "//--- Style name for Latex\n"
    "  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;\n"
    "  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                                  const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                                  const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                                  const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                                  const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                                  const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                                  const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                                  const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                                  const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                                  const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//     L E X I Q U E                                                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"strings/unicode_character_cpp.h\"\n"
    "#include \"galgas2/scanner_actions.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void)" ;
  GALGAS_uint index_935_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_935 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    const bool nonEmpty_enumerator_935 = enumerator_935.hasCurrentObject () ;
    if (nonEmpty_enumerator_935) {
      result << " :\n" ;
    }
    while (enumerator_935.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_935.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 15)).stringValue () ;
      result << " ()" ;
      if (enumerator_935.hasNextObject ()) {
        result << ",\n" ;
      }
      index_935_.increment () ;
      enumerator_935.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                const C_String & inDependencyFileExtension,\n"
    "                const C_String & inDependencyFilePath,\n"
    "                const C_String & inSourceFileName\n"
    "                COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE)" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 29)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                const C_String & inSourceString,\n"
    "                const C_String & inStringForError\n"
    "                COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_1) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                                                *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::indexingDirectory (void) const {\n"
    "  return " ;
  result << in_INDEXING_5F_DIRECTORY.reader_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                        Lexical error message list                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_3093_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_3093 (in_LEXICAL_5F_MESSAGE_5F_MAP, kEnumeration_up) ;
    while (enumerator_3093.hasCurrentObject ()) {
      result << "\n"
        "static const utf32 gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3093.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue () ;
      result << " [] = " ;
      result << enumerator_3093.current_mLexicalMessage (HERE).mAttribute_string.reader_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue () ;
      result << " ;\n" ;
      index_3093_.increment () ;
      enumerator_3093.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//          Syntax error messages, for every terminal symbol                                                           *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_3627_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3627 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_3627.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_3627.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << "$' :\n"
        "static const utf32 gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3627.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 70)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 70)).stringValue () ;
      result << " [] = " ;
      result << enumerator_3627.current_mSyntaxErrorMessage (HERE).reader_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 70)).stringValue () ;
      result << " ;\n" ;
      index_3627_.increment () ;
      enumerator_3627.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                getMessageForTerminal                                                                                *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getMessageForTerminal (const int16_t inTerminalIndex) const {\n"
    "  static const utf32 * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_4510_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4510 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_4510.hasCurrentObject ()) {
      result << ",\n"
        "    gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4510.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 80)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 80)).stringValue () ;
      index_4510_.increment () ;
      enumerator_4510.gotoNextObject () ;
    }
  }
  result << "} ;\n"
    "  return syntaxErrorMessageArray [inTerminalIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                      U N I C O D E    S T R I N G S                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_5088_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_5088 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kEnumeration_up) ;
    while (enumerator_5088.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_5088.current_key (HERE).reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_5088.current_key (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 92)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5088.current_key (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 93)).stringValue () ;
        result << " [] = " ;
        result << enumerator_5088.current_key (HERE).reader_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 93)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_5088_.increment () ;
      enumerator_5088.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_5390_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5390 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kEnumeration_up) ;
    while (enumerator_5390.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//             Key words table '" ;
      result << enumerator_5390.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 100)).stringValue () ;
      result << "'                            *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5390.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 102)).stringValue () ;
      result << " = " ;
      result << enumerator_5390.current_mExplicitTokenListMap (HERE).reader_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 102)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 102)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5390.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 103)).stringValue () ;
      result << " [ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5390.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 103)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6125_ (0) ;
      if (enumerator_5390.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_6125 (enumerator_5390.current_mTokenSortedList (HERE), kEnumeration_up) ;
        while (enumerator_6125.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6125.current_mName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
          result << ", " ;
          result << enumerator_6125.current_mLength (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_6125.current_mTerminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
          result << ")" ;
          if (enumerator_6125.hasNextObject ()) {
            result << ",\n" ;
          }
          index_6125_.increment () ;
          enumerator_6125.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_5390.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 109)).stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5390.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 110)).stringValue () ;
      result << ", ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5390.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 110)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_5390_.increment () ;
      enumerator_5390.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                          getCurrentTokenString                                                                      *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getCurrentTokenString (const cToken * inTokenPtr) const {\n"
    "  const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " *) inTokenPtr ;\n"
    "  C_String s ;\n"
    "  if (ptr == NULL) {\n"
    "    s.appendCString(\"$$\") ;\n"
    "  }else{\n"
    "    switch (ptr->mTokenCode) {\n"
    "    case kToken_:\n"
    "      s.appendCString(\"$$\") ;\n"
    "      break ;\n" ;
  GALGAS_uint index_7467_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7467 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_7467.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_7467.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 129)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 129)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_7467.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 131)).reader_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 131)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_7799_ (0) ;
      if (enumerator_7467.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_7799 (enumerator_7467.current_mSentAttributeList (HERE), kEnumeration_up) ;
        while (enumerator_7799.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << categoryReader_appendMethodName (enumerator_7799.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 135)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_7799.current_mLexicalAttributeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 135)).stringValue () ;
          result << categoryReader_appendArgumentOfMethod (enumerator_7799.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 135)).stringValue () ;
          result << ") ;\n" ;
          index_7799_.increment () ;
          enumerator_7799.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_7467_.increment () ;
      enumerator_7467.gotoNextObject () ;
    }
  }
  result << "    default:\n"
    "      break ;\n"
    "    }\n"
    "  }\n"
    "  return s ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                           Template Delimiters                                                                       *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_8683_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 150)).isValid ()) {
    cEnumerator_templateDelimitorList enumerator_8683 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 150)), kEnumeration_up) ;
    const bool nonEmpty_enumerator_8683 = enumerator_8683.hasCurrentObject () ;
    if (nonEmpty_enumerator_8683) {
      result << "static const cTemplateDelimiter kTemplateDefinitionArray [" ;
      result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 151)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 151)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8683.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_8683.current_mStartString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue () ;
      result << ", " ;
      result << enumerator_8683.current_mStartString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 152)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8683.current_mEndString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_8683.current_mEndString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue () ;
        result << ", " ;
        result << enumerator_8683.current_mEndString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_8683.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).reader_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
      result << ")" ;
      if (enumerator_8683.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8683_.increment () ;
      enumerator_8683.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8683) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                           Template Replacements                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_9678_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_9678 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kEnumeration_up) ;
    const bool nonEmpty_enumerator_9678 = enumerator_9678.hasCurrentObject () ;
    if (nonEmpty_enumerator_9678) {
      result << "static const cTemplateDelimiter kTemplateReplacementArray [" ;
      result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 170)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 170)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_9678.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9678.current_mMatchString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 172)).stringValue () ;
      result << ", " ;
      result << enumerator_9678.current_mMatchString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 172)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 172)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9678.current_mReplacementString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << ", " ;
      result << enumerator_9678.current_mReplacementString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9678.current_mReplacementFunction (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_9678.current_mReplacementFunction (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_9678.hasNextObject ()) {
        result << ",\n" ;
      }
      index_9678_.increment () ;
      enumerator_9678.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_9678) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//            Terminal Symbols as end of script in template mark                                                       *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 188)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_10772_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 189)).isValid ()) {
      cEnumerator_terminalList enumerator_10772 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 189)), kEnumeration_up) ;
      const bool nonEmpty_enumerator_10772 = enumerator_10772.hasCurrentObject () ;
      if (nonEmpty_enumerator_10772) {
        result << "static const bool kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 190)).reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 190)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 190)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_10772.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_10772.current_mIsEndOfTemplateMark (HERE).reader_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).stringValue () ;
        result << " /* " ;
        result << enumerator_10772.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).stringValue () ;
        result << " */" ;
        if (enumerator_10772.hasNextObject ()) {
          result << ",\n" ;
        }
        index_10772_.increment () ;
        enumerator_10772.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10772) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//               P A R S E    L E X I C A L    T O K E N                                                               *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::parseLexicalToken (void) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " token ;\n"
    "  mLoop = true ;\n"
    "  token.mTokenCode = -1 ;\n"
    "  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 208)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0)\n"
      "     && (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n"
      "     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      const bool foundEndDelimitor = testForInputUTF32String (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n"
      "                                                              kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,\n"
      "                                                              true) ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      int32_t replacementIndex = 0 ;\n"
      "      while (replacementIndex >= 0) {\n"
      "        replacementIndex = findTemplateDelimiterIndex (kTemplateReplacementArray, " ;
    result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 222)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 222)).stringValue () ;
    result << ") ;\n"
      "        if (replacementIndex >= 0) {\n"
      "          if (kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {\n"
      "            token.mTemplateStringBeforeToken << kTemplateReplacementArray [replacementIndex].mEndString ;\n"
      "          }else{\n"
      "            C_String s ;\n"
      "            while (notTestForInputUTF32String (kTemplateReplacementArray [replacementIndex].mEndString,\n"
      "                                               kTemplateReplacementArray [replacementIndex].mEndStringLength,\n"
      "                                               kEndOfSourceLexicalErrorMessage\n"
      "                                               COMMA_HERE)) {\n"
      "              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;\n"
      "            }\n"
      "            kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n"
      "          }\n"
      "        }\n"
      "      }\n"
      "      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (kTemplateDefinitionArray, " ;
    result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).stringValue () ;
    result << ") ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n"
      "        advance () ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
    GALGAS_uint index_13773_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_13773 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_13773.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_13773.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 246)).stringValue () ;
        result << categoryReader_initialization (enumerator_13773.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 246)).stringValue () ;
        result << " ;\n" ;
        index_13773_.increment () ;
        enumerator_13773.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 8U).uintValue ()) ;
    }
    GALGAS_uint index_13988_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_13988 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_13988.hasCurrentObject ()) {
        result << callCategoryReader_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_13988.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).stringValue () ;
        index_13988_.increment () ;
        enumerator_13988.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 8U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "          token.mTokenCode = kToken_ ; // Empty string code\n"
      "        }else{ // Unknown input character\n"
      "          unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "        }\n"
      "      }catch (const C_lexicalErrorException &) {\n"
      "        token.mTokenCode = -1 ; // No token\n"
      "        advance () ; // ... go throught unknown character\n"
      "      }\n"
      "    }\n"
      "    if ((token.mTokenCode > 0) && kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  " ;
  }else if (kBoolFalse == test_6) {
    GALGAS_uint index_14682_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_14682 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_14682.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_14682.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 271)).stringValue () ;
        result << categoryReader_initialization (enumerator_14682.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 271)).stringValue () ;
        result << " ;\n" ;
        index_14682_.increment () ;
        enumerator_14682.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_14897_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_14897 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_14897.hasCurrentObject ()) {
        result << callCategoryReader_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_14897.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 278)).stringValue () ;
        index_14897_.increment () ;
        enumerator_14897.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "        token.mTokenCode = kToken_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "      }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "  if ((UNICODE_VALUE (mCurrentChar) == '\\0') && (token.mTemplateStringBeforeToken.length () > 0)) {\n"
    "    token.mTokenCode = 0 ;\n"
    "    enterToken (token) ;\n"
    "  }\n"
    "  return token.mTokenCode > 0 ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                         E N T E R    T O K E N                                                                      *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::enterToken (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & inToken) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = NULL ;\n"
    "  macroMyNew (ptr, cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " ()) ;\n"
    "  ptr->mTokenCode = inToken.mTokenCode ;\n"
    "  ptr->mStartLocation = mTokenStartLocation ;\n"
    "  ptr->mEndLocation = mTokenEndLocation ;\n"
    "  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;\n" ;
  GALGAS_uint index_16398_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_16398 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_16398.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_16398.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = inToken.mLexicalAttribute_" ;
      result << enumerator_16398.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_16398_.increment () ;
      enumerator_16398.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//               A T T R I B U T E   A C C E S S                                                                       *\n" ;
  GALGAS_uint index_16854_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_16854 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_16854.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n" ;
      result << categoryReader_cppTypeName (enumerator_16854.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 321)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_16854.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 321)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) mCurrentTokenPtr ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_16854.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 323)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_16854_.increment () ;
      enumerator_16854.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                                                 *\n" ;
  GALGAS_uint index_17601_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17601 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_17601.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_l" ;
      result << categoryReader_lexicalTypeBaseName (enumerator_17601.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 331)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 331)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_17601.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 331)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) mCurrentTokenPtr ;\n"
        "  macroValidSharedObject (ptr, cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n"
        "  GALGAS_" ;
      result << categoryReader_lexicalTypeBaseName (enumerator_17601.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 335)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 335)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_17601.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 335)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << categoryReader_lexicalTypeBaseName (enumerator_17601.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 336)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 336)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_17601_.increment () ;
      enumerator_17601.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                         I N T R O S P E C T I O N                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_stringlist C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::symbols (LOCATION_ARGS) {\n"
    "  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n" ;
  GALGAS_uint index_19086_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)).isValid ()) {
    cEnumerator_terminalList enumerator_19086 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)), kEnumeration_up) ;
    while (enumerator_19086.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_19086.current_mTerminalName (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 347)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_19086_.increment () ;
      enumerator_19086.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "uint32_t C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n"
    "  static const uint32_t kTerminalSymbolStyles [" ;
  result << in_TERMINAL_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 357)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 357)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 357)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_19805_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_19805 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_19805.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_19805.current_mStyleIndex (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 359)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_19805.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 359)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 359)).stringValue () ;
      result << " */" ;
      index_19805_.increment () ;
      enumerator_19805.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleNameForIndex (const uint32_t inStyleIndex) const {\n"
    "  C_String result ;\n"
    "  if (inStyleIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 370)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 370)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 370)).stringValue () ;
  result << ") {\n"
    "    static const char * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).reader_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).stringValue () ;
  result << "] = {\n"
    "      \"\"" ;
  GALGAS_uint index_20700_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_20700 (in_LEXICAL_5F_STYLE_5F_LIST, kEnumeration_up) ;
    while (enumerator_20700.hasCurrentObject ()) {
      result << ",\n"
        "      " ;
      result << enumerator_20700.current_mName (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 374)).stringValue () ;
      index_20700_.increment () ;
      enumerator_20700.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inStyleIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_ (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                        const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                        const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                        const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                        const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                        const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & in_LEXIQUE_5F_COMPONENT_5F_ROOT
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#include \"strings/unicode_character_cpp.h\"\n"
    "#include \"galgas2/scanner_actions.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"" ;
  result << in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mLexiqueComponentName (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 7)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 7)).stringValue () ;
  result << ".h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               Constructors                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void)" ;
  GALGAS_uint index_1009_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_1009 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    const bool nonEmpty_enumerator_1009 = enumerator_1009.hasCurrentObject () ;
    if (nonEmpty_enumerator_1009) {
      result << " :\n" ;
    }
    while (enumerator_1009.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_1009.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 18)).stringValue () ;
      result << " ()" ;
      if (enumerator_1009.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1009_.increment () ;
      enumerator_1009.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                const C_String & inDependencyFileExtension,\n"
    "                const C_String & inDependencyFilePath,\n"
    "                const C_String & inSourceFileName\n"
    "                COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE)" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 32)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 32)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                const C_String & inSourceString,\n"
    "                const C_String & inStringForError\n"
    "                COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 45)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 45)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_1) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                                                *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::indexingDirectory (void) const {\n"
    "  return " ;
  result << in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mIndexingDirectory (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 58)).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 58)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                        Lexical error message list                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_3724_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_3724 (in_LEXICAL_5F_MESSAGE_5F_MAP, kEnumeration_up) ;
    while (enumerator_3724.hasCurrentObject ()) {
      result << "\n"
        "static const utf32 gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3724.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 68)).stringValue () ;
      result << " [] = " ;
      result << enumerator_3724.current_mLexicalMessage (HERE).mAttribute_string.reader_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 68)).stringValue () ;
      result << " ;\n" ;
      index_3724_.increment () ;
      enumerator_3724.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//          Syntax error messages, for every terminal symbol                                                           *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_4500_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4500 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_4500.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_4500.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 78)).stringValue () ;
      result << "$' :\n"
        "static const utf32 gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4500.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 79)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 79)).stringValue () ;
      result << " [] = " ;
      result << enumerator_4500.current_mSyntaxErrorMessage (HERE).reader_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 79)).stringValue () ;
      result << " ;\n" ;
      index_4500_.increment () ;
      enumerator_4500.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                getMessageForTerminal                                                                                *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getMessageForTerminal (const int16_t inTerminalIndex) const {\n"
    "  static const utf32 * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 89)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 89)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 89)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_5625_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_5625 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_5625.hasCurrentObject ()) {
      result << ",\n"
        "    gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5625.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 91)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 91)).stringValue () ;
      index_5625_.increment () ;
      enumerator_5625.gotoNextObject () ;
    }
  }
  result << "} ;\n"
    "  return syntaxErrorMessageArray [inTerminalIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                      U N I C O D E    S T R I N G S                                                                 *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_6445_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_6445 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kEnumeration_up) ;
    while (enumerator_6445.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_6445.current_key (HERE).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 104)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_6445.current_key (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 105)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_6445.current_key (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 106)).stringValue () ;
        result << " [] = " ;
        result << enumerator_6445.current_key (HERE).reader_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 106)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_6445_.increment () ;
      enumerator_6445.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_6747_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_6747 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kEnumeration_up) ;
    while (enumerator_6747.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//                                                                                                                     *\n"
        "//             Key words table '" ;
      result << enumerator_6747.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 114)).stringValue () ;
      result << "'                                                            *\n"
        "//                                                                                                                     *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << enumerator_6747.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 117)).stringValue () ;
      result << " = " ;
      result << enumerator_6747.current_mExplicitTokenListMap (HERE).reader_count (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 117)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 117)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << enumerator_6747.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 118)).stringValue () ;
      result << " [ktable_size_" ;
      result << enumerator_6747.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 118)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7706_ (0) ;
      if (enumerator_6747.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_7706 (enumerator_6747.current_mTokenSortedList (HERE), kEnumeration_up) ;
        while (enumerator_7706.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_7706.current_mName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 120)).stringValue () ;
          result << ", " ;
          result << enumerator_7706.current_mLength (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 120)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_7706.current_mTerminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 120)).stringValue () ;
          result << ")" ;
          if (enumerator_7706.hasNextObject ()) {
            result << ",\n" ;
          }
          index_7706_.increment () ;
          enumerator_7706.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_6747.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 124)).stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << enumerator_6747.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 125)).stringValue () ;
      result << ", ktable_size_" ;
      result << enumerator_6747.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 125)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_6747_.increment () ;
      enumerator_6747.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                          getCurrentTokenString                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getCurrentTokenString (const cToken * inTokenPtr) const {\n"
    "  const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " *) inTokenPtr ;\n"
    "  C_String s ;\n"
    "  if (ptr == NULL) {\n"
    "    s.appendCString(\"$$\") ;\n"
    "  }else{\n"
    "    switch (ptr->mTokenCode) {\n"
    "    case kToken_:\n"
    "      s.appendCString(\"$$\") ;\n"
    "      break ;\n" ;
  GALGAS_uint index_9246_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_9246 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_9246.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_9246.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 146)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 146)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_9246.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 148)).reader_utf_38_Representation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 148)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_9578_ (0) ;
      if (enumerator_9246.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_9578 (enumerator_9246.current_mSentAttributeList (HERE), kEnumeration_up) ;
        while (enumerator_9578.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << categoryReader_appendMethodName (enumerator_9578.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 152)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_9578.current_mLexicalAttributeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 152)).stringValue () ;
          result << categoryReader_appendArgumentOfMethod (enumerator_9578.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 152)).stringValue () ;
          result << ") ;\n" ;
          index_9578_.increment () ;
          enumerator_9578.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_9246_.increment () ;
      enumerator_9246.gotoNextObject () ;
    }
  }
  result << "    default:\n"
    "      break ;\n"
    "    }\n"
    "  }\n"
    "  return s ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                           Template Delimiters                                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_10728_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 169)).isValid ()) {
    cEnumerator_templateDelimitorList enumerator_10728 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 169)), kEnumeration_up) ;
    const bool nonEmpty_enumerator_10728 = enumerator_10728.hasCurrentObject () ;
    if (nonEmpty_enumerator_10728) {
      result << "static const cTemplateDelimiter kTemplateDefinitionArray [" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 170)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 170)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 170)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_10728.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_10728.current_mStartString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 171)).stringValue () ;
      result << ", " ;
      result << enumerator_10728.current_mStartString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 171)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 171)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_10728.current_mEndString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_10728.current_mEndString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 175)).stringValue () ;
        result << ", " ;
        result << enumerator_10728.current_mEndString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 175)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 175)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_10728.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 178)).reader_cString (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 178)).stringValue () ;
      result << ")" ;
      if (enumerator_10728.hasNextObject ()) {
        result << ",\n" ;
      }
      index_10728_.increment () ;
      enumerator_10728.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_10728) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                           Template Replacements                                                                     *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_12013_ (0) ;
  if (in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateReplacementList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 190)).isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_12013 (in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateReplacementList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 190)), kEnumeration_up) ;
    const bool nonEmpty_enumerator_12013 = enumerator_12013.hasCurrentObject () ;
    if (nonEmpty_enumerator_12013) {
      result << "static const cTemplateDelimiter kTemplateReplacementArray [" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateReplacementList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 191)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 191)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 191)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_12013.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_12013.current_mMatchString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 193)).stringValue () ;
      result << ", " ;
      result << enumerator_12013.current_mMatchString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 193)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 193)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_12013.current_mReplacementString (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 194)).stringValue () ;
      result << ", " ;
      result << enumerator_12013.current_mReplacementString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 194)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 194)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_12013.current_mReplacementFunction (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 195)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_12013.current_mReplacementFunction (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 198)).stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_12013.hasNextObject ()) {
        result << ",\n" ;
      }
      index_12013_.increment () ;
      enumerator_12013.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_12013) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//            Terminal Symbols as end of script in template mark                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 211)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 211)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_13373_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 212)).isValid ()) {
      cEnumerator_terminalList enumerator_13373 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 212)), kEnumeration_up) ;
      const bool nonEmpty_enumerator_13373 = enumerator_13373.hasCurrentObject () ;
      if (nonEmpty_enumerator_13373) {
        result << "static const bool kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 213)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 213)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 213)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_13373.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_13373.current_mIsEndOfTemplateMark (HERE).reader_cString (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 214)).stringValue () ;
        result << " /* " ;
        result << enumerator_13373.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 214)).stringValue () ;
        result << " */" ;
        if (enumerator_13373.hasNextObject ()) {
          result << ",\n" ;
        }
        index_13373_.increment () ;
        enumerator_13373.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_13373) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//               P A R S E    L E X I C A L    T O K E N                                                               *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::parseLexicalToken (void) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " token ;\n"
    "  mLoop = true ;\n"
    "  token.mTokenCode = -1 ;\n"
    "  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 233)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 233)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0)\n"
      "     && (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n"
      "     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      const bool foundEndDelimitor = testForInputUTF32String (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n"
      "                                                              kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,\n"
      "                                                              true) ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      int32_t replacementIndex = 0 ;\n"
      "      while (replacementIndex >= 0) {\n"
      "        replacementIndex = findTemplateDelimiterIndex (kTemplateReplacementArray, " ;
    result << in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateReplacementList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 247)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 247)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 247)).stringValue () ;
    result << ") ;\n"
      "        if (replacementIndex >= 0) {\n"
      "          if (kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {\n"
      "            token.mTemplateStringBeforeToken << kTemplateReplacementArray [replacementIndex].mEndString ;\n"
      "          }else{\n"
      "            C_String s ;\n"
      "            while (notTestForInputUTF32String (kTemplateReplacementArray [replacementIndex].mEndString,\n"
      "                                               kTemplateReplacementArray [replacementIndex].mEndStringLength,\n"
      "                                               kEndOfSourceLexicalErrorMessage\n"
      "                                               COMMA_HERE)) {\n"
      "              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;\n"
      "            }\n"
      "            kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n"
      "          }\n"
      "        }\n"
      "      }\n"
      "      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (kTemplateDefinitionArray, " ;
    result << in_LEXIQUE_5F_COMPONENT_5F_ROOT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 263)).reader_length (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 263)).reader_string (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 263)).stringValue () ;
    result << ") ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n"
      "        advance () ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
    GALGAS_uint index_16688_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_16688 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_16688.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_16688.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 271)).stringValue () ;
        result << categoryReader_initialization (enumerator_16688.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 271)).stringValue () ;
        result << " ;\n" ;
        index_16688_.increment () ;
        enumerator_16688.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 8U).uintValue ()) ;
    }
    GALGAS_uint index_16903_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_16903 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_16903.hasCurrentObject ()) {
        result << callCategoryReader_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_16903.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 278)).stringValue () ;
        index_16903_.increment () ;
        enumerator_16903.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 8U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "          token.mTokenCode = kToken_ ; // Empty string code\n"
      "        }else{ // Unknown input character\n"
      "          unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "        }\n"
      "      }catch (const C_lexicalErrorException &) {\n"
      "        token.mTokenCode = -1 ; // No token\n"
      "        advance () ; // ... go throught unknown character\n"
      "      }\n"
      "    }\n"
      "    if ((token.mTokenCode > 0) && kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  " ;
  }else if (kBoolFalse == test_6) {
    GALGAS_uint index_17597_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_17597 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_17597.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_17597.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 296)).stringValue () ;
        result << categoryReader_initialization (enumerator_17597.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 296)).stringValue () ;
        result << " ;\n" ;
        index_17597_.increment () ;
        enumerator_17597.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_17812_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_17812 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_17812.hasCurrentObject ()) {
        result << callCategoryReader_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_17812.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 303)).stringValue () ;
        index_17812_.increment () ;
        enumerator_17812.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "        token.mTokenCode = kToken_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "      }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "  if ((UNICODE_VALUE (mCurrentChar) == '\\0') && (token.mTemplateStringBeforeToken.length () > 0)) {\n"
    "    token.mTokenCode = 0 ;\n"
    "    enterToken (token) ;\n"
    "  }\n"
    "  return token.mTokenCode > 0 ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                         E N T E R    T O K E N                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::enterToken (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & inToken) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = NULL ;\n"
    "  macroMyNew (ptr, cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " ()) ;\n"
    "  ptr->mTokenCode = inToken.mTokenCode ;\n"
    "  ptr->mStartLocation = mTokenStartLocation ;\n"
    "  ptr->mEndLocation = mTokenEndLocation ;\n"
    "  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;\n" ;
  GALGAS_uint index_19555_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_19555 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_19555.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_19555.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 338)).stringValue () ;
      result << " = inToken.mLexicalAttribute_" ;
      result << enumerator_19555.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 338)).stringValue () ;
      result << " ;\n" ;
      index_19555_.increment () ;
      enumerator_19555.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//               A T T R I B U T E   A C C E S S                                                                       *\n"
    "//                                                                                                                     *\n" ;
  GALGAS_uint index_20253_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_20253 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_20253.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n" ;
      result << categoryReader_cppTypeName (enumerator_20253.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 350)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_20253.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 350)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) mCurrentTokenPtr ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_20253.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 352)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_20253_.increment () ;
      enumerator_20253.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                                                 *\n"
    "//                                                                                                                     *\n" ;
  GALGAS_uint index_21242_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_21242 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_21242.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_l" ;
      result << categoryReader_lexicalTypeBaseName (enumerator_21242.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 362)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 362)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_21242.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 362)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) mCurrentTokenPtr ;\n"
        "  macroValidSharedObject (ptr, cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n"
        "  GALGAS_" ;
      result << categoryReader_lexicalTypeBaseName (enumerator_21242.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 366)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 366)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_21242.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 366)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << categoryReader_lexicalTypeBaseName (enumerator_21242.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 367)).reader_identifierRepresentation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 367)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_21242_.increment () ;
      enumerator_21242.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                         I N T R O S P E C T I O N                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_stringlist C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::symbols (LOCATION_ARGS) {\n"
    "  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n" ;
  GALGAS_uint index_22969_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 379)).isValid ()) {
    cEnumerator_terminalList enumerator_22969 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 379)), kEnumeration_up) ;
    while (enumerator_22969.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_22969.current_mTerminalName (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_implementation.new.cpp.galgasTemplate", 380)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_22969_.increment () ;
      enumerator_22969.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "#import \"OC_Lexique.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                    E X T E R N    R O U T I N E S                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_698_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_698 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)), kEnumeration_up) ;
    while (enumerator_698.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_698.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_cocoa_routine_" ;
        result << enumerator_698.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 12)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_852_ (0) ;
        if (enumerator_698.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_852 (enumerator_698.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
          while (enumerator_852.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << categoryReader_cppConstInFormalArgument (enumerator_852.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result << categoryReader_cocoaTypeName (enumerator_852.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result << categoryReader_cocoaPointerInFormalArgument (enumerator_852.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
            result << " " ;
            result << enumerator_852.current_mArgumentNameForComment (HERE).stringValue () ;
            index_852_.increment () ;
            enumerator_852.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_698_.increment () ;
      enumerator_698.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                    E X T E R N    F U N C T I O N S                                                                 *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_1865_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1865 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)), kEnumeration_up) ;
    while (enumerator_1865.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1865.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << categoryReader_cppTypeName (enumerator_1865.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " scanner_cocoa_function_" ;
        result << enumerator_1865.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_2036_ (0) ;
        if (enumerator_1865.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_2036 (enumerator_1865.current_mLexicalTypeList (HERE), kEnumeration_up) ;
          while (enumerator_2036.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "const " ;
            result << categoryReader_cppTypeName (enumerator_2036.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
            result << " " ;
            result << enumerator_2036.current_mArgumentNameForComment (HERE).stringValue () ;
            index_2036_.increment () ;
            enumerator_2036.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1865_.increment () ;
      enumerator_1865.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "enum {" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "_1_" ;
  GALGAS_uint index_2867_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)).isValid ()) {
    cEnumerator_terminalList enumerator_2867 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)), kEnumeration_up) ;
    while (enumerator_2867.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_2867.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
      index_2867_.increment () ;
      enumerator_2867.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                     S C A N N E R    C L A S S                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@interface OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << " : OC_Lexique {\n"
    "//--- Attributes\n" ;
  GALGAS_uint index_3722_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 61)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3722 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 61)), kEnumeration_up) ;
    while (enumerator_3722.hasCurrentObject ()) {
      result << "  @private " ;
      result << categoryReader_cocoaTypeName (enumerator_3722.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3722.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue () ;
      result << " ;\n" ;
      index_3722_.increment () ;
      enumerator_3722.gotoNextObject () ;
    }
  }
  result << "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & /* in_LEXIQUE_5F_CLASS_5F_NAME */,
                                                                                  const GALGAS_lexiqueAnalysisContext & /* in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "- (NSUInteger) terminalVocabularyCount ;\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring ;\n"
    "\n"
    "- (NSUInteger) styleCount ;\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) indexingDirectory ;\n"
    "\n"
    "- (NSArray *) indexingTitles ; // Array of NSString\n"
    "\n"
    "- (BOOL) isTemplateLexique ;\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                          const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                          const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                          const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                          const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"" ;
  result << in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"PMDebug.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@implementation OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                           Template Replacements                                                                     *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static NSArray * kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue () ;
    result << " ; // Of NSString \n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                           Template Delimiters                                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "static NSArray * kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (instancetype) init {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    noteObjectAllocation (self) ;\n" ;
  GALGAS_uint index_2043_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2043 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_2043.hasCurrentObject ()) {
      result << "    mLexicalAttribute_" ;
      result << enumerator_2043.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue () ;
      result << " = " ;
      result << categoryReader_cocoaInitializationCode (enumerator_2043.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue () ;
      result << " ;\n" ;
      index_2043_.increment () ;
      enumerator_2043.gotoNextObject () ;
    }
  }
  result << "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  if (nil == kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue () ;
    result << ") {\n"
      "    kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_2492_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 42)).isValid ()) {
      cEnumerator_templateDelimitorList enumerator_2492 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 42)), kEnumeration_up) ;
      while (enumerator_2492.hasCurrentObject ()) {
        result << "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result << enumerator_2492.current_mStartString (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue () ;
        result << " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2492.current_mEndString (HERE).mAttribute_string.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result << "nil" ;
        }else if (kBoolFalse == test_3) {
          result << "@" ;
          result << enumerator_2492.current_mEndString (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue () ;
        }
        result << " discardStartString:" ;
        result << enumerator_2492.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).reader_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
        result << "],\n" ;
        index_2492_.increment () ;
        enumerator_2492.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "  if (nil == kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue () ;
    result << ") {\n"
      "\n"
      "    kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3167_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3167 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_3167.hasCurrentObject ()) {
        result << "      @" ;
        result << enumerator_3167.current_mMatchString (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue () ;
        result << ", " ;
        index_3167_.increment () ;
        enumerator_3167.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "  return self ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) FINALIZE_OR_DEALLOC {\n"
    "  noteObjectDeallocation (self) ;\n"
    "  macroSuperFinalize ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                                                *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) indexingDirectory {\n"
    "  return @" ;
  result << in_INDEXING_5F_DIRECTORY.reader_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 84)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                 I N D E X I N G    T I T L E S                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSArray *) indexingTitles { // Array of NSString\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 95)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_4966_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_4966 (in_INDEXING_5F_LIST, kEnumeration_up) ;
      while (enumerator_4966.hasCurrentObject ()) {
        result << "    @" ;
        result << enumerator_4966.current_mIndexComment (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 99)).stringValue () ;
        result << ",\n" ;
        index_4966_.increment () ;
        enumerator_4966.gotoNextObject () ;
      }
    }
    result << "    NULL\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_5) {
    result << "\n"
      "  return [NSArray array] ;\n" ;
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//            Terminal Symbols as end of script in template mark                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_5981_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 117)).isValid ()) {
      cEnumerator_terminalList enumerator_5981 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 117)), kEnumeration_up) ;
      const bool nonEmpty_enumerator_5981 = enumerator_5981.hasCurrentObject () ;
      if (nonEmpty_enumerator_5981) {
        result << "static const BOOL kEndOfScriptInTemplateArray_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).stringValue () ;
        result << " [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_5981.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_5981.current_mIsEndOfTemplateMark (HERE).reader_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 119)).stringValue () ;
        result << " /* " ;
        result << enumerator_5981.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 119)).stringValue () ;
        result << " */" ;
        if (enumerator_5981.hasNextObject ()) {
          result << ",\n" ;
        }
        index_5981_.increment () ;
        enumerator_5981.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_5981) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_6) {
  }
  result << "\n"
    "\n" ;
  GALGAS_uint index_6189_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_6189 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)), kEnumeration_up) ;
    while (enumerator_6189.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_6189.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "//                                                                                                                     *\n"
          "//             Key words table '" ;
        result << enumerator_6189.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 131)).stringValue () ;
        result << "'                            *\n"
          "//                                                                                                                     *\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "static const C_cocoa_lexique_table_entry ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).stringValue () ;
        result << "_" ;
        result << enumerator_6189.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).stringValue () ;
        result << " [" ;
        result << enumerator_6189.current_mExplicitTokenListMap (HERE).reader_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).stringValue () ;
        result << "] = {\n" ;
        GALGAS_uint index_7107_ (0) ;
        if (enumerator_6189.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_7107 (enumerator_6189.current_mTokenSortedList (HERE), kEnumeration_up) ;
          while (enumerator_7107.hasCurrentObject ()) {
            result << "  {" ;
            result << enumerator_7107.current_mName (HERE).reader_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 136)).stringValue () ;
            result << ", " ;
            result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result << "_1_" ;
            result << enumerator_7107.current_mTerminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 136)).stringValue () ;
            result << "}" ;
            if (enumerator_7107.hasNextObject ()) {
              result << ",\n" ;
            }
            index_7107_.increment () ;
            enumerator_7107.gotoNextObject () ;
          }
        }
        result << "\n"
          "} ;\n"
          "\n"
          "static NSInteger search_into_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 140)).stringValue () ;
        result << "_" ;
        result << enumerator_6189.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 140)).stringValue () ;
        result << " (NSString * inSearchedString) {\n"
          "  return searchStringInTable (inSearchedString, ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).stringValue () ;
        result << "_" ;
        result << enumerator_6189.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).stringValue () ;
        result << ", " ;
        result << enumerator_6189.current_mExplicitTokenListMap (HERE).reader_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).stringValue () ;
        result << ") ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_6189_.increment () ;
      enumerator_6189.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//               P A R S E    L E X I C A L    T O K E N                                                               *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring {\n"
    "  mLoop = YES ;\n"
    "  BOOL scanningOk = YES ;\n"
    "  mTokenCode = 0 ;\n"
    "  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n"
    "    mTokenStartLocation = mCurrentLocation ;\n" ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 159)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 160)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n"
      "      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 161)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n"
      "      " ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      result << "\n"
        "      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 168)).stringValue () ;
      result << "] ;\n"
        "      " ;
    }else if (kBoolFalse == test_9) {
    }
    result << "\n"
      "      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 170)).stringValue () ;
    result << "] ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        [self advance] ;\n"
      "        mTokenCode = -2 ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n" ;
    GALGAS_uint index_9706_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_9706 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_9706.hasCurrentObject ()) {
        result << "      " ;
        result << categoryReader_cocoaResetPrefix (enumerator_9706.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_9706.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
        result << categoryReader_cocoaReset (enumerator_9706.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
        result << " ;\n" ;
        index_9706_.increment () ;
        enumerator_9706.gotoNextObject () ;
      }
    }
    result << "      mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_9922_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_9922 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_9922.hasCurrentObject ()) {
        result << callCategoryReader_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9922.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 184)).stringValue () ;
        index_9922_.increment () ;
        enumerator_9922.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "        mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        scanningOk = NO ;\n"
      "      }\n"
      "    }\n"
      "    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 193)).stringValue () ;
    result << " [mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "      [self advance] ;\n"
      "    }" ;
  }else if (kBoolFalse == test_8) {
    GALGAS_uint index_10543_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_10543 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_10543.hasCurrentObject ()) {
        result << "    " ;
        result << categoryReader_cocoaResetPrefix (enumerator_10543.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 202)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_10543.current_lkey (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 202)).stringValue () ;
        result << categoryReader_cocoaReset (enumerator_10543.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 202)).stringValue () ;
        result << " ;\n" ;
        index_10543_.increment () ;
        enumerator_10543.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ()) ;
    }
    GALGAS_uint index_10755_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_10755 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_10755.hasCurrentObject ()) {
        result << callCategoryReader_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10755.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 208)).stringValue () ;
        index_10755_.increment () ;
        enumerator_10755.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "      mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "    }else{ // Unknown input character\n"
      "      scanningOk = NO ;\n"
      "      [self advance] ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                   T E R M I N A L    C O U N T                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSUInteger) terminalVocabularyCount {\n"
    "  return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                     S T Y L E   C O U N T                                                                           *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSUInteger) styleCount {\n"
    "  return " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                I S    T E M P L A T E    L E X I Q U E                                                              *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (BOOL) isTemplateLexique {\n"
    "  return " ;
  result << GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 251)).objectCompare (GALGAS_uint ((uint32_t) 0U))).reader_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 251)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n"
    "  static const NSUInteger kTerminalSymbolStyles [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_14117_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 262)).isValid ()) {
    cEnumerator_terminalList enumerator_14117 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 262)), kEnumeration_up) ;
    while (enumerator_14117.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_14117.current_mStyleIndex (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 263)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_14117.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 263)).reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 263)).stringValue () ;
      result << " */" ;
      index_14117_.increment () ;
      enumerator_14117.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalSymbolStyles [inTerminal] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n"
    "  static const BOOL kTerminalAtomicSelection [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).stringValue () ;
  result << "] = {NO" ;
  GALGAS_uint index_15138_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 276)).isValid ()) {
    cEnumerator_terminalList enumerator_15138 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.reader_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 276)), kEnumeration_up) ;
    while (enumerator_15138.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_15138.current_mAtomicSelection (HERE).reader_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 277)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_15138.current_mTerminalName (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 277)).reader_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 277)).stringValue () ;
      result << " */" ;
      index_15138_.increment () ;
      enumerator_15138.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalAtomicSelection [inTokenIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//             S T Y L E   N A M E    F O R    I N D E X                                                               *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 291)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 291)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 291)).stringValue () ;
  result << "] = {\n"
    "      @\"Default Style\"" ;
  GALGAS_uint index_16240_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_16240 (in_LEXICAL_5F_STYLE_5F_LIST, kEnumeration_up) ;
    while (enumerator_16240.hasCurrentObject ()) {
      result << ",\n"
        "      @" ;
      result << enumerator_16240.current_mComment (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 294)).reader_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 294)).stringValue () ;
      index_16240_.increment () ;
      enumerator_16240.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 309)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 309)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 309)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.reader_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 310)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 310)).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 310)).stringValue () ;
  result << "] = {\n"
    "      @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_17295_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_17295 (in_LEXICAL_5F_STYLE_5F_LIST, kEnumeration_up) ;
    while (enumerator_17295.hasCurrentObject ()) {
      result << ",\n"
        "      @\"" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "-" ;
      result << enumerator_17295.current_mName (HERE).reader_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 313)).stringValue () ;
      result << "\"" ;
      index_17295_.increment () ;
      enumerator_17295.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//         L E X I Q U E   I D E N T I F I E R                                                                         *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) lexiqueIdentifier {\n"
    "  return @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@end\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'parseLexiqueComponent'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseLexiqueComponent (const GALGAS_lstring constinArgument_inSourceFile,
                                    GALGAS_parsedComponentStruct & ioArgument_ioParsedComponentStruct,
                                    GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument_outLexiqueComponentRoot,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexiqueComponentRoot.drop () ; // Release 'out' argument
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (constinArgument_inSourceFile.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 767)).reader_lastPathComponent (SOURCE_FILE ("lexiqueCompilation.galgas", 767)).reader_stringByDeletingPathExtension (SOURCE_FILE ("lexiqueCompilation.galgas", 767)), constinArgument_inSourceFile.reader_location (SOURCE_FILE ("lexiqueCompilation.galgas", 767))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 767)) ;
  const enumGalgasBool test_0 = ioArgument_ioParsedComponentStruct.reader_mParsedLexiqueComponentMap (SOURCE_FILE ("lexiqueCompilation.galgas", 768)).reader_hasKey (var_key.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 768)) COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 768)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioParsedComponentStruct.reader_mParsedLexiqueComponentMap (SOURCE_FILE ("lexiqueCompilation.galgas", 769)).method_searchKey (var_key, outArgument_outLexiqueComponentRoot, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 769)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outLexiqueComponentRoot.drop () ;
    C_String syntaxDirectedTranslationResult_36570 ;
    cGrammar_lexiqueLL_31_grammar::_performSourceFileParsing_ (inCompiler, syntaxDirectedTranslationResult_36570, constinArgument_inSourceFile, outArgument_outLexiqueComponentRoot  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 771)) ;
    {
    ioArgument_ioParsedComponentStruct.mAttribute_mParsedLexiqueComponentMap.modifier_insertKey (var_key, outArgument_outLexiqueComponentRoot, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 772)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'compileLexiqueComponentFromAST'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileLexiqueComponentFromAST (const GALGAS_string constinArgument_inComponentNameFromSourceFilePath,
                                             const GALGAS_string constinArgument_inOutputDirectory,
                                             const GALGAS_galgas_33_LexiqueComponentListAST_2D_element constinArgument_inLexiqueComponentRoot,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_componentName = constinArgument_inLexiqueComponentRoot.reader_mLexiqueComponentName (SOURCE_FILE ("lexiqueCompilation.galgas", 785)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_componentName.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 786)).objectCompare (constinArgument_inComponentNameFromSourceFilePath)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_componentName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("GALGAS checks the component name ('").add_operation (var_componentName.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 788)).add_operation (GALGAS_string ("') against the source file base name ('"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 788)).add_operation (constinArgument_inComponentNameFromSourceFilePath, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 789)).add_operation (GALGAS_string ("'): they should be identical"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 789))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 787)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 792)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap, inCompiler  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 795)) ;
  }
  cEnumerator_externRoutineListAST enumerator_38108 (constinArgument_inLexiqueComponentRoot.reader_mExternRoutineList (SOURCE_FILE ("lexiqueCompilation.galgas", 797)), kEnumeration_up) ;
  while (enumerator_38108.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("lexiqueCompilation.galgas", 798)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_38247 (enumerator_38108.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_38247.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_38247.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 801)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (enumerator_38247.current_mPassingMode (HERE), var_lexicalFormalArgumentType, enumerator_38247.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 802))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 802)) ;
      enumerator_38247.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap.modifier_insertKey (enumerator_38108.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList, enumerator_38108.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 804)) ;
    }
    enumerator_38108.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 808)) ;
  }
  cEnumerator_externFunctionListAST enumerator_38891 (constinArgument_inLexiqueComponentRoot.reader_mExternFunctionList (SOURCE_FILE ("lexiqueCompilation.galgas", 810)), kEnumeration_up) ;
  while (enumerator_38891.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("lexiqueCompilation.galgas", 811)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_39033 (enumerator_38891.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_39033.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_39033.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 814)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalFormalArgumentType, enumerator_39033.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 815))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 815)) ;
      enumerator_39033.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType ;
    var_lexicalTypeMap.method_searchKey (enumerator_38891.current_mReturnedTypeName (HERE), var_returnedArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 818)) ;
    {
    var_lexicalFunctionMap.modifier_insertKey (enumerator_38891.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList, var_returnedArgumentType, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 819)) ;
    }
    enumerator_38891.gotoNextObject () ;
  }
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexiqueCompilation.galgas", 834)) ;
  temp_2.addAssign_operation (GALGAS_string ("unicodeToLower")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 823)) ;
  temp_2.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 824)) ;
  temp_2.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 825)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 826)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 827)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 828)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 829)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 830)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 831)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 832)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 833)) ;
  temp_2.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 834)) ;
  GALGAS_stringset var_externUnicodeTestFunctions = temp_2 ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext = GALGAS_lexiqueAnalysisContext::constructor_new (var_componentName.mAttribute_string, var_lexicalRoutineMap, var_lexicalFunctionMap, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 841)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 842)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("lexiqueCompilation.galgas", 843)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 844)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 845)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexiqueCompilation.galgas", 846)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("lexiqueCompilation.galgas", 847)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 848)), var_externUnicodeTestFunctions  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 837)) ;
  GALGAS_uint var_styleIndex = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_40528 (constinArgument_inLexiqueComponentRoot.reader_mLexicalStyleList (SOURCE_FILE ("lexiqueCompilation.galgas", 853)), kEnumeration_up) ;
  while (enumerator_40528.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mStyleMap.modifier_insertKey (enumerator_40528.current_mName (HERE), enumerator_40528.current_mComment (HERE), var_styleIndex, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 854)) ;
    }
    var_styleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 855)) ;
    enumerator_40528.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, constinArgument_inLexiqueComponentRoot.reader_mLexicalAttributeList (SOURCE_FILE ("lexiqueCompilation.galgas", 860)), var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 858)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_40978 (constinArgument_inLexiqueComponentRoot.reader_mTerminalDeclarationList (SOURCE_FILE ("lexiqueCompilation.galgas", 864)), kEnumeration_up) ;
  while (enumerator_40978.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_40978.current_mStyle (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 866)).reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 866)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_lstring joker_41117 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("lexiqueCompilation.galgas", 867)).method_searchKey (enumerator_40978.current_mStyle (HERE), joker_41117, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 867)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexiqueCompilation.galgas", 869)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_41240 (enumerator_40978.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_41240.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_41240.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 872)) ;
      var_argumentTypeList.addAssign_operation (enumerator_41240.current_mFormalSelector (HERE), enumerator_41240.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 873)) ;
      enumerator_41240.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_40978.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 875)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_41659 (enumerator_40978.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_41659.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_41659.current_mValue (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 879)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const enumGalgasBool test_5 = var_atomicSelection.boolEnum () ;
        if (kBoolTrue == test_5) {
          var_atomicSelection = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_5) {
          GALGAS_location location_6 (enumerator_41659.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 883)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_41659.current_mValue (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 885)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_location location_8 (enumerator_41659.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 886)) ;
        }else if (kBoolFalse == test_7) {
          const enumGalgasBool test_9 = var_isEndOfTemplateMark.boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_location location_10 (enumerator_41659.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 888)) ;
          }else if (kBoolFalse == test_9) {
            var_isEndOfTemplateMark = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_41659.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_40978.current_mName (HERE), var_argumentTypeList, enumerator_40978.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 896)), var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 893)) ;
    enumerator_40978.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_42469 (constinArgument_inLexiqueComponentRoot.reader_mLexicalListDeclarationList (SOURCE_FILE ("lexiqueCompilation.galgas", 901)), kEnumeration_up) ;
  while (enumerator_42469.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, enumerator_42469.current_mStyle (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 903)).reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 903)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_lstring joker_42608 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("lexiqueCompilation.galgas", 904)).method_searchKey (enumerator_42469.current_mStyle (HERE), joker_42608, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 904)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexiqueCompilation.galgas", 906)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_42731 (enumerator_42469.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_42731.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_42731.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 909)) ;
      var_argumentTypeList.addAssign_operation (enumerator_42731.current_mFormalSelector (HERE), enumerator_42731.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 910)) ;
      enumerator_42731.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 912)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("lexiqueCompilation.galgas", 913)) ;
    cEnumerator_lexicalListEntryListAST enumerator_43128 (enumerator_42469.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_43128.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage = enumerator_42469.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 915)).reader_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_43128.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 915)) ;
      GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_43367 (enumerator_43128.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_43367.hasCurrentObject ()) {
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_43367.current_mValue (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 919)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const enumGalgasBool test_13 = var_atomicSelection.boolEnum () ;
          if (kBoolTrue == test_13) {
            var_atomicSelection = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_13) {
            GALGAS_location location_14 (enumerator_43367.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_14, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 923)) ;
          }
        }else if (kBoolFalse == test_12) {
          const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_43367.current_mValue (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 925)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            GALGAS_location location_16 (enumerator_43367.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_16, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 926)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = var_isEndOfTemplateMark.boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_location location_18 (enumerator_43367.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_18, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 928)) ;
            }else if (kBoolFalse == test_17) {
              var_isEndOfTemplateMark = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_43367.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_43128.current_mTerminalSpelling (HERE), var_argumentTypeList, var_syntaxErrorMessage, var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 933)) ;
      {
      var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_43128.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 940)) ;
      }
      {
      var_lexicalTokenListMap.modifier_insertKey (enumerator_43128.current_mEntrySpelling (HERE), enumerator_43128.current_mTerminalSpelling (HERE), enumerator_43128.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 941)) ;
      }
      var_tokenSortedlist.addAssign_operation (enumerator_43128.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 942)).reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 942)), enumerator_43128.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 942)), enumerator_43128.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 942))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 942)) ;
      var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_43128.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 943))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 943)) ;
      enumerator_43128.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.modifier_insertKey (enumerator_42469.current_mName (HERE), var_lexicalTokenListMap, var_tokenSortedlist, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 945)) ;
    }
    enumerator_42469.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_44781 (constinArgument_inLexiqueComponentRoot.reader_mLexicalMessageDeclarationList (SOURCE_FILE ("lexiqueCompilation.galgas", 948)), kEnumeration_up) ;
  while (enumerator_44781.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_insertKey (enumerator_44781.current_mMessageName (HERE), enumerator_44781.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 949)) ;
    }
    enumerator_44781.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_44993 (constinArgument_inLexiqueComponentRoot.reader_mLexicalRuleList (SOURCE_FILE ("lexiqueCompilation.galgas", 952)), kEnumeration_up) ;
  while (enumerator_44993.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_44993.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 953)) ;
    enumerator_44993.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_45185 (var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("lexiqueCompilation.galgas", 956)), kEnumeration_up) ;
  while (enumerator_45185.hasCurrentObject ()) {
    const enumGalgasBool test_19 = enumerator_45185.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 957)).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_location location_20 (enumerator_45185.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_20, GALGAS_string ("unused message")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 958)) ;
    }
    enumerator_45185.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_45390 (constinArgument_inLexiqueComponentRoot.reader_mTemplateDelimitorList (SOURCE_FILE ("lexiqueCompilation.galgas", 962)), kEnumeration_up) ;
  while (enumerator_45390.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_45390.current_mStartString (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 963))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 963)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_45390.current_mEndString (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 964))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 964)) ;
    GALGAS_bool var_preservesStartDelimiter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_45611 (enumerator_45390.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_45611.hasCurrentObject ()) {
      const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, enumerator_45611.current_mValue (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 967)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (enumerator_45611.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_22, GALGAS_string ("only the 'preserved' feature is allowed here")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 968)) ;
      }else if (kBoolFalse == test_21) {
        const enumGalgasBool test_23 = var_preservesStartDelimiter.boolEnum () ;
        if (kBoolTrue == test_23) {
          GALGAS_location location_24 (enumerator_45611.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_24, GALGAS_string ("the 'preserved' feature is already set")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 970)) ;
        }else if (kBoolFalse == test_23) {
          var_preservesStartDelimiter = GALGAS_bool (true) ;
        }
      }
      enumerator_45611.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_45390.current_mStartString (HERE), enumerator_45390.current_mEndString (HERE), var_preservesStartDelimiter  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 975)) ;
    enumerator_45390.gotoNextObject () ;
  }
  const enumGalgasBool test_25 = constinArgument_inLexiqueComponentRoot.reader_mIndexingDirectory (SOURCE_FILE ("lexiqueCompilation.galgas", 978)).mAttribute_location.reader_isNowhere (SOURCE_FILE ("lexiqueCompilation.galgas", 978)).boolEnum () ;
  if (kBoolTrue == test_25) {
    cEnumerator_indexingListAST enumerator_46192 (constinArgument_inLexiqueComponentRoot.reader_mIndexingListAST (SOURCE_FILE ("lexiqueCompilation.galgas", 979)), kEnumeration_up) ;
    while (enumerator_46192.hasCurrentObject ()) {
      GALGAS_location location_26 (enumerator_46192.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_26, GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 980)) ;
      enumerator_46192.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexiqueCompilation.galgas", 983)) ;
  cEnumerator_indexingListAST enumerator_46402 (constinArgument_inLexiqueComponentRoot.reader_mIndexingListAST (SOURCE_FILE ("lexiqueCompilation.galgas", 984)), kEnumeration_up) ;
  while (enumerator_46402.hasCurrentObject ()) {
    const enumGalgasBool test_27 = var_indexNameSet.reader_hasKey (enumerator_46402.current_mIndexName (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 985)) COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 985)).boolEnum () ;
    if (kBoolTrue == test_27) {
      GALGAS_location location_28 (enumerator_46402.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_28, GALGAS_string ("the '").add_operation (enumerator_46402.current_mIndexName (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 986)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 986))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 986)) ;
    }
    var_indexNameSet.addAssign_operation (enumerator_46402.current_mIndexName (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 988))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 988)) ;
    enumerator_46402.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_46718 (constinArgument_inLexiqueComponentRoot.reader_mTemplateReplacementList (SOURCE_FILE ("lexiqueCompilation.galgas", 991)), kEnumeration_up) ;
  while (enumerator_46718.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_46718.current_mMatchString (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 992))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 992)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_46718.current_mReplacementString (HERE).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 993))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 993)) ;
    enumerator_46718.gotoNextObject () ;
  }
  GALGAS_string var_lexiqueClassName = var_componentName.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 997)) ;
  const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("lexiqueCompilation.galgas", 999)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_29) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_lexiqueClassName.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1002)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("lexiqueCompilation.galgas", 1007)), var_lexiqueAnalysisContext, constinArgument_inLexiqueComponentRoot.mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1006))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("lexiqueCompilation.galgas", 1013)), constinArgument_inLexiqueComponentRoot.reader_mLexicalListDeclarationList (SOURCE_FILE ("lexiqueCompilation.galgas", 1014)), var_lexiqueAnalysisContext, constinArgument_inLexiqueComponentRoot.reader_mIndexingListAST (SOURCE_FILE ("lexiqueCompilation.galgas", 1016)) COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1012))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1000)) ;
    }
  }
  const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("lexiqueCompilation.galgas", 1022)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_30) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_lexiqueClassName.add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1025)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("lexiqueCompilation.galgas", 1030)), var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 1031)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("lexiqueCompilation.galgas", 1032)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("lexiqueCompilation.galgas", 1033)), var_lexiqueAnalysisContext.reader_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCompilation.galgas", 1034)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("lexiqueCompilation.galgas", 1035)), constinArgument_inLexiqueComponentRoot.reader_mLexicalRuleList (SOURCE_FILE ("lexiqueCompilation.galgas", 1036)), var_lexiqueAnalysisContext, constinArgument_inLexiqueComponentRoot COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1029))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1023)) ;
    }
  }
  const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("lexiqueCompilation.galgas", 1046)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_31) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_lexiqueClassName.add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1049)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1053))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1058))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1047)) ;
    }
  }
  const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("lexiqueCompilation.galgas", 1066)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_32) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_lexiqueClassName.add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1069)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, var_lexiqueClassName.add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1074)), var_lexiqueClassName, var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 1076)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("lexiqueCompilation.galgas", 1077)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("lexiqueCompilation.galgas", 1078)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("lexiqueCompilation.galgas", 1079)), constinArgument_inLexiqueComponentRoot.reader_mLexicalRuleList (SOURCE_FILE ("lexiqueCompilation.galgas", 1080)), var_lexiqueAnalysisContext, constinArgument_inLexiqueComponentRoot.mAttribute_mTemplateReplacementList, constinArgument_inLexiqueComponentRoot.mAttribute_mIndexingDirectory.mAttribute_string, constinArgument_inLexiqueComponentRoot.mAttribute_mIndexingListAST, constinArgument_inLexiqueComponentRoot.mAttribute_mLexicalStyleList, constinArgument_inLexiqueComponentRoot.mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1073))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1067)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'compileLexiqueComponentFromSource'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileLexiqueComponentFromSource (const GALGAS_lstring constinArgument_inSourceFile,
                                                const GALGAS_string constinArgument_inOutputDirectory,
                                                GALGAS_parsedComponentStruct & ioArgument_ioParsedComponentStruct,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_LexiqueComponentListAST_2D_element var_lexiqueComponentRoot ;
  {
  routine_parseLexiqueComponent (constinArgument_inSourceFile, ioArgument_ioParsedComponentStruct, var_lexiqueComponentRoot, inCompiler  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1104)) ;
  }
  {
  routine_compileLexiqueComponentFromAST (constinArgument_inSourceFile.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 1110)).reader_lastPathComponent (SOURCE_FILE ("lexiqueCompilation.galgas", 1110)).reader_stringByDeletingPathExtension (SOURCE_FILE ("lexiqueCompilation.galgas", 1110)), constinArgument_inOutputDirectory, var_lexiqueComponentRoot, inCompiler  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 1109)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'optionGenerationTemplates'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone2'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_32_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_0_DEFINED\n"
    "#define " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_0_DEFINED\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"command_line_interface/C_BoolCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_UIntCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringListCommandLineOption.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone3'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               Bool options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_635_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_635 (in_BOOL_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_635.hasCurrentObject ()) {
      result << "extern C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_635.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_635_.increment () ;
      enumerator_635.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               UInt options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1412_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1412 (in_UINT_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_1412.hasCurrentObject ()) {
      result << "extern C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_1412.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1412_.increment () ;
      enumerator_1412.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String options                                                                         *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_2191_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2191 (in_STRING_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_2191.hasCurrentObject ()) {
      result << "extern C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_2191.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_2191_.increment () ;
      enumerator_2191.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String List options                                                                    *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_2977_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2977 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_2977.hasCurrentObject ()) {
      result << "extern C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_2977.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_2977_.increment () ;
      enumerator_2977.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'optionGenerationTemplates optionImplementation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementation (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               Bool options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_673_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_673 (in_BOOL_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_673.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 10)).stringValue () ;
      result << "_" ;
      result << enumerator_673.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 10)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_673.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_673.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation.galgasTemplate", 12)).reader_string (SOURCE_FILE ("option-implementation.galgasTemplate", 12)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_673.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 13)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_673.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 14)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_673_.increment () ;
      enumerator_673.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               UInt options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1795_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1795 (in_UINT_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_1795.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 23)).stringValue () ;
      result << "_" ;
      result << enumerator_1795.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 23)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1795.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1795.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation.galgasTemplate", 25)).reader_string (SOURCE_FILE ("option-implementation.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1795.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 26)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1795.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 27)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1795.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1795_.increment () ;
      enumerator_1795.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String options                                                                         *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_2984_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2984 (in_STRING_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_2984.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 37)).stringValue () ;
      result << "_" ;
      result << enumerator_2984.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 37)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2984.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2984.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation.galgasTemplate", 39)).reader_string (SOURCE_FILE ("option-implementation.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2984.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 40)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2984.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 41)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2984.current_mDefaultValue (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 42)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2984_.increment () ;
      enumerator_2984.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String List options                                                                    *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_4201_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_4201 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_4201.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 51)).stringValue () ;
      result << "_" ;
      result << enumerator_4201.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation.galgasTemplate", 51)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_4201.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4201.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation.galgasTemplate", 53)).reader_string (SOURCE_FILE ("option-implementation.galgasTemplate", 53)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4201.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 54)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4201.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation.galgasTemplate", 55)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_4201_.increment () ;
      enumerator_4201.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               Bool options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_634_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_634 (in_BOOL_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_634.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_634.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_634.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).reader_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_634_.increment () ;
      enumerator_634.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               UInt options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1756_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1756 (in_UINT_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_1756.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1756.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1756.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).reader_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1756_.increment () ;
      enumerator_1756.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String options                                                                         *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_2945_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2945 (in_STRING_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_2945.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2945.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2945.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).reader_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mDefaultValue (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2945_.increment () ;
      enumerator_2945.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String List options                                                                    *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_4162_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_4162 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_4162.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_4162.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_4162.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).reader_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_4162_.increment () ;
      enumerator_4162.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "#define " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue () ;
  result << " (NSMutableArray * ioBoolOptionArray,\n"
    "                                                       NSMutableArray * ioUIntOptionArray,\n"
    "                                                       NSMutableArray * ioStringOptionArray,\n"
    "                                                       NSMutableArray * ioStringListOptionArray) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import \"" ;
  result << in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue () ;
  result << " (NSMutableArray * ioBoolOptionArray,\n"
    "                                                       NSMutableArray * ioUIntOptionArray,\n"
    "                                                       NSMutableArray * ioStringOptionArray,\n"
    "                                                       NSMutableArray * ioStringListOptionArray) {\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.reader_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.reader_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.reader_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.reader_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  OC_GGS_CommandLineOption * option ;\n" ;
  }else if (kBoolFalse == test_0) {
  }
  GALGAS_uint index_915_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_915 (in_BOOL_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_915.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_915.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_915.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).reader_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_915.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_915.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
      result << "\n"
        "    defaultValue:@\"\"\n"
        "  ] ;\n"
        "  [ioBoolOptionArray addObject:option] ;\n" ;
      index_915_.increment () ;
      enumerator_915.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1380_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1380 (in_UINT_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_1380.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1380.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1380.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).reader_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1380.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1380.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1380.current_mDefaultValue (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioUIntOptionArray addObject:option] ;\n" ;
      index_1380_.increment () ;
      enumerator_1380.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1882_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1882 (in_STRING_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_1882.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1882.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1882.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).reader_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1882.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1882.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1882.current_mDefaultValue (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringOptionArray addObject:option] ;\n" ;
      index_1882_.increment () ;
      enumerator_1882.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2391_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2391 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kEnumeration_up) ;
    while (enumerator_2391.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2391.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2391.current_mOptionChar (HERE).reader_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).reader_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2391.current_mOptionString (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2391.current_mComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2391.current_mDefaultValue (HERE).reader_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringListOptionArray addObject:option] ;\n" ;
      index_2391_.increment () ;
      enumerator_2391.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfOptionComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfOptionComponent (const GALGAS_optionComponentAST constinArgument_inOptionComponentRoot,
                                                GALGAS_commandLineOptionMap & outArgument_outBoolOptionMap,
                                                GALGAS_commandLineOptionMap & outArgument_outUIntOptionMap,
                                                GALGAS_commandLineOptionMap & outArgument_outStringOptionMap,
                                                GALGAS_commandLineOptionMap & outArgument_outStringListOptionMap,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBoolOptionMap.drop () ; // Release 'out' argument
  outArgument_outUIntOptionMap.drop () ; // Release 'out' argument
  outArgument_outStringOptionMap.drop () ; // Release 'out' argument
  outArgument_outStringListOptionMap.drop () ; // Release 'out' argument
  outArgument_outBoolOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  outArgument_outUIntOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 82)) ;
  outArgument_outStringOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 83)) ;
  outArgument_outStringListOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 84)) ;
  GALGAS_stringset var_optionNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("optionCompilation.galgas", 85)) ;
  cEnumerator_commandLineOptionListAST enumerator_4844 (constinArgument_inOptionComponentRoot.reader_mOptions (SOURCE_FILE ("optionCompilation.galgas", 86)), kEnumeration_up) ;
  while (enumerator_4844.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_optionNameSet.reader_hasKey (enumerator_4844.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 87)) COMMA_SOURCE_FILE ("optionCompilation.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_4844.current_mOptionInternalName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_4844.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 88)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 88))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 88)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_4844.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 89)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        outArgument_outBoolOptionMap.modifier_insertKey (enumerator_4844.current_mOptionInternalName (HERE), enumerator_4844.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("optionCompilation.galgas", 92)), enumerator_4844.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 93)), enumerator_4844.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 94)), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 90)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_4844.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 97)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_4844.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("an @bool option cannot have a default value (default value is allways false)")  COMMA_SOURCE_FILE ("optionCompilation.galgas", 98)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4844.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 100)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_4844.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 106)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("0") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = enumerator_4844.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 106)) ;
          }
          outArgument_outUIntOptionMap.modifier_insertKey (enumerator_4844.current_mOptionInternalName (HERE), enumerator_4844.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("optionCompilation.galgas", 103)), enumerator_4844.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 104)), enumerator_4844.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 105)), temp_6, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
          }
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_4844.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 108)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_location location_9 (enumerator_4844.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_9, GALGAS_string ("an @uint option default value cannot be an @string value")  COMMA_SOURCE_FILE ("optionCompilation.galgas", 109)) ;
          }
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_4844.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 111)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            outArgument_outStringOptionMap.modifier_insertKey (enumerator_4844.current_mOptionInternalName (HERE), enumerator_4844.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("optionCompilation.galgas", 114)), enumerator_4844.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 115)), enumerator_4844.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 116)), enumerator_4844.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
            }
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_4844.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 119)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              GALGAS_location location_12 (enumerator_4844.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_12, GALGAS_string ("an @string option default value cannot be an @uint value")  COMMA_SOURCE_FILE ("optionCompilation.galgas", 120)) ;
            }
          }else if (kBoolFalse == test_10) {
            const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_4844.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 122)).objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
            if (kBoolTrue == test_13) {
              {
              outArgument_outStringListOptionMap.modifier_insertKey (enumerator_4844.current_mOptionInternalName (HERE), enumerator_4844.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("optionCompilation.galgas", 125)), enumerator_4844.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 126)), enumerator_4844.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 127)), enumerator_4844.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("optionCompilation.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)) ;
              }
              const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_4844.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 130)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                GALGAS_location location_15 (enumerator_4844.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                inCompiler->emitSemanticError (location_15, GALGAS_string ("an @stringlist option cannot accept default value")  COMMA_SOURCE_FILE ("optionCompilation.galgas", 131)) ;
              }
            }else if (kBoolFalse == test_13) {
              GALGAS_location location_16 (enumerator_4844.current_mOptionTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_16, GALGAS_string ("only the @bool, @uint, @string or @stringlist types are allowed here")  COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
            }
          }
        }
      }
    }
    var_optionNameSet.addAssign_operation (enumerator_4844.current_mOptionInternalName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("optionCompilation.galgas", 136)) ;
    enumerator_4844.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'parseOptionComponent'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseOptionComponent (const GALGAS_lstring constinArgument_inSourceFile,
                                   GALGAS_parsedComponentStruct & ioArgument_ioParsedComponentStruct,
                                   GALGAS_lstring & outArgument_outOptionComponentName,
                                   GALGAS_commandLineOptionMap & outArgument_outBoolOptionMap,
                                   GALGAS_commandLineOptionMap & outArgument_outUIntOptionMap,
                                   GALGAS_commandLineOptionMap & outArgument_outStringOptionMap,
                                   GALGAS_commandLineOptionMap & outArgument_outStringListOptionMap,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentName.drop () ; // Release 'out' argument
  outArgument_outBoolOptionMap.drop () ; // Release 'out' argument
  outArgument_outUIntOptionMap.drop () ; // Release 'out' argument
  outArgument_outStringOptionMap.drop () ; // Release 'out' argument
  outArgument_outStringListOptionMap.drop () ; // Release 'out' argument
  outArgument_outOptionComponentName = GALGAS_lstring::constructor_new (constinArgument_inSourceFile.reader_string (SOURCE_FILE ("optionCompilation.galgas", 153)).reader_lastPathComponent (SOURCE_FILE ("optionCompilation.galgas", 153)).reader_stringByDeletingPathExtension (SOURCE_FILE ("optionCompilation.galgas", 153)), constinArgument_inSourceFile.reader_location (SOURCE_FILE ("optionCompilation.galgas", 153))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 153)) ;
  const enumGalgasBool test_0 = ioArgument_ioParsedComponentStruct.reader_mParsedOptionComponentMap (SOURCE_FILE ("optionCompilation.galgas", 154)).reader_hasKey (outArgument_outOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 154)) COMMA_SOURCE_FILE ("optionCompilation.galgas", 154)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioParsedComponentStruct.mAttribute_mParsedOptionComponentMap.method_searchKey (outArgument_outOptionComponentName, outArgument_outBoolOptionMap, outArgument_outUIntOptionMap, outArgument_outStringOptionMap, outArgument_outStringListOptionMap, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 155)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_optionComponentAST var_optionComponentAST ;
    var_optionComponentAST.drop () ;
    C_String syntaxDirectedTranslationResult_8303 ;
    cGrammar_optionLL_31_grammar::_performSourceFileParsing_ (inCompiler, syntaxDirectedTranslationResult_8303, constinArgument_inSourceFile, var_optionComponentAST  COMMA_SOURCE_FILE ("optionCompilation.galgas", 163)) ;
    GALGAS_lstring var_componentName = var_optionComponentAST.reader_mOptionComponentName (SOURCE_FILE ("optionCompilation.galgas", 165)) ;
    GALGAS_string var_basename = constinArgument_inSourceFile.reader_string (SOURCE_FILE ("optionCompilation.galgas", 166)).reader_lastPathComponent (SOURCE_FILE ("optionCompilation.galgas", 166)).reader_stringByDeletingPathExtension (SOURCE_FILE ("optionCompilation.galgas", 166)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_componentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 167)).objectCompare (var_basename)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (var_componentName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_2, GALGAS_string ("GALGAS checks the component name ('").add_operation (var_componentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 169)).add_operation (GALGAS_string ("') against the source file base name ('"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 169)).add_operation (var_basename, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 170)).add_operation (GALGAS_string ("'): they should be the same"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 170))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 168)) ;
    }
    GALGAS_string var_baseName = constinArgument_inSourceFile.reader_string (SOURCE_FILE ("optionCompilation.galgas", 173)).reader_lastPathComponent (SOURCE_FILE ("optionCompilation.galgas", 173)).reader_stringByDeletingPathExtension (SOURCE_FILE ("optionCompilation.galgas", 173)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_optionComponentAST.reader_mOptionComponentName (SOURCE_FILE ("optionCompilation.galgas", 174)).reader_string (SOURCE_FILE ("optionCompilation.galgas", 174)).objectCompare (var_baseName)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (var_optionComponentAST.reader_mOptionComponentName (SOURCE_FILE ("optionCompilation.galgas", 175)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the component name is '").add_operation (var_optionComponentAST.reader_mOptionComponentName (SOURCE_FILE ("optionCompilation.galgas", 176)).reader_string (SOURCE_FILE ("optionCompilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 175)).add_operation (GALGAS_string ("' should be the file base name '"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 176)).add_operation (var_baseName, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 176)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 177))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 175)) ;
    }
    {
    routine_semanticAnalysisOfOptionComponent (var_optionComponentAST, outArgument_outBoolOptionMap, outArgument_outUIntOptionMap, outArgument_outStringOptionMap, outArgument_outStringListOptionMap, inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 180)) ;
    }
    {
    ioArgument_ioParsedComponentStruct.mAttribute_mParsedOptionComponentMap.modifier_insertKey (outArgument_outOptionComponentName, outArgument_outBoolOptionMap, outArgument_outUIntOptionMap, outArgument_outStringOptionMap, outArgument_outStringListOptionMap, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 188)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'compileOptionComponentAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileOptionComponentAST (const GALGAS_string constinArgument_inOutputDirectory,
                                        const GALGAS_lstring constinArgument_inOptionComponentName,
                                        const GALGAS_commandLineOptionMap constinArgument_boolOptionMap,
                                        const GALGAS_commandLineOptionMap constinArgument_uintOptionMap,
                                        const GALGAS_commandLineOptionMap constinArgument_stringOptionMap,
                                        const GALGAS_commandLineOptionMap constinArgument_stringListOptionMap,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 209)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 212)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 212)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_32_ (inCompiler, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 217)) COMMA_SOURCE_FILE ("optionCompilation.galgas", 216))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 221)), constinArgument_boolOptionMap, constinArgument_uintOptionMap, constinArgument_stringOptionMap, constinArgument_stringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 220))).add_operation (GALGAS_string ("\n"
      "#endif\n"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 226)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 210)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 231)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 234)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 234)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementation (inCompiler, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 239)), constinArgument_boolOptionMap, constinArgument_uintOptionMap, constinArgument_stringOptionMap, constinArgument_stringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 238))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 232)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 251)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 254)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 254)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 259)) COMMA_SOURCE_FILE ("optionCompilation.galgas", 258))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 263)) COMMA_SOURCE_FILE ("optionCompilation.galgas", 262))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 252)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 269)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, constinArgument_inOptionComponentName.reader_string (SOURCE_FILE ("optionCompilation.galgas", 272)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 272)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, constinArgument_inOptionComponentName.mAttribute_string.add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 277)), constinArgument_inOptionComponentName.mAttribute_string, constinArgument_boolOptionMap, constinArgument_uintOptionMap, constinArgument_stringOptionMap, constinArgument_stringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 276))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 270)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'compileOptionComponentFromSourceFile'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileOptionComponentFromSourceFile (const GALGAS_lstring constinArgument_inSourceFile,
                                                   const GALGAS_string constinArgument_inOutputDirectory,
                                                   GALGAS_parsedComponentStruct & ioArgument_ioParsedComponentStruct,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_optionComponentName ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  GALGAS_commandLineOptionMap var_stringListOptionMap ;
  {
  routine_parseOptionComponent (constinArgument_inSourceFile, ioArgument_ioParsedComponentStruct, var_optionComponentName, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)) ;
  }
  {
  routine_compileOptionComponentAST (constinArgument_inOutputDirectory, var_optionComponentName, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 308)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'guiGenerationTemplates'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'guiGenerationTemplates gui_implementation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (C_Compiler * inCompiler,
                                                                                const GALGAS_bool & in_GENERATE_5F_FOR_5F_GALGAS_33_,
                                                                                const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"OC_Token.h\"\n"
    "#import \"F_CocoaWrapperForGalgas.h\"\n" ;
  GALGAS_uint index_101_ (0) ;
  if (in_GUI_5F_CONTEXT.reader_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 4)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_101 (in_GUI_5F_CONTEXT.reader_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 4)), kEnumeration_up) ;
    while (enumerator_101.hasCurrentObject ()) {
      result << "#import \"" ;
      const enumGalgasBool test_0 = in_GENERATE_5F_FOR_5F_GALGAS_33_.boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "lexique-" ;
      }else if (kBoolFalse == test_0) {
      }
      result << enumerator_101.current_mLexiqueClassName (HERE).stringValue () ;
      result << "-cocoa.m\"\n" ;
      index_101_.increment () ;
      enumerator_101.gotoNextObject () ;
    }
  }
  GALGAS_uint index_237_ (0) ;
  if (in_GUI_5F_CONTEXT.reader_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 7)).isValid ()) {
    cEnumerator_stringlist enumerator_237 (in_GUI_5F_CONTEXT.reader_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 7)), kEnumeration_up) ;
    while (enumerator_237.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_237.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_237_.increment () ;
      enumerator_237.gotoNextObject () ;
    }
  }
  result << "\n"
    "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
    "  #import \"user_default_colors.h\"\n"
    "#endif\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#pragma mark Nibs\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.reader_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 25)).reader_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_1) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1336_ (0) ;
    if (in_GUI_5F_CONTEXT.reader_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 33)).isValid ()) {
      cEnumerator_stringlist enumerator_1336 (in_GUI_5F_CONTEXT.reader_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 33)), kEnumeration_up) ;
      while (enumerator_1336.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1336.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1336.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1336_.increment () ;
        enumerator_1336.gotoNextObject () ;
      }
    }
    result << "    nil\n"
      "  ] ;\n"
      "}\n" ;
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#pragma mark Command Line Options\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                       Command Line Options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_2261_ (0) ;
  if (in_GUI_5F_CONTEXT.reader_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 53)).isValid ()) {
    cEnumerator_stringlist enumerator_2261 (in_GUI_5F_CONTEXT.reader_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 53)), kEnumeration_up) ;
    while (enumerator_2261.hasCurrentObject ()) {
      result << "#import \"" ;
      const enumGalgasBool test_2 = in_GENERATE_5F_FOR_5F_GALGAS_33_.boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "option-" ;
      }else if (kBoolFalse == test_2) {
      }
      result << enumerator_2261.current_mValue (HERE).stringValue () ;
      result << "-cocoa.m\"\n" ;
      index_2261_.increment () ;
      enumerator_2261.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2752_ (0) ;
  if (in_GUI_5F_CONTEXT.reader_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 64)).isValid ()) {
    cEnumerator_stringlist enumerator_2752 (in_GUI_5F_CONTEXT.reader_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 64)), kEnumeration_up) ;
    while (enumerator_2752.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2752.current_mValue (HERE).reader_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2752_.increment () ;
      enumerator_2752.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_2953_ (0) ;
  if (in_GUI_5F_CONTEXT.reader_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 69)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_2953 (in_GUI_5F_CONTEXT.reader_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 69)), kEnumeration_up) ;
    while (enumerator_2953.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_2953.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//                                                                                                                     *\n"
        "//                     P O P    U P    L I S T    D A T A                                                              *\n"
        "//                                                                                                                     *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n" ;
      GALGAS_uint index_3792_ (0) ;
      if (enumerator_2953.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3792 (enumerator_2953.current_mLabels (HERE), kEnumeration_up) ;
        while (enumerator_3792.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_2953.current_mLexiqueClassName (HERE).reader_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 78)).stringValue () ;
          result << "_" ;
          result << enumerator_3792.current_mLocation (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 78)).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 78)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_3792.current_mTerminalList (HERE).reader_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 78)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 78)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 78)).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 78)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_3792.current_mLeadingCharacterStrippedCount (HERE).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 79)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4090_ (0) ;
          if (enumerator_3792.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4090 (enumerator_3792.current_mTerminalList (HERE), kEnumeration_up) ;
            while (enumerator_4090.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_2953.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4090.current_mTerminal (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 81)).stringValue () ;
              result << ", " ;
              result << enumerator_4090.current_mDisplayFlags (HERE).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 81)).stringValue () ;
              result << ",\n" ;
              index_4090_.increment () ;
              enumerator_4090.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_3792_.increment () ;
          enumerator_3792.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_2953.current_mLexiqueClassName (HERE).reader_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 86)).stringValue () ;
      result << " [" ;
      result << enumerator_2953.current_mLabels (HERE).reader_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 86)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 86)).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 86)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_4390_ (0) ;
      if (enumerator_2953.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4390 (enumerator_2953.current_mLabels (HERE), kEnumeration_up) ;
        while (enumerator_4390.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_2953.current_mLexiqueClassName (HERE).reader_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 88)).stringValue () ;
          result << "_" ;
          result << enumerator_4390.current_mLocation (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 88)).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 88)).stringValue () ;
          result << ",\n" ;
          index_4390_.increment () ;
          enumerator_4390.gotoNextObject () ;
        }
      }
      result << "  NULL\n"
        "} ;\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//                                                                                                                     *\n"
        "//                            Lexique interface                                                                        *\n"
        "//                                                                                                                     *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "@interface OC_Tokenizer_" ;
      result << enumerator_2953.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_2953.current_mLexiqueClassName (HERE).stringValue () ;
      result << " {\n"
        "\n"
        "}\n"
        "\n"
        "- (NSString *) blockComment ;\n"
        "\n"
        "- (const UInt16 * *) popupListData ;\n"
        "\n"
        "- (NSUInteger) textMacroCount ;\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) tabItemTitle ;\n"
        "\n"
        "@end\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "@implementation OC_Tokenizer_" ;
      result << enumerator_2953.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_2953.current_mBlockComment (HERE).reader_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_2953.current_mLexiqueClassName (HERE).reader_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 114)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_2953.current_mTextMacroList (HERE).reader_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 118)).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 118)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_2953.current_mTitle (HERE).reader_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 122)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_2953.current_mTextMacroList (HERE).reader_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 126)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 126)).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 126)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7033_ (0) ;
      if (enumerator_2953.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7033 (enumerator_2953.current_mTextMacroList (HERE), kEnumeration_up) ;
        while (enumerator_7033.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7033.current_mKey (HERE).reader_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 128)).stringValue () ;
          result << ",\n" ;
          index_7033_.increment () ;
          enumerator_7033.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroTitle [inIndex] ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroContent [" ;
      result << enumerator_2953.current_mTextMacroList (HERE).reader_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).reader_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7482_ (0) ;
      if (enumerator_2953.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7482 (enumerator_2953.current_mTextMacroList (HERE), kEnumeration_up) ;
        while (enumerator_7482.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7482.current_mContents (HERE).reader_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 138)).stringValue () ;
          result << ",\n" ;
          index_7482_.increment () ;
          enumerator_7482.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroContent [inIndex] ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "@end\n"
        "\n" ;
      index_2953_.increment () ;
      enumerator_2953.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_8049_ (0) ;
  if (in_GUI_5F_CONTEXT.reader_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 153)).isValid ()) {
    cEnumerator_extensionMap enumerator_8049 (in_GUI_5F_CONTEXT.reader_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 153)), kEnumeration_up) ;
    const bool nonEmpty_enumerator_8049 = enumerator_8049.hasCurrentObject () ;
    if (nonEmpty_enumerator_8049) {
      result << "  if" ;
    }
    while (enumerator_8049.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_8049.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 155)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_8049.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_8049.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_8049_.increment () ;
      enumerator_8049.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8049) {
      result << "  }\n" ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "NSArray * tokenizers (void) {\n"
    "  return [NSArray arrayWithObjects:\n" ;
  GALGAS_uint index_8475_ (0) ;
  if (in_GUI_5F_CONTEXT.reader_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_8475 (in_GUI_5F_CONTEXT.reader_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)), kEnumeration_up) ;
    while (enumerator_8475.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_8475.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_8475_.increment () ;
      enumerator_8475.gotoNextObject () ;
    }
  }
  result << "    nil\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileGuiComponentFromAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileGuiComponentFromAST (const GALGAS_lstring constinArgument_inSourceFile,
                                         const GALGAS_string constinArgument_inOutputDirectory,
                                         const GALGAS_guiComponentAST constinArgument_inGuiComponentRoot,
                                         GALGAS_parsedComponentStruct & ioArgument_ioParsedComponentStruct,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_componentName = constinArgument_inGuiComponentRoot.reader_mGUIName (SOURCE_FILE ("guiCompilation.galgas", 88)) ;
  GALGAS_string var_basename = constinArgument_inSourceFile.reader_string (SOURCE_FILE ("guiCompilation.galgas", 89)).reader_lastPathComponent (SOURCE_FILE ("guiCompilation.galgas", 89)).reader_stringByDeletingPathExtension (SOURCE_FILE ("guiCompilation.galgas", 89)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_componentName.reader_string (SOURCE_FILE ("guiCompilation.galgas", 90)).objectCompare (var_basename)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_componentName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("GALGAS checks the component name ('").add_operation (var_componentName.reader_string (SOURCE_FILE ("guiCompilation.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 92)).add_operation (GALGAS_string ("') against the source file base name ('"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 92)).add_operation (var_basename, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 93)).add_operation (GALGAS_string ("'): they should be identical"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 93))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 91)) ;
  }
  GALGAS_guiAnalysisContext var_context = GALGAS_guiAnalysisContext::constructor_new (GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 97)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 98)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 99)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 100)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 101)), GALGAS_extensionMap::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 102)), GALGAS_importedLexiqueList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 103))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 96)) ;
  cEnumerator_lstringlist enumerator_5228 (constinArgument_inGuiComponentRoot.reader_mImportedOptionList (SOURCE_FILE ("guiCompilation.galgas", 106)), kEnumeration_up) ;
  while (enumerator_5228.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_5228.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 107)).reader_pathExtension (SOURCE_FILE ("guiCompilation.galgas", 107)).objectCompare (GALGAS_string ("gOption"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_5228.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("only an option component (path extension '.gOption') can be imported here")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 108)) ;
    }else if (kBoolFalse == test_2) {
      {
      GALGAS_lstring joker_5630_5 ; // Joker input parameter
      GALGAS_commandLineOptionMap joker_5630_4 ; // Joker input parameter
      GALGAS_commandLineOptionMap joker_5630_3 ; // Joker input parameter
      GALGAS_commandLineOptionMap joker_5630_2 ; // Joker input parameter
      GALGAS_commandLineOptionMap joker_5630_1 ; // Joker input parameter
      routine_parseOptionComponent (GALGAS_lstring::constructor_new (enumerator_5228.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 112)).reader_absolutePathFromPath (constinArgument_inSourceFile.reader_string (SOURCE_FILE ("guiCompilation.galgas", 112)).reader_stringByDeletingLastPathComponent (SOURCE_FILE ("guiCompilation.galgas", 112)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 112)), enumerator_5228.current_mValue (HERE).reader_location (SOURCE_FILE ("guiCompilation.galgas", 113))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 111)), ioArgument_ioParsedComponentStruct, joker_5630_5, joker_5630_4, joker_5630_3, joker_5630_2, joker_5630_1, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 110)) ;
      }
      var_context.mAttribute_mImportedOptionComponentList.addAssign_operation (enumerator_5228.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 117)).reader_lastPathComponent (SOURCE_FILE ("guiCompilation.galgas", 117)).reader_stringByDeletingPathExtension (SOURCE_FILE ("guiCompilation.galgas", 117))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 117)) ;
    }
    enumerator_5228.gotoNextObject () ;
  }
  cEnumerator_guiSimpleAttributeListAST enumerator_5855 (constinArgument_inGuiComponentRoot.reader_mGlobalSimpleAttributeList (SOURCE_FILE ("guiCompilation.galgas", 121)), kEnumeration_up) ;
  while (enumerator_5855.hasCurrentObject ()) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_5855.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 122)).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_5855.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_5, GALGAS_string ("the '").add_operation (enumerator_5855.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 123))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
    }else if (kBoolFalse == test_4) {
      cEnumerator_stringlist enumerator_6052 (enumerator_5855.current_mValue (HERE).mAttribute_string.reader_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 125)), kEnumeration_up) ;
      while (enumerator_6052.hasCurrentObject ()) {
        var_context.mAttribute_mNibAndClassList.addAssign_operation (enumerator_6052.current_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 126)) ;
        enumerator_6052.gotoNextObject () ;
      }
    }
    enumerator_5855.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_6212 (constinArgument_inGuiComponentRoot.reader_mWithLexiqueList (SOURCE_FILE ("guiCompilation.galgas", 131)), kEnumeration_up) ;
  while (enumerator_6212.hasCurrentObject ()) {
    GALGAS_galgas_33_LexiqueComponentListAST_2D_element var_lexiqueComponentRoot ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_6212.current_mLexiqueFileName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 134)).reader_pathExtension (SOURCE_FILE ("guiCompilation.galgas", 134)).objectCompare (GALGAS_string ("gLexique"))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_6212.current_mLexiqueFileName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("the file extension for a lexique component should be 'gLexique'")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
      var_lexiqueComponentRoot.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_6) {
      GALGAS_lstring var_lexiqueFullPathName = GALGAS_lstring::constructor_new (enumerator_6212.current_mLexiqueFileName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 138)).reader_absolutePathFromPath (constinArgument_inSourceFile.reader_string (SOURCE_FILE ("guiCompilation.galgas", 138)).reader_stringByDeletingLastPathComponent (SOURCE_FILE ("guiCompilation.galgas", 138)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 138)), enumerator_6212.current_mLexiqueFileName (HERE).reader_location (SOURCE_FILE ("guiCompilation.galgas", 139))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 137)) ;
      {
      routine_parseLexiqueComponent (var_lexiqueFullPathName, ioArgument_ioParsedComponentStruct, var_lexiqueComponentRoot, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 141)) ;
      }
    }
    GALGAS_stringset var_terminalSymbolSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("guiCompilation.galgas", 148)) ;
    cEnumerator_terminalDeclarationListAST enumerator_6986 (var_lexiqueComponentRoot.reader_mTerminalDeclarationList (SOURCE_FILE ("guiCompilation.galgas", 149)), kEnumeration_up) ;
    while (enumerator_6986.hasCurrentObject ()) {
      var_terminalSymbolSet.addAssign_operation (enumerator_6986.current_mName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 150))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 150)) ;
      enumerator_6986.gotoNextObject () ;
    }
    cEnumerator_lexicalListDeclarationListAST enumerator_7105 (var_lexiqueComponentRoot.reader_mLexicalListDeclarationList (SOURCE_FILE ("guiCompilation.galgas", 152)), kEnumeration_up) ;
    while (enumerator_7105.hasCurrentObject ()) {
      cEnumerator_lexicalListEntryListAST enumerator_7135 (enumerator_7105.current_mEntryList (HERE), kEnumeration_up) ;
      while (enumerator_7135.hasCurrentObject ()) {
        var_terminalSymbolSet.addAssign_operation (enumerator_7135.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 154))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 154)) ;
        enumerator_7135.gotoNextObject () ;
      }
      enumerator_7105.gotoNextObject () ;
    }
    cEnumerator_guiLabelListAST enumerator_7255 (enumerator_6212.current_mLabels (HERE), kEnumeration_up) ;
    while (enumerator_7255.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_7288 (enumerator_7255.current_mTerminalList (HERE), kEnumeration_up) ;
      while (enumerator_7288.hasCurrentObject ()) {
        const enumGalgasBool test_8 = var_terminalSymbolSet.reader_hasKey (enumerator_7288.current_mTerminal (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 160)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 160)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 160)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (enumerator_7288.current_mTerminal (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("the '$").add_operation (enumerator_7288.current_mTerminal (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 161)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 162)).add_operation (enumerator_6212.current_mLexiqueFileName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 164))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 161)) ;
        }
        enumerator_7288.gotoNextObject () ;
      }
      enumerator_7255.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 170)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_7676 (enumerator_6212.current_mCompoundAttributes (HERE), kEnumeration_up) ;
    while (enumerator_7676.hasCurrentObject ()) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_7676.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 172)).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_location location_11 (enumerator_7676.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_11, GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 173)) ;
      }else if (kBoolFalse == test_10) {
        var_textMacroList.addAssign_operation (enumerator_7676.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 175)), enumerator_7676.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 175))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 175)) ;
      }
      enumerator_7676.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_8126 (enumerator_6212.current_mSimpleAttributes (HERE), kEnumeration_up) ;
    while (enumerator_8126.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_8126.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 185)).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
      if (kBoolTrue == test_12) {
        {
        var_context.mAttribute_mExtensionMap.modifier_insertKey (enumerator_8126.current_mValue (HERE), enumerator_6212.current_mLexiqueFileName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 186)).reader_lastPathComponent (SOURCE_FILE ("guiCompilation.galgas", 186)).reader_stringByDeletingPathExtension (SOURCE_FILE ("guiCompilation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
        }
        var_hasAssociatedExtension = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_8126.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 188)).objectCompare (GALGAS_string ("title"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const enumGalgasBool test_14 = var_hasTabViewTitle.boolEnum () ;
          if (kBoolTrue == test_14) {
            GALGAS_location location_15 (enumerator_8126.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_15, GALGAS_string ("the '").add_operation (enumerator_8126.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 190))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
          }
          var_hasTabViewTitle = GALGAS_bool (true) ;
          var_tabViewTitle = enumerator_8126.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 193)) ;
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, enumerator_8126.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 194)).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
          if (kBoolTrue == test_16) {
            const enumGalgasBool test_17 = var_hasBlockComment.boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_location location_18 (enumerator_8126.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_18, GALGAS_string ("the '").add_operation (enumerator_8126.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 196))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
            }
            var_hasBlockComment = GALGAS_bool (true) ;
            var_blockComment = enumerator_8126.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 199)) ;
          }else if (kBoolFalse == test_16) {
            GALGAS_location location_19 (enumerator_8126.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_19, GALGAS_string ("the '").add_operation (enumerator_8126.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 201))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
          }
        }
      }
      enumerator_8126.gotoNextObject () ;
    }
    const enumGalgasBool test_20 = var_hasAssociatedExtension.operator_not (SOURCE_FILE ("guiCompilation.galgas", 205)).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_location location_21 (enumerator_6212.current_mLexiqueFileName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_21, GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 206)) ;
    }
    const enumGalgasBool test_22 = var_hasTabViewTitle.operator_not (SOURCE_FILE ("guiCompilation.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_22) {
      GALGAS_location location_23 (enumerator_6212.current_mLexiqueFileName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_23, GALGAS_string ("the 'title' key should be defined once (it is not defined)")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 210)) ;
    }
    var_context.mAttribute_mWithLexiqueList.addAssign_operation (enumerator_6212.current_mLexiqueFileName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 214)).reader_lastPathComponent (SOURCE_FILE ("guiCompilation.galgas", 214)).reader_stringByDeletingPathExtension (SOURCE_FILE ("guiCompilation.galgas", 214)), var_blockComment, var_tabViewTitle, var_textMacroList, enumerator_6212.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 213)) ;
    enumerator_6212.gotoNextObject () ;
  }
  const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("guiCompilation.galgas", 221)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_24) {
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_componentName.mAttribute_string.add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 224)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, GALGAS_bool (false), var_context COMMA_SOURCE_FILE ("guiCompilation.galgas", 228))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 222)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'compileGuiComponentFromSourceFile'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileGuiComponentFromSourceFile (const GALGAS_lstring constinArgument_inSourceFile,
                                                const GALGAS_string constinArgument_inOutputDirectory,
                                                GALGAS_parsedComponentStruct & ioArgument_ioParsedComponentStruct,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiComponentAST var_guiComponentRoot ;
  var_guiComponentRoot.drop () ;
  C_String syntaxDirectedTranslationResult_10535 ;
  cGrammar_guiGrammar::_performSourceFileParsing_ (inCompiler, syntaxDirectedTranslationResult_10535, constinArgument_inSourceFile, var_guiComponentRoot  COMMA_SOURCE_FILE ("guiCompilation.galgas", 244)) ;
  {
  routine_compileGuiComponentFromAST (constinArgument_inSourceFile, constinArgument_inOutputDirectory, var_guiComponentRoot, ioArgument_ioParsedComponentStruct, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 246)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'compileAllGuiComponentFromASTGalgas3'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileAllGuiComponentFromASTGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST constinArgument_inGuiComponentListAST,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 269)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_11704 (constinArgument_inGuiComponentListAST, kEnumeration_up) ;
  while (enumerator_11704.hasCurrentObject ()) {
    {
    routine_compileGuiComponentGalgas_33_ (enumerator_11704.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 271)) ;
    }
    enumerator_11704.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileGuiComponentGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileGuiComponentGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                            GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.mAttribute_mGUIComponentName.mAttribute_string.objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inGUIComponentAST.mAttribute_mGUIComponentName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the gui name should be 'cocoa'")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 286)) ;
  }
  GALGAS_guiAnalysisContext var_context = GALGAS_guiAnalysisContext::constructor_new (GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 290)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 291)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 292)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 293)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 294)), GALGAS_extensionMap::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 295)), GALGAS_importedLexiqueList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 296))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 289)) ;
  cEnumerator_lstringlist enumerator_12760 (constinArgument_inGUIComponentAST.mAttribute_mImportedOptionList, kEnumeration_up) ;
  while (enumerator_12760.hasCurrentObject ()) {
    GALGAS_bool joker_12857_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_12857_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_12857_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_12857_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_12857_1 ; // Joker input parameter
    constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (enumerator_12760.current_mValue (HERE), joker_12857_5, joker_12857_4, joker_12857_3, joker_12857_2, joker_12857_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 300)) ;
    var_context.mAttribute_mImportedOptionComponentList.addAssign_operation (enumerator_12760.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("guiCompilation.galgas", 304)) ;
    enumerator_12760.gotoNextObject () ;
  }
  cEnumerator_guiSimpleAttributeListAST enumerator_13013 (constinArgument_inGUIComponentAST.mAttribute_mGlobalSimpleAttributeList, kEnumeration_up) ;
  while (enumerator_13013.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_13013.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 308)).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_13013.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_3, GALGAS_string ("the '").add_operation (enumerator_13013.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 309)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 309))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 309)) ;
    }else if (kBoolFalse == test_2) {
      cEnumerator_stringlist enumerator_13210 (enumerator_13013.current_mValue (HERE).mAttribute_string.reader_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 311)), kEnumeration_up) ;
      while (enumerator_13210.hasCurrentObject ()) {
        var_context.mAttribute_mNibAndClassList.addAssign_operation (enumerator_13210.current_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 312)) ;
        enumerator_13210.gotoNextObject () ;
      }
    }
    enumerator_13013.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_13367 (constinArgument_inGUIComponentAST.mAttribute_mWithLexiqueList, kEnumeration_up) ;
  while (enumerator_13367.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap ;
    GALGAS_indexingListAST joker_13532_2 ; // Joker input parameter
    GALGAS_lstring joker_13532_1 ; // Joker input parameter
    constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (enumerator_13367.current_mLexiqueFileName (HERE), var_terminalMap, joker_13532_2, joker_13532_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
    GALGAS_stringset var_terminalSymbolSet = var_terminalMap.reader_keySet (SOURCE_FILE ("guiCompilation.galgas", 325)) ;
    cEnumerator_guiLabelListAST enumerator_13664 (enumerator_13367.current_mLabels (HERE), kEnumeration_up) ;
    while (enumerator_13664.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_13697 (enumerator_13664.current_mTerminalList (HERE), kEnumeration_up) ;
      while (enumerator_13697.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_terminalSymbolSet.reader_hasKey (enumerator_13697.current_mTerminal (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 329)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 329)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_13697.current_mTerminal (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '$").add_operation (enumerator_13697.current_mTerminal (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 331)).add_operation (enumerator_13367.current_mLexiqueFileName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 333))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
        }
        enumerator_13697.gotoNextObject () ;
      }
      enumerator_13664.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 339)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_14085 (enumerator_13367.current_mCompoundAttributes (HERE), kEnumeration_up) ;
    while (enumerator_14085.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_14085.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 341)).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_14085.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
      }else if (kBoolFalse == test_6) {
        var_textMacroList.addAssign_operation (enumerator_14085.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 344)), enumerator_14085.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 344))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 344)) ;
      }
      enumerator_14085.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_14535 (enumerator_13367.current_mSimpleAttributes (HERE), kEnumeration_up) ;
    while (enumerator_14535.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_14535.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 354)).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        var_context.mAttribute_mExtensionMap.modifier_insertKey (enumerator_14535.current_mValue (HERE), enumerator_13367.current_mLexiqueFileName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 355)) ;
        }
        var_hasAssociatedExtension = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_14535.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 357)).objectCompare (GALGAS_string ("title"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const enumGalgasBool test_10 = var_hasTabViewTitle.boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_location location_11 (enumerator_14535.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (enumerator_14535.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 359)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 359))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 359)) ;
          }
          var_hasTabViewTitle = GALGAS_bool (true) ;
          var_tabViewTitle = enumerator_14535.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 362)) ;
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_14535.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 363)).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            const enumGalgasBool test_13 = var_hasBlockComment.boolEnum () ;
            if (kBoolTrue == test_13) {
              GALGAS_location location_14 (enumerator_14535.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_14535.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 365)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 365))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 365)) ;
            }
            var_hasBlockComment = GALGAS_bool (true) ;
            var_blockComment = enumerator_14535.current_mValue (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 368)) ;
          }else if (kBoolFalse == test_12) {
            GALGAS_location location_15 (enumerator_14535.current_mKey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_15, GALGAS_string ("the '").add_operation (enumerator_14535.current_mKey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 370))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
          }
        }
      }
      enumerator_14535.gotoNextObject () ;
    }
    const enumGalgasBool test_16 = var_hasAssociatedExtension.operator_not (SOURCE_FILE ("guiCompilation.galgas", 374)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location location_17 (enumerator_13367.current_mLexiqueFileName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_17, GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 375)) ;
    }
    const enumGalgasBool test_18 = var_hasTabViewTitle.operator_not (SOURCE_FILE ("guiCompilation.galgas", 378)).boolEnum () ;
    if (kBoolTrue == test_18) {
      GALGAS_location location_19 (enumerator_13367.current_mLexiqueFileName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_19, GALGAS_string ("the 'title' key should be defined once (it is not defined)")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 379)) ;
    }
    var_context.mAttribute_mWithLexiqueList.addAssign_operation (enumerator_13367.current_mLexiqueFileName (HERE).mAttribute_string, var_blockComment, var_tabViewTitle, var_textMacroList, enumerator_13367.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 382)) ;
    enumerator_13367.gotoNextObject () ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.modifier_insertKey (constinArgument_inGUIComponentAST.mAttribute_mGUIComponentName, var_context, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 390)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateAllGuiComponentsGalgas3'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateAllGuiComponentsGalgas_33_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                 const GALGAS_string constinArgument_inOutputDirectory,
                                                 GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_16311 (constinArgument_inOptionComponentMapForGeneration, kEnumeration_up) ;
  while (enumerator_16311.hasCurrentObject ()) {
    GALGAS_string var_fileName = GALGAS_string ("gui-").add_operation (enumerator_16311.current_lkey (HERE).reader_string (SOURCE_FILE ("guiCompilation.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 404)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 404)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName  COMMA_SOURCE_FILE ("guiCompilation.galgas", 405)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName  COMMA_SOURCE_FILE ("guiCompilation.galgas", 406)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, GALGAS_bool (true), enumerator_16311.current_mGuiComponentContext (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 413))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 407)) ;
    }
    enumerator_16311.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'generateGalgas3InstructionTerminator'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool onceFunction_generateGalgas_33_InstructionTerminator (C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateGalgas_33_InstructionTerminator = false ;
static GALGAS_bool gOnceFunctionResult_generateGalgas_33_InstructionTerminator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool function_generateGalgas_33_InstructionTerminator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateGalgas_33_InstructionTerminator) {
    gOnceFunctionResult_generateGalgas_33_InstructionTerminator = onceFunction_generateGalgas_33_InstructionTerminator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateGalgas_33_InstructionTerminator = true ;
  }
  return gOnceFunctionResult_generateGalgas_33_InstructionTerminator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateGalgas_33_InstructionTerminator (void) {
  gOnceFunctionResult_generateGalgas_33_InstructionTerminator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateGalgas_33_InstructionTerminator (NULL,
                                                                                     releaseOnceFunctionResult_generateGalgas_33_InstructionTerminator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateGalgas_33_InstructionTerminator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateGalgas_33_InstructionTerminator (C_Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GALGAS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_generateGalgas_33_InstructionTerminator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateGalgas_33_InstructionTerminator ("generateGalgas3InstructionTerminator",
                                                                                         functionWithGenericHeader_generateGalgas_33_InstructionTerminator,
                                                                                         & kTypeDescriptor_GALGAS_bool,
                                                                                         0,
                                                                                         functionArgs_generateGalgas_33_InstructionTerminator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'generateFewHeaderFiles'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool onceFunction_generateFewHeaderFiles (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (true) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GALGAS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (NULL,
                                                                    releaseOnceFunctionResult_generateFewHeaderFiles) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateFewHeaderFiles (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binaryAddOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryAddOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryAddOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryAddOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryAddOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryAddOperator) {
    gOnceFunctionResult_binaryAddOperator = onceFunction_binaryAddOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryAddOperator = true ;
  }
  return gOnceFunctionResult_binaryAddOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryAddOperator (void) {
  gOnceFunctionResult_binaryAddOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryAddOperator (NULL,
                                                               releaseOnceFunctionResult_binaryAddOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryAddOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryAddOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_binaryAddOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryAddOperator ("binaryAddOperator",
                                                                   functionWithGenericHeader_binaryAddOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_binaryAddOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binarySubOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binarySubOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 258)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binarySubOperator = false ;
static GALGAS_uint gOnceFunctionResult_binarySubOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binarySubOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binarySubOperator) {
    gOnceFunctionResult_binarySubOperator = onceFunction_binarySubOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binarySubOperator = true ;
  }
  return gOnceFunctionResult_binarySubOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binarySubOperator (void) {
  gOnceFunctionResult_binarySubOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binarySubOperator (NULL,
                                                               releaseOnceFunctionResult_binarySubOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binarySubOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binarySubOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_binarySubOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binarySubOperator ("binarySubOperator",
                                                                   functionWithGenericHeader_binarySubOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_binarySubOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binaryMulOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryMulOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 2U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 259)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryMulOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryMulOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryMulOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryMulOperator) {
    gOnceFunctionResult_binaryMulOperator = onceFunction_binaryMulOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryMulOperator = true ;
  }
  return gOnceFunctionResult_binaryMulOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryMulOperator (void) {
  gOnceFunctionResult_binaryMulOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryMulOperator (NULL,
                                                               releaseOnceFunctionResult_binaryMulOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryMulOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryMulOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_binaryMulOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryMulOperator ("binaryMulOperator",
                                                                   functionWithGenericHeader_binaryMulOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_binaryMulOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binaryDivOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryDivOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 3U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 260)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryDivOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryDivOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryDivOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryDivOperator) {
    gOnceFunctionResult_binaryDivOperator = onceFunction_binaryDivOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryDivOperator = true ;
  }
  return gOnceFunctionResult_binaryDivOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryDivOperator (void) {
  gOnceFunctionResult_binaryDivOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryDivOperator (NULL,
                                                               releaseOnceFunctionResult_binaryDivOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryDivOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryDivOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_binaryDivOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryDivOperator ("binaryDivOperator",
                                                                   functionWithGenericHeader_binaryDivOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_binaryDivOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binaryModOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryModOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 261)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryModOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryModOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryModOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryModOperator) {
    gOnceFunctionResult_binaryModOperator = onceFunction_binaryModOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryModOperator = true ;
  }
  return gOnceFunctionResult_binaryModOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryModOperator (void) {
  gOnceFunctionResult_binaryModOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryModOperator (NULL,
                                                               releaseOnceFunctionResult_binaryModOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryModOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryModOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_binaryModOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryModOperator ("binaryModOperator",
                                                                   functionWithGenericHeader_binaryModOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_binaryModOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'binaryShiftOperator'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryShiftOperator (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 262)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryShiftOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryShiftOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryShiftOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryShiftOperator) {
    gOnceFunctionResult_binaryShiftOperator = onceFunction_binaryShiftOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryShiftOperator = true ;
  }
  return gOnceFunctionResult_binaryShiftOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryShiftOperator (void) {
  gOnceFunctionResult_binaryShiftOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryShiftOperator (NULL,
                                                                 releaseOnceFunctionResult_binaryShiftOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryShiftOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryShiftOperator (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_binaryShiftOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryShiftOperator ("binaryShiftOperator",
                                                                     functionWithGenericHeader_binaryShiftOperator,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_binaryShiftOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'unaryPlusOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_unaryPlusOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 6U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 263)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_unaryPlusOperator = false ;
static GALGAS_uint gOnceFunctionResult_unaryPlusOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_unaryPlusOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_unaryPlusOperator) {
    gOnceFunctionResult_unaryPlusOperator = onceFunction_unaryPlusOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_unaryPlusOperator = true ;
  }
  return gOnceFunctionResult_unaryPlusOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_unaryPlusOperator (void) {
  gOnceFunctionResult_unaryPlusOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_unaryPlusOperator (NULL,
                                                               releaseOnceFunctionResult_unaryPlusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_unaryPlusOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_unaryPlusOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_unaryPlusOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_unaryPlusOperator ("unaryPlusOperator",
                                                                   functionWithGenericHeader_unaryPlusOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_unaryPlusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'unaryMinusOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_unaryMinusOperator (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 264)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_unaryMinusOperator = false ;
static GALGAS_uint gOnceFunctionResult_unaryMinusOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_unaryMinusOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_unaryMinusOperator) {
    gOnceFunctionResult_unaryMinusOperator = onceFunction_unaryMinusOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_unaryMinusOperator = true ;
  }
  return gOnceFunctionResult_unaryMinusOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_unaryMinusOperator (void) {
  gOnceFunctionResult_unaryMinusOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_unaryMinusOperator (NULL,
                                                                releaseOnceFunctionResult_unaryMinusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_unaryMinusOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_unaryMinusOperator (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_unaryMinusOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_unaryMinusOperator ("unaryMinusOperator",
                                                                    functionWithGenericHeader_unaryMinusOperator,
                                                                    & kTypeDescriptor_GALGAS_uint,
                                                                    0,
                                                                    functionArgs_unaryMinusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'unaryTildeOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_unaryTildeOperator (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 265)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_unaryTildeOperator = false ;
static GALGAS_uint gOnceFunctionResult_unaryTildeOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_unaryTildeOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_unaryTildeOperator) {
    gOnceFunctionResult_unaryTildeOperator = onceFunction_unaryTildeOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_unaryTildeOperator = true ;
  }
  return gOnceFunctionResult_unaryTildeOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_unaryTildeOperator (void) {
  gOnceFunctionResult_unaryTildeOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_unaryTildeOperator (NULL,
                                                                releaseOnceFunctionResult_unaryTildeOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_unaryTildeOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_unaryTildeOperator (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_unaryTildeOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_unaryTildeOperator ("unaryTildeOperator",
                                                                    functionWithGenericHeader_unaryTildeOperator,
                                                                    & kTypeDescriptor_GALGAS_uint,
                                                                    0,
                                                                    functionArgs_unaryTildeOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'incDecOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_incDecOperator (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 266)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_incDecOperator = false ;
static GALGAS_uint gOnceFunctionResult_incDecOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_incDecOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_incDecOperator) {
    gOnceFunctionResult_incDecOperator = onceFunction_incDecOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_incDecOperator = true ;
  }
  return gOnceFunctionResult_incDecOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_incDecOperator (void) {
  gOnceFunctionResult_incDecOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_incDecOperator (NULL,
                                                            releaseOnceFunctionResult_incDecOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_incDecOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_incDecOperator (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_incDecOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_incDecOperator ("incDecOperator",
                                                                functionWithGenericHeader_incDecOperator,
                                                                & kTypeDescriptor_GALGAS_uint,
                                                                0,
                                                                functionArgs_incDecOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binaryAndOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryAndOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 10U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 268)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryAndOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryAndOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryAndOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryAndOperator) {
    gOnceFunctionResult_binaryAndOperator = onceFunction_binaryAndOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryAndOperator = true ;
  }
  return gOnceFunctionResult_binaryAndOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryAndOperator (void) {
  gOnceFunctionResult_binaryAndOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryAndOperator (NULL,
                                                               releaseOnceFunctionResult_binaryAndOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryAndOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryAndOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_binaryAndOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryAndOperator ("binaryAndOperator",
                                                                   functionWithGenericHeader_binaryAndOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_binaryAndOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binaryOrOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryOrOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 11U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 269)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryOrOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryOrOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryOrOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryOrOperator) {
    gOnceFunctionResult_binaryOrOperator = onceFunction_binaryOrOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryOrOperator = true ;
  }
  return gOnceFunctionResult_binaryOrOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryOrOperator (void) {
  gOnceFunctionResult_binaryOrOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryOrOperator (NULL,
                                                              releaseOnceFunctionResult_binaryOrOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryOrOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryOrOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_binaryOrOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryOrOperator ("binaryOrOperator",
                                                                  functionWithGenericHeader_binaryOrOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_binaryOrOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'binaryXorOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryXorOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 12U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 270)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryXorOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryXorOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryXorOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryXorOperator) {
    gOnceFunctionResult_binaryXorOperator = onceFunction_binaryXorOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryXorOperator = true ;
  }
  return gOnceFunctionResult_binaryXorOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryXorOperator (void) {
  gOnceFunctionResult_binaryXorOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryXorOperator (NULL,
                                                               releaseOnceFunctionResult_binaryXorOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryXorOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryXorOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_binaryXorOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryXorOperator ("binaryXorOperator",
                                                                   functionWithGenericHeader_binaryXorOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_binaryXorOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'unaryNotOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_unaryNotOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 13U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 271)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_unaryNotOperator = false ;
static GALGAS_uint gOnceFunctionResult_unaryNotOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_unaryNotOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_unaryNotOperator) {
    gOnceFunctionResult_unaryNotOperator = onceFunction_unaryNotOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_unaryNotOperator = true ;
  }
  return gOnceFunctionResult_unaryNotOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_unaryNotOperator (void) {
  gOnceFunctionResult_unaryNotOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_unaryNotOperator (NULL,
                                                              releaseOnceFunctionResult_unaryNotOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_unaryNotOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_unaryNotOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_unaryNotOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_unaryNotOperator ("unaryNotOperator",
                                                                  functionWithGenericHeader_unaryNotOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_unaryNotOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'binaryConcatOperator'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryConcatOperator (C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 14U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 273)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryConcatOperator = false ;
static GALGAS_uint gOnceFunctionResult_binaryConcatOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryConcatOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryConcatOperator) {
    gOnceFunctionResult_binaryConcatOperator = onceFunction_binaryConcatOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryConcatOperator = true ;
  }
  return gOnceFunctionResult_binaryConcatOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryConcatOperator (void) {
  gOnceFunctionResult_binaryConcatOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryConcatOperator (NULL,
                                                                  releaseOnceFunctionResult_binaryConcatOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryConcatOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryConcatOperator (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_binaryConcatOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryConcatOperator ("binaryConcatOperator",
                                                                      functionWithGenericHeader_binaryConcatOperator,
                                                                      & kTypeDescriptor_GALGAS_uint,
                                                                      0,
                                                                      functionArgs_binaryConcatOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'plusEqualOperatorWithExpression'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_plusEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 274)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_plusEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_plusEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_plusEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_plusEqualOperatorWithExpression) {
    gOnceFunctionResult_plusEqualOperatorWithExpression = onceFunction_plusEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_plusEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_plusEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_plusEqualOperatorWithExpression (void) {
  gOnceFunctionResult_plusEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_plusEqualOperatorWithExpression (NULL,
                                                                             releaseOnceFunctionResult_plusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_plusEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_plusEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_plusEqualOperatorWithExpression (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_plusEqualOperatorWithExpression ("plusEqualOperatorWithExpression",
                                                                                 functionWithGenericHeader_plusEqualOperatorWithExpression,
                                                                                 & kTypeDescriptor_GALGAS_uint,
                                                                                 0,
                                                                                 functionArgs_plusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'isComparable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_isComparable (C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 275)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_isComparable = false ;
static GALGAS_uint gOnceFunctionResult_isComparable ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_isComparable (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isComparable) {
    gOnceFunctionResult_isComparable = onceFunction_isComparable (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isComparable = true ;
  }
  return gOnceFunctionResult_isComparable ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_isComparable (void) {
  gOnceFunctionResult_isComparable.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_isComparable (NULL,
                                                          releaseOnceFunctionResult_isComparable) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_isComparable [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_isComparable (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_isComparable (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_isComparable ("isComparable",
                                                              functionWithGenericHeader_isComparable,
                                                              & kTypeDescriptor_GALGAS_uint,
                                                              0,
                                                              functionArgs_isComparable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'binaryAddOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryAddOperatorNoOVF (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 17U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 277)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryAddOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_binaryAddOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryAddOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryAddOperatorNoOVF) {
    gOnceFunctionResult_binaryAddOperatorNoOVF = onceFunction_binaryAddOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryAddOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_binaryAddOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryAddOperatorNoOVF (void) {
  gOnceFunctionResult_binaryAddOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryAddOperatorNoOVF (NULL,
                                                                    releaseOnceFunctionResult_binaryAddOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryAddOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryAddOperatorNoOVF (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_binaryAddOperatorNoOVF (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryAddOperatorNoOVF ("binaryAddOperatorNoOVF",
                                                                        functionWithGenericHeader_binaryAddOperatorNoOVF,
                                                                        & kTypeDescriptor_GALGAS_uint,
                                                                        0,
                                                                        functionArgs_binaryAddOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'binarySubOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binarySubOperatorNoOVF (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 18U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 278)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binarySubOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_binarySubOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binarySubOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binarySubOperatorNoOVF) {
    gOnceFunctionResult_binarySubOperatorNoOVF = onceFunction_binarySubOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binarySubOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_binarySubOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binarySubOperatorNoOVF (void) {
  gOnceFunctionResult_binarySubOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binarySubOperatorNoOVF (NULL,
                                                                    releaseOnceFunctionResult_binarySubOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binarySubOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binarySubOperatorNoOVF (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_binarySubOperatorNoOVF (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binarySubOperatorNoOVF ("binarySubOperatorNoOVF",
                                                                        functionWithGenericHeader_binarySubOperatorNoOVF,
                                                                        & kTypeDescriptor_GALGAS_uint,
                                                                        0,
                                                                        functionArgs_binarySubOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'binaryMulOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryMulOperatorNoOVF (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 19U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 279)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryMulOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_binaryMulOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryMulOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryMulOperatorNoOVF) {
    gOnceFunctionResult_binaryMulOperatorNoOVF = onceFunction_binaryMulOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryMulOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_binaryMulOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryMulOperatorNoOVF (void) {
  gOnceFunctionResult_binaryMulOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryMulOperatorNoOVF (NULL,
                                                                    releaseOnceFunctionResult_binaryMulOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryMulOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryMulOperatorNoOVF (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_binaryMulOperatorNoOVF (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryMulOperatorNoOVF ("binaryMulOperatorNoOVF",
                                                                        functionWithGenericHeader_binaryMulOperatorNoOVF,
                                                                        & kTypeDescriptor_GALGAS_uint,
                                                                        0,
                                                                        functionArgs_binaryMulOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'binaryDivOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_binaryDivOperatorNoOVF (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 20U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 280)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_binaryDivOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_binaryDivOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_binaryDivOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_binaryDivOperatorNoOVF) {
    gOnceFunctionResult_binaryDivOperatorNoOVF = onceFunction_binaryDivOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_binaryDivOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_binaryDivOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_binaryDivOperatorNoOVF (void) {
  gOnceFunctionResult_binaryDivOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_binaryDivOperatorNoOVF (NULL,
                                                                    releaseOnceFunctionResult_binaryDivOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_binaryDivOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_binaryDivOperatorNoOVF (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_binaryDivOperatorNoOVF (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_binaryDivOperatorNoOVF ("binaryDivOperatorNoOVF",
                                                                        functionWithGenericHeader_binaryDivOperatorNoOVF,
                                                                        & kTypeDescriptor_GALGAS_uint,
                                                                        0,
                                                                        functionArgs_binaryDivOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'unaryMinusOperatorNoOVF'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_unaryMinusOperatorNoOVF (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 21U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 281)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_unaryMinusOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_unaryMinusOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_unaryMinusOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_unaryMinusOperatorNoOVF) {
    gOnceFunctionResult_unaryMinusOperatorNoOVF = onceFunction_unaryMinusOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_unaryMinusOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_unaryMinusOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_unaryMinusOperatorNoOVF (void) {
  gOnceFunctionResult_unaryMinusOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_unaryMinusOperatorNoOVF (NULL,
                                                                     releaseOnceFunctionResult_unaryMinusOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_unaryMinusOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_unaryMinusOperatorNoOVF (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_unaryMinusOperatorNoOVF (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_unaryMinusOperatorNoOVF ("unaryMinusOperatorNoOVF",
                                                                         functionWithGenericHeader_unaryMinusOperatorNoOVF,
                                                                         & kTypeDescriptor_GALGAS_uint,
                                                                         0,
                                                                         functionArgs_unaryMinusOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'incDecOperatorNoOVF'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_incDecOperatorNoOVF (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 22U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 282)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_incDecOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_incDecOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_incDecOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_incDecOperatorNoOVF) {
    gOnceFunctionResult_incDecOperatorNoOVF = onceFunction_incDecOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_incDecOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_incDecOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_incDecOperatorNoOVF (void) {
  gOnceFunctionResult_incDecOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_incDecOperatorNoOVF (NULL,
                                                                 releaseOnceFunctionResult_incDecOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_incDecOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_incDecOperatorNoOVF (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_incDecOperatorNoOVF (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_incDecOperatorNoOVF ("incDecOperatorNoOVF",
                                                                     functionWithGenericHeader_incDecOperatorNoOVF,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_incDecOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'supportWithAccessor'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_supportWithAccessor (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 26U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 284)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_supportWithAccessor = false ;
static GALGAS_uint gOnceFunctionResult_supportWithAccessor ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_supportWithAccessor (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_supportWithAccessor) {
    gOnceFunctionResult_supportWithAccessor = onceFunction_supportWithAccessor (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_supportWithAccessor = true ;
  }
  return gOnceFunctionResult_supportWithAccessor ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_supportWithAccessor (void) {
  gOnceFunctionResult_supportWithAccessor.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_supportWithAccessor (NULL,
                                                                 releaseOnceFunctionResult_supportWithAccessor) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_supportWithAccessor [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_supportWithAccessor (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_supportWithAccessor (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_supportWithAccessor ("supportWithAccessor",
                                                                     functionWithGenericHeader_supportWithAccessor,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_supportWithAccessor) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Once function 'plusEqualOperatorWithFieldListNeedsCompilerArg'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_plusEqualOperatorWithFieldListNeedsCompilerArg (C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 27U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 285)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_plusEqualOperatorWithFieldListNeedsCompilerArg = false ;
static GALGAS_uint gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_plusEqualOperatorWithFieldListNeedsCompilerArg (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_plusEqualOperatorWithFieldListNeedsCompilerArg) {
    gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg = onceFunction_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_plusEqualOperatorWithFieldListNeedsCompilerArg = true ;
  }
  return gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg (void) {
  gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_plusEqualOperatorWithFieldListNeedsCompilerArg (NULL,
                                                                                            releaseOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_plusEqualOperatorWithFieldListNeedsCompilerArg [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_plusEqualOperatorWithFieldListNeedsCompilerArg (C_Compiler * inCompiler,
                                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                                               const GALGAS_location & /* inErrorLocation */
                                                                                               COMMA_LOCATION_ARGS) {
  return function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_plusEqualOperatorWithFieldListNeedsCompilerArg ("plusEqualOperatorWithFieldListNeedsCompilerArg",
                                                                                                functionWithGenericHeader_plusEqualOperatorWithFieldListNeedsCompilerArg,
                                                                                                & kTypeDescriptor_GALGAS_uint,
                                                                                                0,
                                                                                                functionArgs_plusEqualOperatorWithFieldListNeedsCompilerArg) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'generateEnumerationHelperMethods'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateEnumerationHelperMethods (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 28U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 286)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateEnumerationHelperMethods = false ;
static GALGAS_uint gOnceFunctionResult_generateEnumerationHelperMethods ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_generateEnumerationHelperMethods (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateEnumerationHelperMethods) {
    gOnceFunctionResult_generateEnumerationHelperMethods = onceFunction_generateEnumerationHelperMethods (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateEnumerationHelperMethods = true ;
  }
  return gOnceFunctionResult_generateEnumerationHelperMethods ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateEnumerationHelperMethods (void) {
  gOnceFunctionResult_generateEnumerationHelperMethods.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateEnumerationHelperMethods (NULL,
                                                                              releaseOnceFunctionResult_generateEnumerationHelperMethods) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateEnumerationHelperMethods [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateEnumerationHelperMethods (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_generateEnumerationHelperMethods (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateEnumerationHelperMethods ("generateEnumerationHelperMethods",
                                                                                  functionWithGenericHeader_generateEnumerationHelperMethods,
                                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                                  0,
                                                                                  functionArgs_generateEnumerationHelperMethods) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Once function 'doNotGenererateObjectCompare'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_doNotGenererateObjectCompare (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 29U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 287)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_doNotGenererateObjectCompare = false ;
static GALGAS_uint gOnceFunctionResult_doNotGenererateObjectCompare ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_doNotGenererateObjectCompare (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_doNotGenererateObjectCompare) {
    gOnceFunctionResult_doNotGenererateObjectCompare = onceFunction_doNotGenererateObjectCompare (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_doNotGenererateObjectCompare = true ;
  }
  return gOnceFunctionResult_doNotGenererateObjectCompare ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_doNotGenererateObjectCompare (void) {
  gOnceFunctionResult_doNotGenererateObjectCompare.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_doNotGenererateObjectCompare (NULL,
                                                                          releaseOnceFunctionResult_doNotGenererateObjectCompare) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_doNotGenererateObjectCompare [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_doNotGenererateObjectCompare (C_Compiler * inCompiler,
                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  return function_doNotGenererateObjectCompare (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_doNotGenererateObjectCompare ("doNotGenererateObjectCompare",
                                                                              functionWithGenericHeader_doNotGenererateObjectCompare,
                                                                              & kTypeDescriptor_GALGAS_uint,
                                                                              0,
                                                                              functionArgs_doNotGenererateObjectCompare) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Once function 'generateDescriptionReaderUtilityMethod'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateDescriptionReaderUtilityMethod (C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 30U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 288)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateDescriptionReaderUtilityMethod = false ;
static GALGAS_uint gOnceFunctionResult_generateDescriptionReaderUtilityMethod ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_generateDescriptionReaderUtilityMethod (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateDescriptionReaderUtilityMethod) {
    gOnceFunctionResult_generateDescriptionReaderUtilityMethod = onceFunction_generateDescriptionReaderUtilityMethod (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateDescriptionReaderUtilityMethod = true ;
  }
  return gOnceFunctionResult_generateDescriptionReaderUtilityMethod ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateDescriptionReaderUtilityMethod (void) {
  gOnceFunctionResult_generateDescriptionReaderUtilityMethod.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateDescriptionReaderUtilityMethod (NULL,
                                                                                    releaseOnceFunctionResult_generateDescriptionReaderUtilityMethod) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateDescriptionReaderUtilityMethod [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateDescriptionReaderUtilityMethod (C_Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  return function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateDescriptionReaderUtilityMethod ("generateDescriptionReaderUtilityMethod",
                                                                                        functionWithGenericHeader_generateDescriptionReaderUtilityMethod,
                                                                                        & kTypeDescriptor_GALGAS_uint,
                                                                                        0,
                                                                                        functionArgs_generateDescriptionReaderUtilityMethod) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Once function 'generateCopyConstructorAndAssignmentOperator'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateCopyConstructorAndAssignmentOperator (C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 289)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateCopyConstructorAndAssignmentOperator = false ;
static GALGAS_uint gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_generateCopyConstructorAndAssignmentOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateCopyConstructorAndAssignmentOperator) {
    gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator = onceFunction_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateCopyConstructorAndAssignmentOperator = true ;
  }
  return gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateCopyConstructorAndAssignmentOperator (void) {
  gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateCopyConstructorAndAssignmentOperator (NULL,
                                                                                          releaseOnceFunctionResult_generateCopyConstructorAndAssignmentOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateCopyConstructorAndAssignmentOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateCopyConstructorAndAssignmentOperator (C_Compiler * inCompiler,
                                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                                             const GALGAS_location & /* inErrorLocation */
                                                                                             COMMA_LOCATION_ARGS) {
  return function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateCopyConstructorAndAssignmentOperator ("generateCopyConstructorAndAssignmentOperator",
                                                                                              functionWithGenericHeader_generateCopyConstructorAndAssignmentOperator,
                                                                                              & kTypeDescriptor_GALGAS_uint,
                                                                                              0,
                                                                                              functionArgs_generateCopyConstructorAndAssignmentOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWithoutArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWithoutArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                              const GALGAS_string constinArgument_inConstructorName,
                                              const GALGAS_string constinArgument_inReturnedTypeName,
                                              const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 23)) ;
  }
  {
  ioArgument_ioConstructorMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 29))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 29)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 30)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 28)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterConstructorWithArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWithArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                           const GALGAS_string constinArgument_inConstructorName,
                                           const GALGAS_string constinArgument_inArgument_31_TypeName,
                                           const GALGAS_string constinArgument_inArgument_31_Name,
                                           const GALGAS_string constinArgument_inReturnedTypeName,
                                           const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 47)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 49)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 52)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 52)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 52)) ;
  ioArgument_ioConstructorMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 51))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 51)), temp_0, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 50)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWith2Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWith_32_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 71)) ;
  }
  GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 74)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 75)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 75)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 76)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 77)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 77)) ;
  {
  ioArgument_ioConstructorMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79)), var_argumentTypeList, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWith3Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWith_33_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                const GALGAS_string constinArgument_inArgument_33_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 101)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 103)) ;
  }
  GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 104)) ;
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 105)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 105)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 106)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 107)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 109)), var_t, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  {
  ioArgument_ioConstructorMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_argumentTypeList, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 110)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioReaderMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inReaderName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 25)) ;
  }
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 27))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 27)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 28)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 29)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 30)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsReaders.galgas", 33)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 26)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioReaderMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inReaderName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 47)) ;
  }
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 49))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 49)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 50)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 51)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 52)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsReaders.galgas", 55)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 48)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterInheritedGetterWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithArgument (GALGAS_getterMap & ioArgument_ioReaderMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inReaderName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 71)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 74)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 75)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 75)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 77))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 77)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 78)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 80)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsReaders.galgas", 83)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 76)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedReaderWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedReaderWith_32_Arguments (GALGAS_getterMap & ioArgument_ioReaderMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inReaderName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 101)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 102)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 104)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 105)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 105)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 106)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 107)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 107)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 109))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 109)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 110)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 112)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsReaders.galgas", 115)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 108)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterBaseReaderWithoutArgument'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWithoutArgument (GALGAS_getterMap & ioArgument_ioReaderMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inReaderName,
                                             const GALGAS_string constinArgument_inReturnedTypeName,
                                             const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 129)) ;
  }
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 131))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 131)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 132)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 133)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 134)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsReaders.galgas", 137)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 130)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'enterBaseReaderWithArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWithArgument (GALGAS_getterMap & ioArgument_ioReaderMap,
                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                          const GALGAS_string constinArgument_inReaderName,
                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                          const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 153)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 154)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 156)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 157)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 157)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 159))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 159)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 160)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 162)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsReaders.galgas", 165)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 158)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterBaseFinalReaderWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalReaderWithArgument (GALGAS_getterMap & ioArgument_ioReaderMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inReaderName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 181)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 182)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 184)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 185)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 185)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 187))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 187)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 188)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 190)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsReaders.galgas", 193)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 186)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterBaseReaderWith2Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWith_32_Arguments (GALGAS_getterMap & ioArgument_ioReaderMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inReaderName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inArgument_32_TypeName,
                                               const GALGAS_string constinArgument_inArgument_32_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 211)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 212)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 214)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 215)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 215)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 216)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 217)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 217)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 219))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 219)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 220)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 222)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsReaders.galgas", 225)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 218)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalReaderWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalReaderWith_32_Arguments (GALGAS_getterMap & ioArgument_ioReaderMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inReaderName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 243)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 244)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 246)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 247)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 247)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 248)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 249)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 249)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 251))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 251)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 252)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 254)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsReaders.galgas", 257)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 250)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterBaseReaderWith3Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWith_33_Arguments (GALGAS_getterMap & ioArgument_ioReaderMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inReaderName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inArgument_32_TypeName,
                                               const GALGAS_string constinArgument_inArgument_32_Name,
                                               const GALGAS_string constinArgument_inArgument_33_TypeName,
                                               const GALGAS_string constinArgument_inArgument_33_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 277)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 278)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 280)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 281)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 281)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 282)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 283)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 283)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 284)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 285)), var_t, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 285)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 287))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 287)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 288)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 290)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsReaders.galgas", 293)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 286)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalReaderWith3Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalReaderWith_33_Arguments (GALGAS_getterMap & ioArgument_ioReaderMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inReaderName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_33_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsReaders.galgas", 313)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsReaders.galgas", 314)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 316)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 317)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 317)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 318)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 319)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 319)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t COMMA_SOURCE_FILE ("semanticsReaders.galgas", 320)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsReaders.galgas", 321)), var_t, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 321)) ;
  {
  ioArgument_ioReaderMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inReaderName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 323))  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 323)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsReaders.galgas", 324)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 326)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsReaders.galgas", 329)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsReaders.galgas", 322)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'commonReaderMapForAllTypes'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_commonReaderMapForAllTypes (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                         GALGAS_getterMap & outArgument_outMap,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticsReaders.galgas", 339)) ;
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("description"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 340)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("staticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 347)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 354)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("object"), GALGAS_string ("object"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsReaders.galgas", 361)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterModifierWithInputArgument'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWithInputArgument (GALGAS_setterMap & ioArgument_ioModifierMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inInputArgumentTypeName,
                                             const GALGAS_string constinArgument_inInputArgumentName,
                                             const GALGAS_string constinArgument_inModifierName,
                                             const GALGAS_bool constinArgument_inHasCompilerArgument,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 27)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsModifiers.galgas", 28)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsModifiers.galgas", 29)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsModifiers.galgas", 29)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 29)) ;
  {
  ioArgument_ioModifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inModifierName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 31))  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 31)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsModifiers.galgas", 32)), var_argList, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsModifiers.galgas", 35)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 30)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterModifierWith2InputArguments'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWith_32_InputArguments (GALGAS_setterMap & ioArgument_ioModifierMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inInputArgument_31_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_31_Name,
                                                  const GALGAS_string constinArgument_inInputArgument_32_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_32_Name,
                                                  const GALGAS_string constinArgument_inModifierName,
                                                  const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsModifiers.galgas", 76)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 77)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsModifiers.galgas", 78)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsModifiers.galgas", 78)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 78)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 79)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsModifiers.galgas", 80)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsModifiers.galgas", 80)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 80)) ;
  {
  ioArgument_ioModifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inModifierName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 82))  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 82)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsModifiers.galgas", 83)), var_argList, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsModifiers.galgas", 86)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 81)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterModifierWith3InputArguments'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWith_33_InputArguments (GALGAS_setterMap & ioArgument_ioModifierMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inInputArgument_31_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_31_Name,
                                                  const GALGAS_string constinArgument_inInputArgument_32_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_32_Name,
                                                  const GALGAS_string constinArgument_inInputArgument_33_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_33_Name,
                                                  const GALGAS_string constinArgument_inModifierName,
                                                  const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsModifiers.galgas", 105)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 106)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsModifiers.galgas", 107)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsModifiers.galgas", 107)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 108)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsModifiers.galgas", 109)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsModifiers.galgas", 109)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 109)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_33_TypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 110)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsModifiers.galgas", 111)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsModifiers.galgas", 111)), constinArgument_inInputArgument_33_Name  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 111)) ;
  {
  ioArgument_ioModifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inModifierName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 113))  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 113)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsModifiers.galgas", 114)), var_argList, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsModifiers.galgas", 117)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 112)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterModifierWithoutArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWithoutArgument (GALGAS_setterMap & ioArgument_ioModifierMap,
                                           const GALGAS_string constinArgument_inModifierName,
                                           const GALGAS_bool constinArgument_inHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioModifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inModifierName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 130))  COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 130)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsModifiers.galgas", 131)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsModifiers.galgas", 132)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsModifiers.galgas", 134)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsModifiers.galgas", 129)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInstanceMethodWithoutArgument'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithoutArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                 const GALGAS_lstring constinArgument_inInstanceMethodName,
                                                 const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.modifier_insertKey (constinArgument_inInstanceMethodName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 24)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 25)), constinArgument_inInstanceMethodName.reader_location (SOURCE_FILE ("semanticsInstanceMethods.galgas", 26)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 28)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 22)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'enterInstanceMethodWithInputArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithInputArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                   const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                   const GALGAS_string constinArgument_inInputArgumentName,
                                                   const GALGAS_lstring constinArgument_inInstanceMethodName,
                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 43)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 44)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)) ;
  {
  ioArgument_ioInstanceMethodMap.modifier_insertKey (constinArgument_inInstanceMethodName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 48)), var_argList, constinArgument_inInstanceMethodName.reader_location (SOURCE_FILE ("semanticsInstanceMethods.galgas", 50)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'enterInstanceMethodWithOutputArgument'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithOutputArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inOutputArgumentTypeName,
                                                    const GALGAS_string constinArgument_inOutputArgumentName,
                                                    const GALGAS_lstring constinArgument_inInstanceMethodName,
                                                    const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 68)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 69)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 69)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 69)) ;
  {
  ioArgument_ioInstanceMethodMap.modifier_insertKey (constinArgument_inInstanceMethodName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 72)), var_argList, constinArgument_inInstanceMethodName.reader_location (SOURCE_FILE ("semanticsInstanceMethods.galgas", 74)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 76)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 70)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterClassMethodWithInputArgument'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterClassMethodWithInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inClassMethodName,
                                                const GALGAS_string constinArgument_inArgumentTypeName,
                                                const GALGAS_string constinArgument_inArgumentName,
                                                const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsClassMethods.galgas", 27)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsClassMethods.galgas", 28)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsClassMethods.galgas", 28)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 28)) ;
  {
  ioArgument_ioClassMethodMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 30))  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 30)), var_argList, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 29)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'enterClassMethodWithStringInputArgument'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterClassMethodWithStringInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      const GALGAS_string constinArgument_inClassMethodName,
                                                      const GALGAS_string constinArgument_inStringArgumentName,
                                                      const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 45)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsClassMethods.galgas", 46)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticsClassMethods.galgas", 47)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsClassMethods.galgas", 47)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 47)) ;
  {
  ioArgument_ioClassMethodMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 49))  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 49)), var_argList, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 48)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'compilerCppName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_compilerCppName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GALGAS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GALGAS_string gOnceFunctionResult_compilerCppName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_compilerCppName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compilerCppName) {
    gOnceFunctionResult_compilerCppName = onceFunction_compilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compilerCppName = true ;
  }
  return gOnceFunctionResult_compilerCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_compilerCppName (void) {
  gOnceFunctionResult_compilerCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_compilerCppName (NULL,
                                                             releaseOnceFunctionResult_compilerCppName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_compilerCppName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_compilerCppName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_compilerCppName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_compilerCppName ("compilerCppName",
                                                                 functionWithGenericHeader_compilerCppName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_compilerCppName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Once function 'syntaxDirectedTranslationResultVarName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_syntaxDirectedTranslationResultVarName (C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GALGAS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_syntaxDirectedTranslationResultVarName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_syntaxDirectedTranslationResultVarName = onceFunction_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_syntaxDirectedTranslationResultVarName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_syntaxDirectedTranslationResultVarName (NULL,
                                                                                    releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (C_Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_syntaxDirectedTranslationResultVarName ("syntaxDirectedTranslationResultVarName",
                                                                                        functionWithGenericHeader_syntaxDirectedTranslationResultVarName,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        0,
                                                                                        functionArgs_syntaxDirectedTranslationResultVarName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'addCategories'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addCategories (const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                            const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                            const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                            const GALGAS_lstring constinArgument_inTypeName,
                            GALGAS_getterMap & ioArgument_ioReaderMap,
                            GALGAS_setterMap & ioArgument_ioModifierMap,
                            GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inCategoryMethodMapForBuildingContext.reader_hasKey (constinArgument_inTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 548)) COMMA_SOURCE_FILE ("semanticContext.galgas", 548)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_categoryMethodMapForType var_categoryMethodMapForType ;
    constinArgument_inCategoryMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_categoryMethodMapForType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 550)) ;
    cEnumerator_categoryMethodMapForType enumerator_27502 (var_categoryMethodMapForType, kEnumeration_up) ;
    while (enumerator_27502.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 552)) ;
      cEnumerator_formalParameterListAST enumerator_27610 (enumerator_27502.current_mFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_27610.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_27610.current_mFormalArgumentTypeName (HERE), var_typeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 554)) ;
        }
        var_formalArgumentList.addAssign_operation (enumerator_27610.current_mFormalSelector (HERE), var_typeIndex, enumerator_27610.current_mFormalArgumentPassingMode (HERE), enumerator_27610.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 559)) ;
        enumerator_27610.gotoNextObject () ;
      }
      {
      ioArgument_ioInstanceMethodMap.modifier_insertKey (enumerator_27502.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsCategory (SOURCE_FILE ("semanticContext.galgas", 563)), var_formalArgumentList, enumerator_27502.current_lkey (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 565)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 567)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 561)) ;
      }
      enumerator_27502.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = constinArgument_inCategoryReaderMapForBuildingContext.reader_hasKey (constinArgument_inTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 573)) COMMA_SOURCE_FILE ("semanticContext.galgas", 573)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_categoryReaderMapForType var_categoryReaderMapForType ;
    constinArgument_inCategoryReaderMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_categoryReaderMapForType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 575)) ;
    cEnumerator_categoryReaderMapForType enumerator_28463 (var_categoryReaderMapForType, kEnumeration_up) ;
    while (enumerator_28463.hasCurrentObject ()) {
      GALGAS_functionSignature var_formalArgumentList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 577)) ;
      cEnumerator_formalInputParameterListAST enumerator_28569 (enumerator_28463.current_mInputFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_28569.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_28569.current_mFormalArgumentTypeName (HERE), var_typeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 580)) ;
        }
        var_formalArgumentList.addAssign_operation (enumerator_28569.current_mFormalSelector (HERE), var_typeIndex, enumerator_28569.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 581)) ;
        enumerator_28569.gotoNextObject () ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_28463.current_mResultTypeName (HERE), var_returnedType COMMA_SOURCE_FILE ("semanticContext.galgas", 584)) ;
      }
      {
      ioArgument_ioReaderMap.modifier_insertKey (enumerator_28463.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsCategory (SOURCE_FILE ("semanticContext.galgas", 587)), var_formalArgumentList, enumerator_28463.current_lkey (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 589)), GALGAS_bool (true), var_returnedType, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 592)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 585)) ;
      }
      enumerator_28463.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = constinArgument_inCategoryModifierMapForBuildingContext.reader_hasKey (constinArgument_inTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 598)) COMMA_SOURCE_FILE ("semanticContext.galgas", 598)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_categoryModifierMapForType var_categoryModifierMapForType ;
    constinArgument_inCategoryModifierMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_categoryModifierMapForType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 600)) ;
    cEnumerator_categoryModifierMapForType enumerator_29538 (var_categoryModifierMapForType, kEnumeration_up) ;
    while (enumerator_29538.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 602)) ;
      cEnumerator_formalParameterListAST enumerator_29646 (enumerator_29538.current_mFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_29646.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_29646.current_mFormalArgumentTypeName (HERE), var_typeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 605)) ;
        }
        var_formalArgumentList.addAssign_operation (enumerator_29646.current_mFormalSelector (HERE), var_typeIndex, enumerator_29646.current_mFormalArgumentPassingMode (HERE), enumerator_29646.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 606)) ;
        enumerator_29646.gotoNextObject () ;
      }
      {
      ioArgument_ioModifierMap.modifier_insertKey (enumerator_29538.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsCategory (SOURCE_FILE ("semanticContext.galgas", 610)), var_formalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 613)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 608)) ;
      }
      enumerator_29538.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'elementTypeNameSuffix'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_elementTypeNameSuffix (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("-element") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_elementTypeNameSuffix = false ;
static GALGAS_string gOnceFunctionResult_elementTypeNameSuffix ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_elementTypeNameSuffix (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_elementTypeNameSuffix) {
    gOnceFunctionResult_elementTypeNameSuffix = onceFunction_elementTypeNameSuffix (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_elementTypeNameSuffix = true ;
  }
  return gOnceFunctionResult_elementTypeNameSuffix ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_elementTypeNameSuffix (void) {
  gOnceFunctionResult_elementTypeNameSuffix.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_elementTypeNameSuffix (NULL,
                                                                   releaseOnceFunctionResult_elementTypeNameSuffix) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_elementTypeNameSuffix [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_elementTypeNameSuffix (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_elementTypeNameSuffix (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_elementTypeNameSuffix ("elementTypeNameSuffix",
                                                                       functionWithGenericHeader_elementTypeNameSuffix,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_elementTypeNameSuffix) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivelyEnumerateDirectories'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivelyEnumerateDirectories (const GALGAS_string constinArgument_inAbsoluteSourcePath,
                                              const GALGAS_string constinArgument_inPathInWrapper,
                                              const GALGAS_wrapperExtensionMap constinArgument_inTextFileExtensionMap,
                                              const GALGAS_wrapperExtensionMap constinArgument_inBinaryFileExtensionMap,
                                              GALGAS_wrapperFileMap & outArgument_outWrapperFileMap,
                                              GALGAS_wrapperDirectoryMap & outArgument_outWrapperDirectoryMap,
                                              GALGAS_uint & ioArgument_ioWrapperFileIndex,
                                              GALGAS_uint & ioArgument_ioWrapperDirectoryIndex,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GALGAS_uint var_currentDirectoryIndex = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1611)) ;
  GALGAS_stringlist var_files = constinArgument_inAbsoluteSourcePath.reader_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 1613)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1614)) ;
  cEnumerator_stringlist enumerator_67537 (var_files, kEnumeration_up) ;
  while (enumerator_67537.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inTextFileExtensionMap.reader_hasKey (enumerator_67537.current_mValue (HERE).reader_pathExtension (SOURCE_FILE ("semanticContext.galgas", 1616)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1616)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_absoluteFilePath = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1617)).add_operation (enumerator_67537.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1617)) ;
      {
      outArgument_outWrapperFileMap.modifier_insertKey (GALGAS_lstring::constructor_new (enumerator_67537.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1619))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1619)), var_absoluteFilePath, GALGAS_bool (true), var_currentDirectoryIndex, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1618)) ;
      }
      ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1625)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = constinArgument_inBinaryFileExtensionMap.reader_hasKey (enumerator_67537.current_mValue (HERE).reader_pathExtension (SOURCE_FILE ("semanticContext.galgas", 1626)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1626)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_absoluteFilePath = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1627)).add_operation (enumerator_67537.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1627)) ;
        {
        outArgument_outWrapperFileMap.modifier_insertKey (GALGAS_lstring::constructor_new (enumerator_67537.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1629))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1629)), var_absoluteFilePath, GALGAS_bool (false), var_currentDirectoryIndex, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1628)) ;
        }
        ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1635)) ;
      }
    }
    enumerator_67537.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories = constinArgument_inAbsoluteSourcePath.reader_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 1639)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1640)) ;
  cEnumerator_stringlist enumerator_68488 (var_directories, kEnumeration_up) ;
  while (enumerator_68488.hasCurrentObject ()) {
    GALGAS_wrapperFileMap var_internalWrapperFileMap ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap ;
    GALGAS_uint var_theDirectoryIndex = ioArgument_ioWrapperDirectoryIndex ;
    {
    routine_recursivelyEnumerateDirectories (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1646)).add_operation (enumerator_68488.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1646)), constinArgument_inPathInWrapper.add_operation (enumerator_68488.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1647)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1647)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap, var_internalWrapperDirectoryMap, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1645)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.modifier_insertKey (GALGAS_lstring::constructor_new (enumerator_68488.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1656))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1656)), var_internalWrapperFileMap, var_internalWrapperDirectoryMap, var_theDirectoryIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1655)) ;
    }
    enumerator_68488.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList = constinArgument_inSemanticDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_128581 (constinArgument_inSemanticDeclarationList, kEnumeration_up) ;
  while (enumerator_128581.hasCurrentObject ()) {
    callCategoryMethod_addAssociatedElement ((const cPtr_semanticDeclarationAST *) enumerator_128581.current_mSemanticDeclaration (HERE).ptr (), var_semanticDeclarationList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3011)) ;
    enumerator_128581.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("semanticContext.galgas", 3017)) ;
  GALGAS_categoryMethodMapForBuildingContext var_categoryMethodMapForBuildingContext = GALGAS_categoryMethodMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3018)) ;
  GALGAS_categoryReaderMapForBuildingContext var_categoryReaderMapForBuildingContext = GALGAS_categoryReaderMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3019)) ;
  GALGAS_categoryModifierMapForBuildingContext var_categoryModifierMapForBuildingContext = GALGAS_categoryModifierMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3020)) ;
  GALGAS_semanticDeclarationListAST var_categoryOverrideDefinitionList = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3021)) ;
  cEnumerator_semanticDeclarationListAST enumerator_129317 (var_semanticDeclarationList, kEnumeration_up) ;
  while (enumerator_129317.hasCurrentObject ()) {
    callCategoryMethod_enterDeclarationInGraph ((const cPtr_semanticDeclarationAST *) enumerator_129317.current_mSemanticDeclaration (HERE).ptr (), var_semanticTypePrecedenceGraph, var_categoryMethodMapForBuildingContext, var_categoryReaderMapForBuildingContext, var_categoryModifierMapForBuildingContext, var_categoryOverrideDefinitionList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3023)) ;
    enumerator_129317.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_semanticTypePrecedenceGraph.reader_undefinedNodeCount (SOURCE_FILE ("semanticContext.galgas", 3031)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("semanticContext.galgas", 3032)) ;
    cEnumerator_lstringlist enumerator_129777 (var_semanticTypePrecedenceGraph.reader_undefinedNodeReferenceList (SOURCE_FILE ("semanticContext.galgas", 3033)), kEnumeration_up) ;
    while (enumerator_129777.hasCurrentObject ()) {
      GALGAS_location location_1 (enumerator_129777.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_129777.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3034)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3034)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3034))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3034)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      enumerator_129777.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST ;
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST ;
    GALGAS_lstringlist var_unsortedNodeKeyList ;
    GALGAS_lstringlist joker_130009 ; // Joker input parameter
    var_semanticTypePrecedenceGraph.method_topologicalSort (var_sortedSemanticDeclarationListAST, joker_130009, var_unsortedSemanticDeclarationListAST, var_unsortedNodeKeyList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3037)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST.reader_length (SOURCE_FILE ("semanticContext.galgas", 3043)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST.reader_length (SOURCE_FILE ("semanticContext.galgas", 3044)).reader_string (SOURCE_FILE ("semanticContext.galgas", 3044)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3044)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3044)) ;
      cEnumerator_semanticDeclarationListAST enumerator_130409 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_130409.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "-  ").add_operation (callCategoryReader_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_130409.current_mSemanticDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3046))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3046)) ;
        enumerator_130409.gotoNextObject () ;
      }
      GALGAS_location location_3 (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3048)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, var_s  COMMA_SOURCE_FILE ("semanticContext.galgas", 3048)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_sortedSemanticDeclarationListAST.dotAssign_operation (var_categoryOverrideDefinitionList  COMMA_SOURCE_FILE ("semanticContext.galgas", 3051)) ;
      outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("semanticContext.galgas", 3053)) ;
      cEnumerator_semanticDeclarationListAST enumerator_130830 (var_sortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_130830.hasCurrentObject ()) {
        callCategoryMethod_enterInSemanticContext ((const cPtr_semanticDeclarationAST *) enumerator_130830.current_mSemanticDeclaration (HERE).ptr (), var_categoryMethodMapForBuildingContext, var_categoryReaderMapForBuildingContext, var_categoryModifierMapForBuildingContext, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3056)) ;
        enumerator_130830.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateInstructionList'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInstructionList (GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 29)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_2778 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_2778.hasCurrentObject ()) {
    callCategoryMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_2778.current (HERE).mAttribute_mInstruction.ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 31)) ;
    enumerator_2778.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 39)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkAssignmentTypes'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentTypes (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSourceType,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_sourceType = constinArgument_inSourceType ;
  GALGAS_bool var_ok = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).isValid ()) {
    uint32_t variant_28791 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).uintValue () ;
    bool loop_28791 = true ;
    while (loop_28791) {
      loop_28791 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).operator_and (var_sourceType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).isValid () ;
      if (loop_28791) {
        loop_28791 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).operator_and (var_sourceType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)).boolValue () ;
      }
      if (loop_28791 && (0 == variant_28791)) {
        loop_28791 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 359)) ;
      }
      if (loop_28791) {
        variant_28791 -- ;
        var_sourceType = var_sourceType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 360)) ;
        var_ok = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType)) ;
      }
    }
  }
  const enumGalgasBool test_0 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 363)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)).add_operation (constinArgument_inSourceType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 364)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeConstructorInvocation'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeConstructorInvocation (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                           const GALGAS_lstring constinArgument_inTypeName,
                                           const GALGAS_lstring constinArgument_inConstructorName,
                                           const GALGAS_actualOutputExpressionList constinArgument_inConstuctorEffectiveParameterExpressions,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outConstructorType,
                                           GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                           GALGAS_bool & outArgument_outHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outConstructorType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, constinArgument_inTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 667)) ;
  }
  const enumGalgasBool test_1 = outArgument_outConstructorType.reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 669)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (constinArgument_inTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 670)) ;
    outArgument_outReturnedType.drop () ; // Release error dropped variable
    outArgument_outConstructorType.drop () ; // Release error dropped variable
    outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
    outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap = outArgument_outConstructorType.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 673)) ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList ;
    const cMapElement_constructorMap * objectArray_42709 = (const cMapElement_constructorMap *) var_constructorMap.readAccessForWithInstruction (constinArgument_inConstructorName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 676))) ;
    if (NULL != objectArray_42709) {
        macroValidSharedObject (objectArray_42709, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList = objectArray_42709->mAttribute_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_42709->mAttribute_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_42709->mAttribute_mReturnedType ;
    }else{
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_constructorMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 681)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (constinArgument_inConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 683)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 683))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 682)) ;
        var_constructorFormalArgumentTypeList.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_constructorMap enumerator_43231 (var_constructorMap, kEnumeration_up) ;
        while (enumerator_43231.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_43231.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 688))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 688)) ;
          cEnumerator_functionSignature enumerator_43303 (enumerator_43231.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_43303.hasCurrentObject ()) {
            GALGAS_string temp_5 ;
            const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_43303.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              temp_5 = enumerator_43303.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 690)) ;
            }else if (kBoolFalse == test_6) {
              temp_5 = GALGAS_string::makeEmptyString () ;
            }
            var_s.dotAssign_operation (GALGAS_string (" \?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 690)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 690)).add_operation (enumerator_43303.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 690))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 690)) ;
            enumerator_43303.gotoNextObject () ;
          }
          var_s.dotAssign_operation (GALGAS_string (" -> @").add_operation (enumerator_43231.current_mReturnedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 692))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 692)) ;
          enumerator_43231.gotoNextObject () ;
        }
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_constructorMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 696)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string ("available constructors are") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string ("available constructor is") ;
        }
        GALGAS_location location_9 (constinArgument_inConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_9, GALGAS_string ("the '@").add_operation (constinArgument_inTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (constinArgument_inConstructorName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (GALGAS_string ("' constructor; "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 696)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 697))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 694)) ;
        var_constructorFormalArgumentTypeList.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inConstuctorEffectiveParameterExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 702)).objectCompare (var_constructorFormalArgumentTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 702)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_location location_11 (constinArgument_inConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_11, GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)).add_operation (constinArgument_inTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)).add_operation (var_constructorFormalArgumentTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)).add_operation (constinArgument_inConstuctorEffectiveParameterExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 706)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 706))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 703)) ;
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 708)) ;
    cEnumerator_actualOutputExpressionList enumerator_44483 (constinArgument_inConstuctorEffectiveParameterExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_44524 (var_constructorFormalArgumentTypeList, kEnumeration_up) ;
    while (enumerator_44483.hasCurrentObject () && enumerator_44524.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_44483.current_mExpression (HERE).ptr (), enumerator_44524.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 711)) ;
      {
      routine_checkAssignmentTypes (enumerator_44524.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 712)), enumerator_44483.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 712)) ;
      }
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_44524.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_44483.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string temp_13 ;
        const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_44524.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_14) {
          temp_13 = enumerator_44524.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 714)) ;
        }else if (kBoolFalse == test_14) {
          temp_13 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_15 (enumerator_44483.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the selector should be '!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 714)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 714))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 714)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 716)) ;
      enumerator_44483.gotoNextObject () ;
      enumerator_44524.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checkReaderImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_checkReaderImplementationInSuperClasses (const GALGAS_lstring & constinArgument_inReaderName,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSuperClass,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inSuperClass.reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 940)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    GALGAS_methodQualifier var_qualifier ;
    GALGAS_methodKind joker_53776_5 ; // Joker input parameter
    GALGAS_functionSignature joker_53776_4 ; // Joker input parameter
    GALGAS_location joker_53776_3 ; // Joker input parameter
    GALGAS_bool joker_53776_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_53776_1 ; // Joker input parameter
    GALGAS_string joker_53791 ; // Joker input parameter
    constinArgument_inSuperClass.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 944)).method_searchKey (constinArgument_inReaderName, joker_53776_5, joker_53776_4, joker_53776_3, joker_53776_2, joker_53776_1, var_qualifier, joker_53791, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 944)) ;
    switch (var_qualifier.enumValue ()) {
    case GALGAS_methodQualifier::kNotBuilt:
      break ;
    case GALGAS_methodQualifier::kEnum_isAbstract:
      {
        result_outResult = GALGAS_string::makeEmptyString () ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isBasic:
    case GALGAS_methodQualifier::kEnum_isBasicFinal:
    case GALGAS_methodQualifier::kEnum_isOverriding:
      {
        result_outResult = constinArgument_inSuperClass.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 949)) ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isInherited:
    case GALGAS_methodQualifier::kEnum_isOverridingAbstract:
      {
        result_outResult = function_checkReaderImplementationInSuperClasses (constinArgument_inReaderName, constinArgument_inSuperClass.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 951)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 951)) ;
      }
      break ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkReaderImplementationInSuperClasses [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkReaderImplementationInSuperClasses (C_Compiler * inCompiler,
                                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  return function_checkReaderImplementationInSuperClasses (operand0,
                                                           operand1,
                                                           inCompiler
                                                           COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkReaderImplementationInSuperClasses ("checkReaderImplementationInSuperClasses",
                                                                                         functionWithGenericHeader_checkReaderImplementationInSuperClasses,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         2,
                                                                                         functionArgs_checkReaderImplementationInSuperClasses) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'checkDiadicOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkDiadicOperator (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inLeftType,
                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRightType,
                                  const GALGAS_bool constinArgument_inOperandIsHandled,
                                  const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1050)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)).add_operation (constinArgument_inRightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1051)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_rightType = constinArgument_inRightType ;
    GALGAS_bool var_ok = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).isValid ()) {
      uint32_t variant_58324 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).uintValue () ;
      bool loop_58324 = true ;
      while (loop_58324) {
        loop_58324 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).operator_and (var_rightType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).isValid () ;
        if (loop_58324) {
          loop_58324 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).operator_and (var_rightType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)).boolValue () ;
        }
        if (loop_58324 && (0 == variant_58324)) {
          loop_58324 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)) ;
        }
        if (loop_58324) {
          variant_58324 -- ;
          var_rightType = var_rightType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1057)) ;
          var_ok = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType)) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1061)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = constinArgument_inRightType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1063)).reader_hasKey (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1063)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1063)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool var_hasCompilerArgument ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
        GALGAS_methodKind var_kind ;
        GALGAS_functionSignature var_argumentTypeList ;
        GALGAS_location joker_58870 ; // Joker input parameter
        GALGAS_methodQualifier joker_58938_2 ; // Joker input parameter
        GALGAS_string joker_58938_1 ; // Joker input parameter
        constinArgument_inRightType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1067)).method_searchKey (constinArgument_inLeftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1068)), var_kind, var_argumentTypeList, joker_58870, var_hasCompilerArgument, var_returnedType, joker_58938_2, joker_58938_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1067)) ;
        var_ok = GALGAS_bool (kIsEqual, var_argumentTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1076)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1076)) ;
        GALGAS_semanticExpressionForGeneration var_conversionExpression = GALGAS_readerCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)), constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)), var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)) ;
        ioArgument_ioRightExpression = var_conversionExpression ;
      }
      const enumGalgasBool test_3 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1089)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1091)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1091)).add_operation (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1091)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1091)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1091)).add_operation (constinArgument_inRightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1092)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1092)).add_operation (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1093)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)).add_operation (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeSemanticInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSemanticInstructionList (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                             const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                             const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                             const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                             const GALGAS_location constinArgument_inEndOfBranchLocation,
                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                             GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 55)) ;
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 57)) ;
  }
  cEnumerator_localConstantList enumerator_3785 (constinArgument_inLocalConstantList, kEnumeration_up) ;
  while (enumerator_3785.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3785.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_3785.current_mName (HERE), enumerator_3785.current_mType (HERE), enumerator_3785.current_mCppName (HERE), enumerator_3785.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 61)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioVariableMap.modifier_insertLocalConstant (enumerator_3785.current_mName (HERE), enumerator_3785.current_mType (HERE), enumerator_3785.current_mCppName (HERE), enumerator_3785.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 63)) ;
      }
    }
    enumerator_3785.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4074 (constinArgument_inLocalInitializedVariableList, kEnumeration_up) ;
  while (enumerator_4074.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (enumerator_4074.current_mName (HERE), enumerator_4074.current_mType (HERE), enumerator_4074.current_mCppName (HERE), enumerator_4074.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 68)) ;
    }
    enumerator_4074.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_4229 (constinArgument_inSemanticInstructionListAST, kEnumeration_up) ;
  while (enumerator_4229.hasCurrentObject ()) {
    callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_4229.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 72)) ;
    enumerator_4229.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 79)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeErrorOrWarningInstruction (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                               const GALGAS_semanticExpressionAST constinArgument_inLocationExpression,
                                               const GALGAS_semanticExpressionAST constinArgument_inMessageExpression,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_string constinArgument_inErrorOrWarningString,
                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outLocationExpression,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outMessageExpression,
                                               GALGAS_bool & outArgument_outUseLocationReader,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outUseLocationReader.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_locationType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location").reader_nowhere (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 443)) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), var_locationType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447)) ;
  outArgument_outUseLocationReader = GALGAS_bool (kIsNotEqual, outArgument_outLocationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 454)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLocationType)) ;
  const enumGalgasBool test_0 = outArgument_outUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_getterMap var_getterMap = outArgument_outLocationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 456)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 456)) ;
    const cMapElement_getterMap * objectArray_19530 = (const cMapElement_getterMap *) var_getterMap.readAccessForWithInstruction (GALGAS_string ("location")) ;
    if (NULL != objectArray_19530) {
        macroValidSharedObject (objectArray_19530, cMapElement_getterMap) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, objectArray_19530->mAttribute_mArgumentTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 458)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)).add_operation (outArgument_outLocationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)).add_operation (GALGAS_string ("' and defines a 'location' reader with arguments; it should be either of the '@location' type, either defines a 'location' reader without argument that"
          " returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 459)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, objectArray_19530->mAttribute_mReturnedType.objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLocationType)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).add_operation (outArgument_outLocationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).add_operation (GALGAS_string ("' and defines a 'location' reader that returns an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).add_operation (objectArray_19530->mAttribute_mReturnedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 465)).add_operation (GALGAS_string ("' object; it should be either of the '@location' type, either defines a 'location' reader without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 465))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 463)) ;
        }
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470)).add_operation (outArgument_outLocationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470)).add_operation (GALGAS_string ("' and does not define a 'location' reader; it should be either of the '@location' type, either defines a 'location' reader without argument that return"
        "s an '@location' object"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 469)) ;
    }
  }
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 475)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 482)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)).add_operation (outArgument_outMessageExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 483)) ;
  }
}


