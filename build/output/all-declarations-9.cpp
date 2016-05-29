#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


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
  result << in_PROJECT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue () ;
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
  GALGAS_string var_projectName = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 40)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  var_galgas_5F_sources_5F_DIR.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  inCompiler->printMessage (GALGAS_string ("*** DONE ***\n")  COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'projectCreation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_projectCreation (const GALGAS_string constinArgument_inProjectPath,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_length (SOURCE_FILE ("projectCreation.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).add_operation (GALGAS_string (" option) ***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61))  COMMA_SOURCE_FILE ("projectCreation.galgas", 61)) ;
    GALGAS_string var_projectName = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 63)) ;
    GALGAS_bool var_ok = var_projectName.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 64)) ;
    GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 1U) ;
    if (var_projectName.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).isValid ()) {
      uint32_t variant_5298 = var_projectName.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).uintValue () ;
      bool loop_5298 = true ;
      while (loop_5298) {
        loop_5298 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (var_projectName.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).isValid () ;
        if (loop_5298) {
          loop_5298 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (var_projectName.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).boolValue () ;
        }
        if (loop_5298 && (0 == variant_5298)) {
          loop_5298 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 66)) ;
        }
        if (loop_5298) {
          variant_5298 -- ;
          GALGAS_char var_c = var_projectName.getter_characterAtIndex (var_idx, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 68)) ;
          var_ok = var_c.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 69)).operator_or (GALGAS_bool (kIsEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 69)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_ok.operator_not (SOURCE_FILE ("projectCreation.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 74))  COMMA_SOURCE_FILE ("projectCreation.galgas", 73)) ;
    }
    const enumGalgasBool test_2 = var_ok.boolEnum () ;
    if (kBoolTrue == test_2) {
      var_ok = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 78)).operator_not (SOURCE_FILE ("projectCreation.galgas", 78)) ;
      const enumGalgasBool test_3 = var_ok.operator_not (SOURCE_FILE ("projectCreation.galgas", 79)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80))  COMMA_SOURCE_FILE ("projectCreation.galgas", 80)) ;
      }
    }
    const enumGalgasBool test_4 = var_ok.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_performProjectCreation (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 84)) ;
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
  GALGAS_string var_s = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateTypesForAST.galgas", 442)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_s.getter_length (SOURCE_FILE ("templateTypesForAST.galgas", 443)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s  COMMA_SOURCE_FILE ("templateTypesForAST.galgas", 444))  COMMA_SOURCE_FILE ("templateTypesForAST.galgas", 444)) ;
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
  cEnumerator_templateInstructionListAST enumerator_53702 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_53702.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((const cPtr_templateInstructionAST *) enumerator_53702.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1156)) ;
    enumerator_53702.gotoNextObject () ;
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
  cEnumerator_templateInstructionListForGeneration enumerator_2620 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_2620.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((const cPtr_templateInstructionForGeneration *) enumerator_2620.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_2620.gotoNextObject () ;
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
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 509))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 509)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 509)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 510))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 510)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 510)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 511))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 511)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 511)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 512))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 512)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 512)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 513))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 513)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 513)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 514))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 514)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 514)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 515))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 515)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 515)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)) ;
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
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
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
    const enumGalgasBool test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_21979.current_mTypeName (HERE).getter_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 536)) COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 536)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lexicalTypeEnum var_lexicalType ;
      constinArgument_inLexicalTypeMap.method_searchKey (enumerator_21979.current_mTypeName (HERE), var_lexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 537)) ;
      {
      ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_21979.current_mName (HERE), var_lexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 538)) ;
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_m = GALGAS_string::makeEmptyString () ;
      var_m.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_21979.current_mTypeName (HERE).getter_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 541)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 541)) ;
      GALGAS_bool var_firstLoop = GALGAS_bool (true) ;
      cEnumerator_lexicalTypeMap enumerator_22367 (constinArgument_inLexicalTypeMap, kEnumeration_up) ;
      while (enumerator_22367.hasCurrentObject ()) {
        var_m.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_22367.current_lkey (HERE).getter_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 544)) ;
        if (enumerator_22367.hasNextObject ()) {
          var_m.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 546)) ;
        }
        enumerator_22367.gotoNextObject () ;
      }
      GALGAS_location location_1 (enumerator_21979.current_mTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
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
  cEnumerator_terminalDeclarationListAST enumerator_23176 (constinArgument_inLexiqueComponentRoot.getter_mTerminalDeclarationList (SOURCE_FILE ("lexiqueTypesForAST.galgas", 568)), kEnumeration_up) ;
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
    outArgument_outTerminalMap.setter_insertKey (enumerator_23176.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 575)) ;
    }
    enumerator_23176.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_23625 (constinArgument_inLexiqueComponentRoot.getter_mLexicalListDeclarationList (SOURCE_FILE ("lexiqueTypesForAST.galgas", 578)), kEnumeration_up) ;
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
      outArgument_outTerminalMap.setter_insertKey (enumerator_23965.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 586)) ;
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
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 44)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 54)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 55)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 56)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 57)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), var_lexicalRoutineFormalArgumentList, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 70)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 67)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("resetString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), temp_0, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 82)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 95)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 96)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 97)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 105)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 106)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 107)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 108)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 116)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 117)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 118)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 119)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 127)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 128)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 129)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 130)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 131)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 139)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 140)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 141)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 142)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 143)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 151)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 152)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 153)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 154)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 155)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 156)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 164)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 165)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 166)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 167)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 168)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 169)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 178)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), var_lexicalRoutineFormalArgumentList, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 179)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), var_lexicalRoutineFormalArgumentList, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), var_lexicalRoutineFormalArgumentList, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), var_lexicalRoutineFormalArgumentList, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 218)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 218)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 222)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 222)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 220))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 220)), var_lexicalRoutineFormalArgumentList, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 227)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 228)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 228)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 228)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 232)) ;
  temp_6.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 232)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 230))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 230)), var_lexicalRoutineFormalArgumentList, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 238)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 238)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 240)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 243))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 243)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 242)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 250)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 251)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 251)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 251)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 253)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 254)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 256))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 256)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 255)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 262)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 263)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 264)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 264)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 264)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 266)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 267)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 269))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 269)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 268)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 275)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 276)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 277)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 277)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 277)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 279)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 280)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 282))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 282)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 281)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 288)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 289)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 289)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 289)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 290)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 290)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 290)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 294)) ;
  temp_7.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 294)) ;
  temp_7.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 294)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 292))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 292)), var_lexicalRoutineFormalArgumentList, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 300)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 300)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 300)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 302)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 305))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 305)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 304)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 311)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 312)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 313)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 313)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 313)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 315)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 316)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 318))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 318)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 317)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 324)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 325)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 326)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 326)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 326)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 328)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 329)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 331))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 331)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 330)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 337)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 338)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 339)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 339)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 339)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 341)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 342)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 344))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 344)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 343)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 350)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 351)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 352)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 352)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 352)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 354)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 355)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 357))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 357)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 356)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 363)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 364)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 365)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 365)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 365)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 367)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 369))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 369)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 368)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 376)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 377)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 377)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 377)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 379)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 381))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 381)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 380)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 388)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 389)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 389)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 389)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 391)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 392)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 394))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 394)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 393)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 400)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 401)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 402)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 402)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 402)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 404)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 405)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 407))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 407)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 406)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 413)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 414)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 415)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 415)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 415)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 417)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 418)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 420))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 420)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 419)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 426)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 427)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 428)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 428)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 428)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 430)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 431)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 433))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 433)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 432)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 439)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 440)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 441)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 441)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 441)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 443)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 445))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 445)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 444)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 452)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 453)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 453)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 453)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454)) ;
  var_errorMessageList.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 455)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 457))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 457)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 456)) ;
  }
  var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)) ;
  var_errorMessageList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 464)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 465)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 465)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465)) ;
  var_lexicalRoutineFormalArgumentList.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 468))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 468)), var_lexicalRoutineFormalArgumentList, var_errorMessageList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 467)) ;
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
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 480)) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 482)) ;
  var_lexicalTypeList.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 483)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 483)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toLower"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 485))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 485)), var_lexicalTypeList, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 487)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 484)) ;
  }
  var_lexicalTypeList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)) ;
  var_lexicalTypeList.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 493)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toUpper"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 495))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 495)), var_lexicalTypeList, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 497)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)) ;
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
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 510)) ;
  }
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  var_s.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 513)) ;
  cEnumerator_lexicalRoutineMap enumerator_24092 (var_lexicalRoutineMap, kEnumeration_up) ;
  while (enumerator_24092.hasCurrentObject ()) {
    var_s.plusAssign_operation(enumerator_24092.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 515)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_24166 (enumerator_24092.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_24166.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_24166.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24166.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)).add_operation (enumerator_24166.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 517)) ;
      enumerator_24166.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_24366 (enumerator_24092.current_mErrorMessageList (HERE), kEnumeration_up) ;
    const bool bool_0 = true ;
    if (enumerator_24366.hasCurrentObject () && bool_0) {
      var_s.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 520)) ;
      while (enumerator_24366.hasCurrentObject () && bool_0) {
        var_s.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_24366.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 521)) ;
        enumerator_24366.gotoNextObject () ;
        if (enumerator_24366.hasCurrentObject () && bool_0) {
          var_s.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 522)) ;
        }
      }
    }
    var_s.plusAssign_operation(GALGAS_string (" ;\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 524)) ;
    enumerator_24092.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 528)) ;
  }
  var_s.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
  cEnumerator_lexicalFunctionMap enumerator_24798 (var_lexicalFunctionMap, kEnumeration_up) ;
  while (enumerator_24798.hasCurrentObject ()) {
    var_s.plusAssign_operation(enumerator_24798.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_24855 (enumerator_24798.current_mLexicalTypeList (HERE), kEnumeration_up) ;
    while (enumerator_24855.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24855.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 534)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 534)).add_operation (enumerator_24855.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 534)) ;
      enumerator_24855.gotoNextObject () ;
    }
    var_s.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24798.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_24798.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_s.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_24798.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 538)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 538)).add_operation (enumerator_24798.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 538)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 538)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 538)) ;
    }
    var_s.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 540)) ;
    enumerator_24798.gotoNextObject () ;
  }
  var_s.plusAssign_operation(GALGAS_string ("************************************************************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)) ;
  inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 544)) ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 16)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_955 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 16)), kEnumeration_up) ;
    while (enumerator_955.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_955.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_routine_" ;
        result << enumerator_955.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 18)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_1101_ (0) ;
        if (enumerator_955.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_1101 (enumerator_955.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
          while (enumerator_1101.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_1101.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 20)).stringValue () ;
            result << extensionGetter_cppTypeName (enumerator_1101.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 21)).stringValue () ;
            result << extensionGetter_cppReferenceInFormalArgument (enumerator_1101.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 22)).stringValue () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 38)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_2207 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 38)), kEnumeration_up) ;
    while (enumerator_2207.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_2207.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_2207.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 40)).stringValue () ;
        result << " scanner_function_" ;
        result << enumerator_2207.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 40)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_2370_ (0) ;
        if (enumerator_2207.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_2370 (enumerator_2207.current_mLexicalTypeList (HERE), kEnumeration_up) ;
          while (enumerator_2370.hasCurrentObject ()) {
            result << ",\n"
              "                const " ;
            result << extensionGetter_cppTypeName (enumerator_2370.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 42)).stringValue () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 56)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3227 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 56)), kEnumeration_up) ;
    while (enumerator_3227.hasCurrentObject ()) {
      result << "  public : " ;
      result << extensionGetter_cppTypeName (enumerator_3227.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 57)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3227.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 57)).stringValue () ;
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
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 91)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)).isValid ()) {
    cEnumerator_terminalList enumerator_118 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)), kEnumeration_up) ;
    while (enumerator_118.hasCurrentObject ()) {
      result << ",\n"
        "   kToken_" ;
      result << enumerator_118.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).stringValue () ;
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
      result << enumerator_243.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 10)).stringValue () ;
      result << "'\n"
        "  public : static int16_t search_into_" ;
      result << enumerator_243.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 11)).stringValue () ;
      result << " (const C_String & inSearchedString) ;\n" ;
      index_243_.increment () ;
      enumerator_243.gotoNextObject () ;
    }
  }
  result << "  \n"
    "\n"
    "//--- Assign from attribute\n" ;
  GALGAS_uint index_501_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_501 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)), kEnumeration_up) ;
    while (enumerator_501.hasCurrentObject ()) {
      result << "  public : GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_501.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " synthetizedAttribute_" ;
      result << enumerator_501.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " (void) const ;\n" ;
      index_501_.increment () ;
      enumerator_501.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Attribute access\n" ;
  GALGAS_uint index_761_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_761 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)), kEnumeration_up) ;
    while (enumerator_761.hasCurrentObject ()) {
      result << "  public : " ;
      result << extensionGetter_cppTypeName (enumerator_761.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " attributeValue_" ;
      result << enumerator_761.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
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
      result << enumerator_966.current_mIndexName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 33)).stringValue () ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 48)).getter_length (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 48)).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 48)).stringValue () ;
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
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//     L E X I Q U E                                                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"strings/unicode_character_cpp.h\"\n"
    "#include \"galgas2/scanner_actions.h\"\n"
    "#include \"galgas2/cLexiqueIntrospection.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void)" ;
  GALGAS_uint index_978_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_978 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    const bool nonEmpty_enumerator_978 = enumerator_978.hasCurrentObject () ;
    if (nonEmpty_enumerator_978) {
      result << " :\n" ;
    }
    while (enumerator_978.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_978.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue () ;
      result << " ()" ;
      if (enumerator_978.hasNextObject ()) {
        result << ",\n" ;
      }
      index_978_.increment () ;
      enumerator_978.gotoNextObject () ;
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
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inDependencyFileExtension,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inDependencyFilePath,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceFileName\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE)" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 30)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceString,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inStringForError\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 43)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 54)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                        Lexical error message list                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_3172_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_3172 (in_LEXICAL_5F_MESSAGE_5F_MAP, kEnumeration_up) ;
    while (enumerator_3172.hasCurrentObject ()) {
      result << "\n"
        "static const char * gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3172.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue () ;
      result << " = " ;
      result << enumerator_3172.current_mLexicalMessage (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue () ;
      result << " ;\n" ;
      index_3172_.increment () ;
      enumerator_3172.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//          Syntax error messages, for every terminal symbol                                                           *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_3703_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3703 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_3703.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_3703.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 70)).stringValue () ;
      result << "$' :\n"
        "static const char * gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3703.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 71)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 71)).stringValue () ;
      result << " = " ;
      result << enumerator_3703.current_mSyntaxErrorMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 71)).stringValue () ;
      result << " ;\n" ;
      index_3703_.increment () ;
      enumerator_3703.gotoNextObject () ;
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
    "  static const char * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_4582_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4582 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_4582.hasCurrentObject ()) {
      result << ",\n"
        "    gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4582.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 81)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 81)).stringValue () ;
      index_4582_.increment () ;
      enumerator_4582.gotoNextObject () ;
    }
  }
  result << "} ;\n"
    "  return syntaxErrorMessageArray [inTerminalIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                      U N I C O D E    S T R I N G S                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_5160_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_5160 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kEnumeration_up) ;
    while (enumerator_5160.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_5160.current_key (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_5160.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 93)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5160.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)).stringValue () ;
        result << " [] = " ;
        result << enumerator_5160.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_5160_.increment () ;
      enumerator_5160.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_5462_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5462 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kEnumeration_up) ;
    while (enumerator_5462.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//             Key words table '" ;
      result << enumerator_5462.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 101)).stringValue () ;
      result << "'                            *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5462.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 103)).stringValue () ;
      result << " = " ;
      result << enumerator_5462.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 103)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 103)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5462.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 104)).stringValue () ;
      result << " [ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5462.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 104)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6197_ (0) ;
      if (enumerator_5462.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_6197 (enumerator_5462.current_mTokenSortedList (HERE), kEnumeration_up) ;
        while (enumerator_6197.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6197.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 106)).stringValue () ;
          result << ", " ;
          result << enumerator_6197.current_mLength (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 106)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_6197.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 106)).stringValue () ;
          result << ")" ;
          if (enumerator_6197.hasNextObject ()) {
            result << ",\n" ;
          }
          index_6197_.increment () ;
          enumerator_6197.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_5462.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 110)).stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5462.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 111)).stringValue () ;
      result << ", ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5462.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 111)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_5462_.increment () ;
      enumerator_5462.gotoNextObject () ;
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
  GALGAS_uint index_7539_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7539 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_7539.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_7539.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 130)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 130)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_7539.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 132)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 132)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_7871_ (0) ;
      if (enumerator_7539.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_7871 (enumerator_7539.current_mSentAttributeList (HERE), kEnumeration_up) ;
        while (enumerator_7871.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << extensionGetter_appendMethodName (enumerator_7871.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 136)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_7871.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 136)).stringValue () ;
          result << extensionGetter_appendArgumentOfMethod (enumerator_7871.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 136)).stringValue () ;
          result << ") ;\n" ;
          index_7871_.increment () ;
          enumerator_7871.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_7539_.increment () ;
      enumerator_7539.gotoNextObject () ;
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
  GALGAS_uint index_8755_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 151)).isValid ()) {
    cEnumerator_templateDelimitorList enumerator_8755 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 151)), kEnumeration_up) ;
    const bool nonEmpty_enumerator_8755 = enumerator_8755.hasCurrentObject () ;
    if (nonEmpty_enumerator_8755) {
      result << "static const cTemplateDelimiter kTemplateDefinitionArray [" ;
      result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 152)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8755.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_8755.current_mStartString (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 153)).stringValue () ;
      result << ", " ;
      result << enumerator_8755.current_mStartString (HERE).mAttribute_string.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 153)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 153)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8755.current_mEndString (HERE).mAttribute_string.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_8755.current_mEndString (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 157)).stringValue () ;
        result << ", " ;
        result << enumerator_8755.current_mEndString (HERE).mAttribute_string.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 157)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 157)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_8755.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).stringValue () ;
      result << ")" ;
      if (enumerator_8755.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8755_.increment () ;
      enumerator_8755.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8755) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                           Template Replacements                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_9750_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_9750 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kEnumeration_up) ;
    const bool nonEmpty_enumerator_9750 = enumerator_9750.hasCurrentObject () ;
    if (nonEmpty_enumerator_9750) {
      result << "static const cTemplateDelimiter kTemplateReplacementArray [" ;
      result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 171)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 171)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_9750.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9750.current_mMatchString (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << ", " ;
      result << enumerator_9750.current_mMatchString (HERE).mAttribute_string.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9750.current_mReplacementString (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).stringValue () ;
      result << ", " ;
      result << enumerator_9750.current_mReplacementString (HERE).mAttribute_string.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9750.current_mReplacementFunction (HERE).mAttribute_string.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_9750.current_mReplacementFunction (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 178)).stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_9750.hasNextObject ()) {
        result << ",\n" ;
      }
      index_9750_.increment () ;
      enumerator_9750.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_9750) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//            Terminal Symbols as end of script in template mark                                                       *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 189)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_10844_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 190)).isValid ()) {
      cEnumerator_terminalList enumerator_10844 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 190)), kEnumeration_up) ;
      const bool nonEmpty_enumerator_10844 = enumerator_10844.hasCurrentObject () ;
      if (nonEmpty_enumerator_10844) {
        result << "static const bool kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_10844.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_10844.current_mIsEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 192)).stringValue () ;
        result << " /* " ;
        result << enumerator_10844.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 192)).stringValue () ;
        result << " */" ;
        if (enumerator_10844.hasNextObject ()) {
          result << ",\n" ;
        }
        index_10844_.increment () ;
        enumerator_10844.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10844) {
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
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 209)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 223)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 223)).stringValue () ;
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
    result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 239)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 239)).stringValue () ;
    result << ") ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n"
      "        advance () ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
    GALGAS_uint index_13845_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_13845 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_13845.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_13845.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 247)).stringValue () ;
        result << extensionGetter_initialization (enumerator_13845.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 247)).stringValue () ;
        result << " ;\n" ;
        index_13845_.increment () ;
        enumerator_13845.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 8U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 8U).uintValue ()) ;
    }
    GALGAS_uint index_14060_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_14060 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_14060.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_14060.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 254)).stringValue () ;
        index_14060_.increment () ;
        enumerator_14060.gotoNextObject () ;
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
    GALGAS_uint index_14754_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_14754 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
      while (enumerator_14754.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_14754.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 272)).stringValue () ;
        result << extensionGetter_initialization (enumerator_14754.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 272)).stringValue () ;
        result << " ;\n" ;
        index_14754_.increment () ;
        enumerator_14754.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_14969_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_14969 (in_LEXICAL_5F_RULE_5F_LIST, kEnumeration_up) ;
      while (enumerator_14969.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_14969.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 279)).stringValue () ;
        index_14969_.increment () ;
        enumerator_14969.gotoNextObject () ;
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
  GALGAS_uint index_16470_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_16470 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_16470.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_16470.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 312)).stringValue () ;
      result << " = inToken.mLexicalAttribute_" ;
      result << enumerator_16470.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 312)).stringValue () ;
      result << " ;\n" ;
      index_16470_.increment () ;
      enumerator_16470.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//               A T T R I B U T E   A C C E S S                                                                       *\n" ;
  GALGAS_uint index_16926_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_16926 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_16926.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n" ;
      result << extensionGetter_cppTypeName (enumerator_16926.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 322)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_16926.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 322)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) mCurrentTokenPtr ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_16926.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 324)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_16926_.increment () ;
      enumerator_16926.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                                                 *\n" ;
  GALGAS_uint index_17673_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17673 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kEnumeration_up) ;
    while (enumerator_17673.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_17673.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 332)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 332)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_17673.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 332)).stringValue () ;
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
      result << extensionGetter_lexicalTypeBaseName (enumerator_17673.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 336)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 336)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_17673.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 336)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_17673.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 337)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 337)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_17673_.increment () ;
      enumerator_17673.gotoNextObject () ;
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
  GALGAS_uint index_19158_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 347)).isValid ()) {
    cEnumerator_terminalList enumerator_19158 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 347)), kEnumeration_up) ;
    while (enumerator_19158.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_19158.current_mTerminalName (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 348)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_19158_.increment () ;
      enumerator_19158.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 356)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_7) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_19612_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_19612 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kEnumeration_up) ;
    while (enumerator_19612.hasCurrentObject ()) {
      result << "  ioList.addObject (" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 360)).add_operation (enumerator_19612.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 360)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 360)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 360)).stringValue () ;
      result << ") ;\n" ;
      index_19612_.increment () ;
      enumerator_19612.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const C_String & " ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "/* inIdentifier */" ;
  }else if (kBoolFalse == test_8) {
    result << "inIdentifier" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "bool & " ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 367)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "/* ioFound */" ;
  }else if (kBoolFalse == test_9) {
    result << "ioFound" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 368)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_10) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_20260_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_20260 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kEnumeration_up) ;
    while (enumerator_20260.hasCurrentObject ()) {
      result << "  if (inIdentifier == " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)).add_operation (enumerator_20260.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)).stringValue () ;
      result << ") {\n"
        "    ioFound = true ;\n" ;
      GALGAS_uint index_20410_ (0) ;
      if (enumerator_20260.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_20410 (enumerator_20260.current_mTokenSortedList (HERE), kEnumeration_up) ;
        while (enumerator_20410.hasCurrentObject ()) {
          result << "    ioList.addObject (" ;
          result << enumerator_20410.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 375)).stringValue () ;
          result << ") ;\n" ;
          index_20410_.increment () ;
          enumerator_20410.gotoNextObject () ;
        }
      }
      result << "    ioList.sortArrayUsingCompareMethod() ;\n"
        "  }\n" ;
      index_20260_.increment () ;
      enumerator_20260.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static cLexiqueIntrospection lexiqueIntrospection_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "\n"
    "__attribute__ ((used))\n"
    "__attribute__ ((unused)) (getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ", getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "uint32_t C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n"
    "  static const uint32_t kTerminalSymbolStyles [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 393)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 393)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 393)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_21467_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_21467 (in_TERMINAL_5F_LIST, kEnumeration_up) ;
    while (enumerator_21467.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_21467.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 395)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_21467.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 395)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 395)).stringValue () ;
      result << " */" ;
      index_21467_.increment () ;
      enumerator_21467.gotoNextObject () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 406)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 406)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 406)).stringValue () ;
  result << ") {\n"
    "    static const char * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 407)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 407)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 407)).stringValue () ;
  result << "] = {\n"
    "      \"\"" ;
  GALGAS_uint index_22362_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_22362 (in_LEXICAL_5F_STYLE_5F_LIST, kEnumeration_up) ;
    while (enumerator_22362.hasCurrentObject ()) {
      result << ",\n"
        "      " ;
      result << enumerator_22362.current_mName (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).stringValue () ;
      index_22362_.increment () ;
      enumerator_22362.gotoNextObject () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_698 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)), kEnumeration_up) ;
    while (enumerator_698.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_698.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_cocoa_routine_" ;
        result << enumerator_698.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 12)).stringValue () ;
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
            result << extensionGetter_cppConstInFormalArgument (enumerator_852.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result << extensionGetter_cocoaTypeName (enumerator_852.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result << extensionGetter_cocoaPointerInFormalArgument (enumerator_852.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1865 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)), kEnumeration_up) ;
    while (enumerator_1865.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1865.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1865.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " scanner_cocoa_function_" ;
        result << enumerator_1865.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
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
            result << extensionGetter_cppTypeName (enumerator_2036.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)).isValid ()) {
    cEnumerator_terminalList enumerator_2867 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)), kEnumeration_up) ;
    while (enumerator_2867.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_2867.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 61)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3722 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 61)), kEnumeration_up) ;
    while (enumerator_3722.hasCurrentObject ()) {
      result << "  @private " ;
      result << extensionGetter_cocoaTypeName (enumerator_3722.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3722.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static NSArray * kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue () ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "static NSArray * kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue () ;
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
      result << enumerator_2043.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue () ;
      result << " = " ;
      result << extensionGetter_cocoaInitializationCode (enumerator_2043.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue () ;
      result << " ;\n" ;
      index_2043_.increment () ;
      enumerator_2043.gotoNextObject () ;
    }
  }
  result << "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  if (nil == kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue () ;
    result << ") {\n"
      "    kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_2492_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 42)).isValid ()) {
      cEnumerator_templateDelimitorList enumerator_2492 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 42)), kEnumeration_up) ;
      while (enumerator_2492.hasCurrentObject ()) {
        result << "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result << enumerator_2492.current_mStartString (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue () ;
        result << " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2492.current_mEndString (HERE).mAttribute_string.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result << "nil" ;
        }else if (kBoolFalse == test_3) {
          result << "@" ;
          result << enumerator_2492.current_mEndString (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue () ;
        }
        result << " discardStartString:" ;
        result << enumerator_2492.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
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
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "  if (nil == kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue () ;
    result << ") {\n"
      "\n"
      "    kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3167_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3167 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_3167.hasCurrentObject ()) {
        result << "      @" ;
        result << enumerator_3167.current_mMatchString (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue () ;
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
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 84)).stringValue () ;
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
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 95)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_4966_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_4966 (in_INDEXING_5F_LIST, kEnumeration_up) ;
      while (enumerator_4966.hasCurrentObject ()) {
        result << "    @" ;
        result << enumerator_4966.current_mIndexComment (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 99)).stringValue () ;
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
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_5981_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 117)).isValid ()) {
      cEnumerator_terminalList enumerator_5981 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 117)), kEnumeration_up) ;
      const bool nonEmpty_enumerator_5981 = enumerator_5981.hasCurrentObject () ;
      if (nonEmpty_enumerator_5981) {
        result << "static const BOOL kEndOfScriptInTemplateArray_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).stringValue () ;
        result << " [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 118)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_5981.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_5981.current_mIsEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 119)).stringValue () ;
        result << " /* " ;
        result << enumerator_5981.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 119)).stringValue () ;
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
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_6189 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)), kEnumeration_up) ;
    while (enumerator_6189.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_6189.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "//                                                                                                                     *\n"
          "//             Key words table '" ;
        result << enumerator_6189.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 131)).stringValue () ;
        result << "'                            *\n"
          "//                                                                                                                     *\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "static const C_cocoa_lexique_table_entry ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).stringValue () ;
        result << "_" ;
        result << enumerator_6189.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).stringValue () ;
        result << " [" ;
        result << enumerator_6189.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 134)).stringValue () ;
        result << "] = {\n" ;
        GALGAS_uint index_7107_ (0) ;
        if (enumerator_6189.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_7107 (enumerator_6189.current_mTokenSortedList (HERE), kEnumeration_up) ;
          while (enumerator_7107.hasCurrentObject ()) {
            result << "  {" ;
            result << enumerator_7107.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 136)).stringValue () ;
            result << ", " ;
            result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result << "_1_" ;
            result << enumerator_7107.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 136)).stringValue () ;
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
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 140)).stringValue () ;
        result << "_" ;
        result << enumerator_6189.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 140)).stringValue () ;
        result << " (NSString * inSearchedString) {\n"
          "  return searchStringInTable (inSearchedString, ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).stringValue () ;
        result << "_" ;
        result << enumerator_6189.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).stringValue () ;
        result << ", " ;
        result << enumerator_6189.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 141)).stringValue () ;
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
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 159)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 160)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n"
      "      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 161)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n"
      "      " ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      result << "\n"
        "      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 168)).stringValue () ;
      result << "] ;\n"
        "      " ;
    }else if (kBoolFalse == test_9) {
    }
    result << "\n"
      "      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 170)).stringValue () ;
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
        result << extensionGetter_cocoaResetPrefix (enumerator_9706.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_9706.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_9706.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
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
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9922.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 184)).stringValue () ;
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
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 193)).stringValue () ;
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
        result << extensionGetter_cocoaResetPrefix (enumerator_10543.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 202)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_10543.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 202)).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_10543.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 202)).stringValue () ;
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
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10755.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 208)).stringValue () ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).stringValue () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).stringValue () ;
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
  result << GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 251)).objectCompare (GALGAS_uint ((uint32_t) 0U))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 251)).stringValue () ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 261)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_14117_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 262)).isValid ()) {
    cEnumerator_terminalList enumerator_14117 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 262)), kEnumeration_up) ;
    while (enumerator_14117.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_14117.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 263)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_14117.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 263)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 263)).stringValue () ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 275)).stringValue () ;
  result << "] = {NO" ;
  GALGAS_uint index_15138_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 276)).isValid ()) {
    cEnumerator_terminalList enumerator_15138 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 276)), kEnumeration_up) ;
    while (enumerator_15138.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_15138.current_mAtomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 277)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_15138.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 277)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 277)).stringValue () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 291)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 291)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 291)).stringValue () ;
  result << "] = {\n"
    "      @\"Default Style\"" ;
  GALGAS_uint index_16240_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_16240 (in_LEXICAL_5F_STYLE_5F_LIST, kEnumeration_up) ;
    while (enumerator_16240.hasCurrentObject ()) {
      result << ",\n"
        "      @" ;
      result << enumerator_16240.current_mComment (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 294)).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 294)).stringValue () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 309)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 309)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 309)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 310)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 310)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 310)).stringValue () ;
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
      result << enumerator_17295.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 313)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_635.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_1412.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_2191.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_2977.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_634.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_634.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1756.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1756.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2945.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2945.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_4162.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_4162.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
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
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue () ;
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
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue () ;
  result << " (NSMutableArray * ioBoolOptionArray,\n"
    "                                                       NSMutableArray * ioUIntOptionArray,\n"
    "                                                       NSMutableArray * ioStringOptionArray,\n"
    "                                                       NSMutableArray * ioStringListOptionArray) {\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_915.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_915.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_915.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_915.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1380.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1380.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1380.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1380.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1380.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1882.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1882.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1882.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1882.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1882.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
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
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2391.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2391.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2391.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2391.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2391.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
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
                                                                                const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"OC_Token.h\"\n"
    "#import \"F_CocoaWrapperForGalgas.h\"\n" ;
  GALGAS_uint index_101_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 4)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_101 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 4)), kEnumeration_up) ;
    while (enumerator_101.hasCurrentObject ()) {
      result << "#import \"lexique-" ;
      result << enumerator_101.current_mLexiqueClassName (HERE).stringValue () ;
      result << "-cocoa.m\"\n" ;
      index_101_.increment () ;
      enumerator_101.gotoNextObject () ;
    }
  }
  GALGAS_uint index_202_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 7)).isValid ()) {
    cEnumerator_stringlist enumerator_202 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 7)), kEnumeration_up) ;
    while (enumerator_202.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_202.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_202_.increment () ;
      enumerator_202.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 25)).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1301_ (0) ;
    if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 33)).isValid ()) {
      cEnumerator_stringlist enumerator_1301 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 33)), kEnumeration_up) ;
      while (enumerator_1301.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1301.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1301.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1301_.increment () ;
        enumerator_1301.gotoNextObject () ;
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
  GALGAS_uint index_2226_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 53)).isValid ()) {
    cEnumerator_stringlist enumerator_2226 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 53)), kEnumeration_up) ;
    while (enumerator_2226.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_2226.current_mValue (HERE).stringValue () ;
      result << "-cocoa.m\"\n" ;
      index_2226_.increment () ;
      enumerator_2226.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2683_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 64)).isValid ()) {
    cEnumerator_stringlist enumerator_2683 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 64)), kEnumeration_up) ;
    while (enumerator_2683.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2683.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2683_.increment () ;
      enumerator_2683.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"verbose_output\"\n"
      "    commandChar:'v'\n"
      "    commandString:@\"verbose\"\n"
      "    comment:@\"Verbose output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"quiet_output\"\n"
      "    commandChar:'q'\n"
      "    commandString:@\"quiet\"\n"
      "    comment:@\"Quiet output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }
  result << "  [ioBoolOptionArray addObject:option] ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_3537_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 90)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3537 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 90)), kEnumeration_up) ;
    while (enumerator_3537.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3537.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//                                                                                                                     *\n"
        "//                     P O P    U P    L I S T    D A T A                                                              *\n"
        "//                                                                                                                     *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n" ;
      GALGAS_uint index_4376_ (0) ;
      if (enumerator_3537.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4376 (enumerator_3537.current_mLabels (HERE), kEnumeration_up) ;
        while (enumerator_4376.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3537.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).stringValue () ;
          result << "_" ;
          result << enumerator_4376.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_4376.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_4376.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4674_ (0) ;
          if (enumerator_4376.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4674 (enumerator_4376.current_mTerminalList (HERE), kEnumeration_up) ;
            while (enumerator_4674.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3537.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4674.current_mTerminal (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 102)).stringValue () ;
              result << ", " ;
              result << enumerator_4674.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 102)).stringValue () ;
              result << ",\n" ;
              index_4674_.increment () ;
              enumerator_4674.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_4376_.increment () ;
          enumerator_4376.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3537.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).stringValue () ;
      result << " [" ;
      result << enumerator_3537.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_4974_ (0) ;
      if (enumerator_3537.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4974 (enumerator_3537.current_mLabels (HERE), kEnumeration_up) ;
        while (enumerator_4974.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3537.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 109)).stringValue () ;
          result << "_" ;
          result << enumerator_4974.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 109)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 109)).stringValue () ;
          result << ",\n" ;
          index_4974_.increment () ;
          enumerator_4974.gotoNextObject () ;
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
      result << enumerator_3537.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3537.current_mLexiqueClassName (HERE).stringValue () ;
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
      result << enumerator_3537.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3537.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 131)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3537.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 135)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3537.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 139)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 139)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3537.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 143)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3537.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 147)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 147)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 147)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7617_ (0) ;
      if (enumerator_3537.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7617 (enumerator_3537.current_mTextMacroList (HERE), kEnumeration_up) ;
        while (enumerator_7617.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7617.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).stringValue () ;
          result << ",\n" ;
          index_7617_.increment () ;
          enumerator_7617.gotoNextObject () ;
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
      result << enumerator_3537.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_8066_ (0) ;
      if (enumerator_3537.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_8066 (enumerator_3537.current_mTextMacroList (HERE), kEnumeration_up) ;
        while (enumerator_8066.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_8066.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 159)).stringValue () ;
          result << ",\n" ;
          index_8066_.increment () ;
          enumerator_8066.gotoNextObject () ;
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
      index_3537_.increment () ;
      enumerator_3537.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_8633_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 174)).isValid ()) {
    cEnumerator_extensionMap enumerator_8633 (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 174)), kEnumeration_up) ;
    const bool nonEmpty_enumerator_8633 = enumerator_8633.hasCurrentObject () ;
    if (nonEmpty_enumerator_8633) {
      result << "  if" ;
    }
    while (enumerator_8633.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_8633.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 176)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_8633.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_8633.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_8633_.increment () ;
      enumerator_8633.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8633) {
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
  GALGAS_uint index_9059_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 188)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_9059 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 188)), kEnumeration_up) ;
    while (enumerator_9059.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_9059.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_9059_.increment () ;
      enumerator_9059.gotoNextObject () ;
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
//                                   Routine 'compileAllGuiComponentFromASTGalgas3'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileAllGuiComponentFromASTGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST constinArgument_inGuiComponentListAST,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 89)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_4804 (constinArgument_inGuiComponentListAST, kEnumeration_up) ;
  while (enumerator_4804.hasCurrentObject ()) {
    {
    routine_compileGuiComponentGalgas_33_ (enumerator_4804.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 91)) ;
    }
    enumerator_4804.gotoNextObject () ;
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
    GALGAS_location location_1 (constinArgument_inGUIComponentAST.mAttribute_mGUIComponentName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the gui name should be 'cocoa'")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 107)) ;
  }
  GALGAS_guiAnalysisContext var_context = GALGAS_guiAnalysisContext::constructor_new (GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 111)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 112)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 113)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 114)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 115)), GALGAS_extensionMap::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 116)), GALGAS_importedLexiqueList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 117))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 110)) ;
  cEnumerator_lstringlist enumerator_5853 (constinArgument_inGUIComponentAST.mAttribute_mImportedOptionList, kEnumeration_up) ;
  while (enumerator_5853.hasCurrentObject ()) {
    GALGAS_bool joker_5950_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_5950_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_5950_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_5950_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_5950_1 ; // Joker input parameter
    constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (enumerator_5853.current_mValue (HERE), joker_5950_5, joker_5950_4, joker_5950_3, joker_5950_2, joker_5950_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
    var_context.mAttribute_mImportedOptionComponentList.addAssign_operation (enumerator_5853.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("guiCompilation.galgas", 125)) ;
    enumerator_5853.gotoNextObject () ;
  }
  cEnumerator_guiSimpleAttributeListAST enumerator_6106 (constinArgument_inGUIComponentAST.mAttribute_mGlobalSimpleAttributeList, kEnumeration_up) ;
  while (enumerator_6106.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_6106.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 129)).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_6106.current_mKey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_3, GALGAS_string ("the '").add_operation (enumerator_6106.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 130))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
    }else if (kBoolFalse == test_2) {
      cEnumerator_stringlist enumerator_6303 (enumerator_6106.current_mValue (HERE).mAttribute_string.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)), kEnumeration_up) ;
      while (enumerator_6303.hasCurrentObject ()) {
        var_context.mAttribute_mNibAndClassList.addAssign_operation (enumerator_6303.current_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
        enumerator_6303.gotoNextObject () ;
      }
    }
    enumerator_6106.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_6460 (constinArgument_inGUIComponentAST.mAttribute_mWithLexiqueList, kEnumeration_up) ;
  while (enumerator_6460.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap ;
    GALGAS_indexingListAST joker_6625_2 ; // Joker input parameter
    GALGAS_lstring joker_6625_1 ; // Joker input parameter
    constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (enumerator_6460.current_mLexiqueFileName (HERE), var_terminalMap, joker_6625_2, joker_6625_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 140)) ;
    GALGAS_stringset var_terminalSymbolSet = var_terminalMap.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 146)) ;
    cEnumerator_guiLabelListAST enumerator_6757 (enumerator_6460.current_mLabels (HERE), kEnumeration_up) ;
    while (enumerator_6757.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_6790 (enumerator_6757.current_mTerminalList (HERE), kEnumeration_up) ;
      while (enumerator_6790.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_terminalSymbolSet.getter_hasKey (enumerator_6790.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 150)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 150)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 150)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_6790.current_mTerminal (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '$").add_operation (enumerator_6790.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 151)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 152)).add_operation (enumerator_6460.current_mLexiqueFileName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 153)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 154))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 151)) ;
        }
        enumerator_6790.gotoNextObject () ;
      }
      enumerator_6757.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 160)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_7178 (enumerator_6460.current_mCompoundAttributes (HERE), kEnumeration_up) ;
    while (enumerator_7178.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_7178.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 162)).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_7178.current_mKey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
      }else if (kBoolFalse == test_6) {
        var_textMacroList.addAssign_operation (enumerator_7178.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 165)), enumerator_7178.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 165))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 165)) ;
      }
      enumerator_7178.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_7628 (enumerator_6460.current_mSimpleAttributes (HERE), kEnumeration_up) ;
    while (enumerator_7628.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_7628.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 175)).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        var_context.mAttribute_mExtensionMap.setter_insertKey (enumerator_7628.current_mValue (HERE), enumerator_6460.current_mLexiqueFileName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)) ;
        }
        var_hasAssociatedExtension = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_7628.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 178)).objectCompare (GALGAS_string ("title"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const enumGalgasBool test_10 = var_hasTabViewTitle.boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_location location_11 (enumerator_7628.current_mKey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (enumerator_7628.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 180))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
          }
          var_hasTabViewTitle = GALGAS_bool (true) ;
          var_tabViewTitle = enumerator_7628.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 183)) ;
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_7628.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 184)).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            const enumGalgasBool test_13 = var_hasBlockComment.boolEnum () ;
            if (kBoolTrue == test_13) {
              GALGAS_location location_14 (enumerator_7628.current_mKey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_7628.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 186))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
            }
            var_hasBlockComment = GALGAS_bool (true) ;
            var_blockComment = enumerator_7628.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          }else if (kBoolFalse == test_12) {
            GALGAS_location location_15 (enumerator_7628.current_mKey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_15, GALGAS_string ("the '").add_operation (enumerator_7628.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 191))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
          }
        }
      }
      enumerator_7628.gotoNextObject () ;
    }
    const enumGalgasBool test_16 = var_hasAssociatedExtension.operator_not (SOURCE_FILE ("guiCompilation.galgas", 195)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location location_17 (enumerator_6460.current_mLexiqueFileName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_17, GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
    }
    const enumGalgasBool test_18 = var_hasTabViewTitle.operator_not (SOURCE_FILE ("guiCompilation.galgas", 199)).boolEnum () ;
    if (kBoolTrue == test_18) {
      GALGAS_location location_19 (enumerator_6460.current_mLexiqueFileName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_19, GALGAS_string ("the 'title' key should be defined once (it is not defined)")  COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
    }
    var_context.mAttribute_mWithLexiqueList.addAssign_operation (enumerator_6460.current_mLexiqueFileName (HERE).mAttribute_string, var_blockComment, var_tabViewTitle, var_textMacroList, enumerator_6460.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
    enumerator_6460.gotoNextObject () ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.mAttribute_mGUIComponentName, var_context, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 211)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateAllGuiComponentsGalgas3'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateAllGuiComponentsGalgas_33_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                 const GALGAS_string constinArgument_inOutputDirectory,
                                                 const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                 GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_9440 (constinArgument_inOptionComponentMapForGeneration, kEnumeration_up) ;
  while (enumerator_9440.hasCurrentObject ()) {
    GALGAS_string var_fileName = GALGAS_string ("gui-").add_operation (enumerator_9440.current_lkey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName  COMMA_SOURCE_FILE ("guiCompilation.galgas", 228)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName  COMMA_SOURCE_FILE ("guiCompilation.galgas", 229)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_9440.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 236))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 230)) ;
    }
    enumerator_9440.gotoNextObject () ;
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
  return function_generateGalgas_33_InstructionTerminator (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixAddOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixAddOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 0U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 257)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixAddOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixAddOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixAddOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixAddOperator) {
    gOnceFunctionResult_infixAddOperator = onceFunction_infixAddOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixAddOperator = true ;
  }
  return gOnceFunctionResult_infixAddOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixAddOperator (void) {
  gOnceFunctionResult_infixAddOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixAddOperator (NULL,
                                                              releaseOnceFunctionResult_infixAddOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixAddOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixAddOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixAddOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixAddOperator ("infixAddOperator",
                                                                  functionWithGenericHeader_infixAddOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixAddOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixSubOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixSubOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 258)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixSubOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixSubOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixSubOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixSubOperator) {
    gOnceFunctionResult_infixSubOperator = onceFunction_infixSubOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixSubOperator = true ;
  }
  return gOnceFunctionResult_infixSubOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixSubOperator (void) {
  gOnceFunctionResult_infixSubOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixSubOperator (NULL,
                                                              releaseOnceFunctionResult_infixSubOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixSubOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixSubOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixSubOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixSubOperator ("infixSubOperator",
                                                                  functionWithGenericHeader_infixSubOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixSubOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixMulOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixMulOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 2U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 259)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixMulOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixMulOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixMulOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixMulOperator) {
    gOnceFunctionResult_infixMulOperator = onceFunction_infixMulOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixMulOperator = true ;
  }
  return gOnceFunctionResult_infixMulOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixMulOperator (void) {
  gOnceFunctionResult_infixMulOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixMulOperator (NULL,
                                                              releaseOnceFunctionResult_infixMulOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixMulOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixMulOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixMulOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixMulOperator ("infixMulOperator",
                                                                  functionWithGenericHeader_infixMulOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixMulOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixDivOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixDivOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 3U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 260)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixDivOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixDivOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixDivOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixDivOperator) {
    gOnceFunctionResult_infixDivOperator = onceFunction_infixDivOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixDivOperator = true ;
  }
  return gOnceFunctionResult_infixDivOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixDivOperator (void) {
  gOnceFunctionResult_infixDivOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixDivOperator (NULL,
                                                              releaseOnceFunctionResult_infixDivOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixDivOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixDivOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixDivOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixDivOperator ("infixDivOperator",
                                                                  functionWithGenericHeader_infixDivOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixDivOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixModOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixModOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 261)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixModOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixModOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixModOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixModOperator) {
    gOnceFunctionResult_infixModOperator = onceFunction_infixModOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixModOperator = true ;
  }
  return gOnceFunctionResult_infixModOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixModOperator (void) {
  gOnceFunctionResult_infixModOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixModOperator (NULL,
                                                              releaseOnceFunctionResult_infixModOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixModOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixModOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixModOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixModOperator ("infixModOperator",
                                                                  functionWithGenericHeader_infixModOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixModOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'infixShiftOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixShiftOperator (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 262)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixShiftOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixShiftOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixShiftOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixShiftOperator) {
    gOnceFunctionResult_infixShiftOperator = onceFunction_infixShiftOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixShiftOperator = true ;
  }
  return gOnceFunctionResult_infixShiftOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixShiftOperator (void) {
  gOnceFunctionResult_infixShiftOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixShiftOperator (NULL,
                                                                releaseOnceFunctionResult_infixShiftOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixShiftOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixShiftOperator (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_infixShiftOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixShiftOperator ("infixShiftOperator",
                                                                    functionWithGenericHeader_infixShiftOperator,
                                                                    & kTypeDescriptor_GALGAS_uint,
                                                                    0,
                                                                    functionArgs_infixShiftOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'prefixPlusOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixPlusOperator (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 6U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 263)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixPlusOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixPlusOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixPlusOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixPlusOperator) {
    gOnceFunctionResult_prefixPlusOperator = onceFunction_prefixPlusOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixPlusOperator = true ;
  }
  return gOnceFunctionResult_prefixPlusOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixPlusOperator (void) {
  gOnceFunctionResult_prefixPlusOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixPlusOperator (NULL,
                                                                releaseOnceFunctionResult_prefixPlusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixPlusOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixPlusOperator (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_prefixPlusOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixPlusOperator ("prefixPlusOperator",
                                                                    functionWithGenericHeader_prefixPlusOperator,
                                                                    & kTypeDescriptor_GALGAS_uint,
                                                                    0,
                                                                    functionArgs_prefixPlusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'prefixMinusOperator'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixMinusOperator (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 264)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixMinusOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixMinusOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixMinusOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixMinusOperator) {
    gOnceFunctionResult_prefixMinusOperator = onceFunction_prefixMinusOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixMinusOperator = true ;
  }
  return gOnceFunctionResult_prefixMinusOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixMinusOperator (void) {
  gOnceFunctionResult_prefixMinusOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixMinusOperator (NULL,
                                                                 releaseOnceFunctionResult_prefixMinusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixMinusOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixMinusOperator (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_prefixMinusOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixMinusOperator ("prefixMinusOperator",
                                                                     functionWithGenericHeader_prefixMinusOperator,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_prefixMinusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'prefixTildeOperator'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixTildeOperator (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 265)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixTildeOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixTildeOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixTildeOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixTildeOperator) {
    gOnceFunctionResult_prefixTildeOperator = onceFunction_prefixTildeOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixTildeOperator = true ;
  }
  return gOnceFunctionResult_prefixTildeOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixTildeOperator (void) {
  gOnceFunctionResult_prefixTildeOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixTildeOperator (NULL,
                                                                 releaseOnceFunctionResult_prefixTildeOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixTildeOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixTildeOperator (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_prefixTildeOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixTildeOperator ("prefixTildeOperator",
                                                                     functionWithGenericHeader_prefixTildeOperator,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_prefixTildeOperator) ;

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
  return function_incDecOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_incDecOperator ("incDecOperator",
                                                                functionWithGenericHeader_incDecOperator,
                                                                & kTypeDescriptor_GALGAS_uint,
                                                                0,
                                                                functionArgs_incDecOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixAndOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixAndOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 10U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 268)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixAndOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixAndOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixAndOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixAndOperator) {
    gOnceFunctionResult_infixAndOperator = onceFunction_infixAndOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixAndOperator = true ;
  }
  return gOnceFunctionResult_infixAndOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixAndOperator (void) {
  gOnceFunctionResult_infixAndOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixAndOperator (NULL,
                                                              releaseOnceFunctionResult_infixAndOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixAndOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixAndOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixAndOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixAndOperator ("infixAndOperator",
                                                                  functionWithGenericHeader_infixAndOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixAndOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'infixOrOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixOrOperator (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 11U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 269)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixOrOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixOrOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixOrOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixOrOperator) {
    gOnceFunctionResult_infixOrOperator = onceFunction_infixOrOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixOrOperator = true ;
  }
  return gOnceFunctionResult_infixOrOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixOrOperator (void) {
  gOnceFunctionResult_infixOrOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixOrOperator (NULL,
                                                             releaseOnceFunctionResult_infixOrOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixOrOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixOrOperator (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_infixOrOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixOrOperator ("infixOrOperator",
                                                                 functionWithGenericHeader_infixOrOperator,
                                                                 & kTypeDescriptor_GALGAS_uint,
                                                                 0,
                                                                 functionArgs_infixOrOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixXorOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixXorOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 12U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 270)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixXorOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixXorOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixXorOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixXorOperator) {
    gOnceFunctionResult_infixXorOperator = onceFunction_infixXorOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixXorOperator = true ;
  }
  return gOnceFunctionResult_infixXorOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixXorOperator (void) {
  gOnceFunctionResult_infixXorOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixXorOperator (NULL,
                                                              releaseOnceFunctionResult_infixXorOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixXorOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixXorOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixXorOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixXorOperator ("infixXorOperator",
                                                                  functionWithGenericHeader_infixXorOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixXorOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'prefixNotOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixNotOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 13U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 271)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixNotOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixNotOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixNotOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixNotOperator) {
    gOnceFunctionResult_prefixNotOperator = onceFunction_prefixNotOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixNotOperator = true ;
  }
  return gOnceFunctionResult_prefixNotOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixNotOperator (void) {
  gOnceFunctionResult_prefixNotOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixNotOperator (NULL,
                                                               releaseOnceFunctionResult_prefixNotOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixNotOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixNotOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_prefixNotOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixNotOperator ("prefixNotOperator",
                                                                   functionWithGenericHeader_prefixNotOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_prefixNotOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'isComparable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_isComparable (C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 14U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 273)) ;
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
  return function_isComparable (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_isComparable ("isComparable",
                                                              functionWithGenericHeader_isComparable,
                                                              & kTypeDescriptor_GALGAS_uint,
                                                              0,
                                                              functionArgs_isComparable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'plusEqualOperatorWithExpression'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_plusEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 275)) ;
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
  return function_plusEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_plusEqualOperatorWithExpression ("plusEqualOperatorWithExpression",
                                                                                 functionWithGenericHeader_plusEqualOperatorWithExpression,
                                                                                 & kTypeDescriptor_GALGAS_uint,
                                                                                 0,
                                                                                 functionArgs_plusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'minusEqualOperatorWithExpression'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_minusEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 276)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_minusEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_minusEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_minusEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_minusEqualOperatorWithExpression) {
    gOnceFunctionResult_minusEqualOperatorWithExpression = onceFunction_minusEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_minusEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_minusEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_minusEqualOperatorWithExpression (void) {
  gOnceFunctionResult_minusEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_minusEqualOperatorWithExpression (NULL,
                                                                              releaseOnceFunctionResult_minusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_minusEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_minusEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_minusEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_minusEqualOperatorWithExpression ("minusEqualOperatorWithExpression",
                                                                                  functionWithGenericHeader_minusEqualOperatorWithExpression,
                                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                                  0,
                                                                                  functionArgs_minusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'mulEqualOperatorWithExpression'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_mulEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 17U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 277)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_mulEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_mulEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_mulEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mulEqualOperatorWithExpression) {
    gOnceFunctionResult_mulEqualOperatorWithExpression = onceFunction_mulEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mulEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_mulEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_mulEqualOperatorWithExpression (void) {
  gOnceFunctionResult_mulEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_mulEqualOperatorWithExpression (NULL,
                                                                            releaseOnceFunctionResult_mulEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mulEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mulEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_mulEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mulEqualOperatorWithExpression ("mulEqualOperatorWithExpression",
                                                                                functionWithGenericHeader_mulEqualOperatorWithExpression,
                                                                                & kTypeDescriptor_GALGAS_uint,
                                                                                0,
                                                                                functionArgs_mulEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'divEqualOperatorWithExpression'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_divEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 18U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 278)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_divEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_divEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_divEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_divEqualOperatorWithExpression) {
    gOnceFunctionResult_divEqualOperatorWithExpression = onceFunction_divEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_divEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_divEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_divEqualOperatorWithExpression (void) {
  gOnceFunctionResult_divEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_divEqualOperatorWithExpression (NULL,
                                                                            releaseOnceFunctionResult_divEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_divEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_divEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_divEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_divEqualOperatorWithExpression ("divEqualOperatorWithExpression",
                                                                                functionWithGenericHeader_divEqualOperatorWithExpression,
                                                                                & kTypeDescriptor_GALGAS_uint,
                                                                                0,
                                                                                functionArgs_divEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixAddOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixAddOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 19U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 280)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixAddOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixAddOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixAddOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixAddOperatorNoOVF) {
    gOnceFunctionResult_infixAddOperatorNoOVF = onceFunction_infixAddOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixAddOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixAddOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixAddOperatorNoOVF (void) {
  gOnceFunctionResult_infixAddOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixAddOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixAddOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixAddOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixAddOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixAddOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixAddOperatorNoOVF ("infixAddOperatorNoOVF",
                                                                       functionWithGenericHeader_infixAddOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixAddOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixSubOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixSubOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 20U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 281)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixSubOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixSubOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixSubOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixSubOperatorNoOVF) {
    gOnceFunctionResult_infixSubOperatorNoOVF = onceFunction_infixSubOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixSubOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixSubOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixSubOperatorNoOVF (void) {
  gOnceFunctionResult_infixSubOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixSubOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixSubOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixSubOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixSubOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixSubOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixSubOperatorNoOVF ("infixSubOperatorNoOVF",
                                                                       functionWithGenericHeader_infixSubOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixSubOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixMulOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixMulOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 21U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 282)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixMulOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixMulOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixMulOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixMulOperatorNoOVF) {
    gOnceFunctionResult_infixMulOperatorNoOVF = onceFunction_infixMulOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixMulOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixMulOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixMulOperatorNoOVF (void) {
  gOnceFunctionResult_infixMulOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixMulOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixMulOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixMulOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixMulOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixMulOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixMulOperatorNoOVF ("infixMulOperatorNoOVF",
                                                                       functionWithGenericHeader_infixMulOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixMulOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixDivOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixDivOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 22U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 283)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixDivOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixDivOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixDivOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixDivOperatorNoOVF) {
    gOnceFunctionResult_infixDivOperatorNoOVF = onceFunction_infixDivOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixDivOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixDivOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixDivOperatorNoOVF (void) {
  gOnceFunctionResult_infixDivOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixDivOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixDivOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixDivOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixDivOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixDivOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixDivOperatorNoOVF ("infixDivOperatorNoOVF",
                                                                       functionWithGenericHeader_infixDivOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixDivOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Once function 'prefixMinusOperatorNoOVF'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixMinusOperatorNoOVF (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 23U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 284)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixMinusOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_prefixMinusOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixMinusOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixMinusOperatorNoOVF) {
    gOnceFunctionResult_prefixMinusOperatorNoOVF = onceFunction_prefixMinusOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixMinusOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_prefixMinusOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixMinusOperatorNoOVF (void) {
  gOnceFunctionResult_prefixMinusOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixMinusOperatorNoOVF (NULL,
                                                                      releaseOnceFunctionResult_prefixMinusOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixMinusOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixMinusOperatorNoOVF (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_prefixMinusOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixMinusOperatorNoOVF ("prefixMinusOperatorNoOVF",
                                                                          functionWithGenericHeader_prefixMinusOperatorNoOVF,
                                                                          & kTypeDescriptor_GALGAS_uint,
                                                                          0,
                                                                          functionArgs_prefixMinusOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'incDecOperatorNoOVF'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_incDecOperatorNoOVF (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 285)) ;
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
  return function_incDecOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 26U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 287)) ;
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
  return function_supportWithAccessor (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 27U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 288)) ;
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
  return function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 28U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 289)) ;
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
  return function_generateEnumerationHelperMethods (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 29U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 290)) ;
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
  return function_doNotGenererateObjectCompare (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_doNotGenererateObjectCompare ("doNotGenererateObjectCompare",
                                                                              functionWithGenericHeader_doNotGenererateObjectCompare,
                                                                              & kTypeDescriptor_GALGAS_uint,
                                                                              0,
                                                                              functionArgs_doNotGenererateObjectCompare) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Once function 'generateDescriptionGetterUtilityMethod'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateDescriptionGetterUtilityMethod (C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 30U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 291)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateDescriptionGetterUtilityMethod = false ;
static GALGAS_uint gOnceFunctionResult_generateDescriptionGetterUtilityMethod ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_generateDescriptionGetterUtilityMethod (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateDescriptionGetterUtilityMethod) {
    gOnceFunctionResult_generateDescriptionGetterUtilityMethod = onceFunction_generateDescriptionGetterUtilityMethod (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateDescriptionGetterUtilityMethod = true ;
  }
  return gOnceFunctionResult_generateDescriptionGetterUtilityMethod ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateDescriptionGetterUtilityMethod (void) {
  gOnceFunctionResult_generateDescriptionGetterUtilityMethod.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateDescriptionGetterUtilityMethod (NULL,
                                                                                    releaseOnceFunctionResult_generateDescriptionGetterUtilityMethod) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateDescriptionGetterUtilityMethod [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateDescriptionGetterUtilityMethod (C_Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  return function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateDescriptionGetterUtilityMethod ("generateDescriptionGetterUtilityMethod",
                                                                                        functionWithGenericHeader_generateDescriptionGetterUtilityMethod,
                                                                                        & kTypeDescriptor_GALGAS_uint,
                                                                                        0,
                                                                                        functionArgs_generateDescriptionGetterUtilityMethod) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Once function 'generateCopyConstructorAndAssignmentOperator'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateCopyConstructorAndAssignmentOperator (C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 292)) ;
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
  return function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 24)) ;
  }
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 30))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 30)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 31)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 29)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 49)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 51)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 54)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 54)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 54)) ;
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 53))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 53)), temp_0, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 52)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 74)) ;
  }
  GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 75)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 77)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 78)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 80)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 80)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82)), var_argumentTypeList, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 104)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 105)) ;
  }
  GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 106)) ;
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 107)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 109)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 110)) ;
  }
  var_argumentTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_t, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113)), var_argumentTypeList, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 112)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inGetterName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 26)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 28))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 28)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 29)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 30)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 31)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 34)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 27)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inGetterName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 49)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 51))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 51)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 52)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 53)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 54)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 57)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 50)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterInheritedGetterWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 73)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 74)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 76)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 77)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 79))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 79)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 80)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 82)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 85)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 78)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 103)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 104)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 106)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 107)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 108)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 109)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 109)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 111))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 111)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 112)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 114)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 117)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 110)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterBaseGetterWithoutArgument'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inGetterName,
                                             const GALGAS_string constinArgument_inReturnedTypeName,
                                             const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 131)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 134)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 135)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 139)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 132)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'enterBaseGetterWithArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                          const GALGAS_string constinArgument_inGetterName,
                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                          const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 156)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 158)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 159)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 159)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 161))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 161)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 162)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 164)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 167)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 160)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterBaseFinalGetterWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 183)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 184)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 186)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 187)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 187)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 189))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 190)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 192)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 195)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 188)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterBaseGetterWith2Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 213)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 214)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 216)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 217)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 217)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 218)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 219)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 219)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 222)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 227)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 220)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 245)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 246)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 248)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 249)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 249)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 250)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 251)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 251)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 254)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 256)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 259)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 252)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWith3Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWith_33_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex COMMA_SOURCE_FILE ("semanticsGetters.galgas", 315)) ;
  }
  GALGAS_functionSignature var_argList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 316)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 318)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 319)), var_t, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 319)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 320)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 321)), var_t, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 321)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t COMMA_SOURCE_FILE ("semanticsGetters.galgas", 322)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 323)), var_t, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 325))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 325)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 326)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 328)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 331)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 324)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'commonGetterMapForAllTypes'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_commonGetterMapForAllTypes (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                         GALGAS_getterMap & outArgument_outMap,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticsGetters.galgas", 341)) ;
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("description"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 342)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("staticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 349)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 356)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("object"), GALGAS_string ("object"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 363)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsSetters.galgas", 27)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 28)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 29)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 29)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 29)) ;
  {
  ioArgument_ioModifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inModifierName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 31))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 31)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 32)), var_argList, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 35)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30)) ;
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
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 76)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsSetters.galgas", 77)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 78)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 78)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 78)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsSetters.galgas", 79)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 80)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 80)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 80)) ;
  {
  ioArgument_ioModifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inModifierName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 82))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 82)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 83)), var_argList, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 86)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 81)) ;
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
  ioArgument_ioModifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inModifierName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 130))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 130)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 131)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 132)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 134)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 129)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInstanceMethodWithoutArgument'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithoutArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                 const GALGAS_string constinArgument_inInstanceMethodName,
                                                 const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 24)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 25)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 26)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 27)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 29)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 23)) ;
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
                                                   const GALGAS_string constinArgument_inInstanceMethodName,
                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 50)), var_argList, GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 48)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 27)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 28)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30)), var_argList, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 29)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 45)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 46)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 47)), var_argumentTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 47)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 47)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 49))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 49)), var_argList, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 48)) ;
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
  return function_compilerCppName (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).getter_object (THERE) ;
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

void routine_addCategories (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                            const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                            const GALGAS_lstring constinArgument_inTypeName,
                            GALGAS_getterMap & ioArgument_ioGetterMap,
                            GALGAS_setterMap & ioArgument_ioModifierMap,
                            GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 548)) COMMA_SOURCE_FILE ("semanticContext.galgas", 548)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_extensionMethodMapForType var_extensionMethodMapForType ;
    constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 550)) ;
    cEnumerator_extensionMethodMapForType enumerator_27569 (var_extensionMethodMapForType, kEnumeration_up) ;
    while (enumerator_27569.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 552)) ;
      cEnumerator_formalParameterListAST enumerator_27677 (enumerator_27569.current_mFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_27677.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_27677.current_mFormalArgumentTypeName (HERE), var_typeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 554)) ;
        }
        var_formalArgumentList.addAssign_operation (enumerator_27677.current_mFormalSelector (HERE), var_typeIndex, enumerator_27677.current_mFormalArgumentPassingMode (HERE), enumerator_27677.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 559)) ;
        enumerator_27677.gotoNextObject () ;
      }
      {
      ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_27569.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 563)), var_formalArgumentList, enumerator_27569.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 565)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 567)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 561)) ;
      }
      enumerator_27569.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 573)) COMMA_SOURCE_FILE ("semanticContext.galgas", 573)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_extensionGetterMapForType var_extensionGetterMapForType ;
    constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 575)) ;
    cEnumerator_extensionGetterMapForType enumerator_28538 (var_extensionGetterMapForType, kEnumeration_up) ;
    while (enumerator_28538.hasCurrentObject ()) {
      GALGAS_functionSignature var_formalArgumentList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 577)) ;
      cEnumerator_formalInputParameterListAST enumerator_28644 (enumerator_28538.current_mInputFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_28644.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_28644.current_mFormalArgumentTypeName (HERE), var_typeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 580)) ;
        }
        var_formalArgumentList.addAssign_operation (enumerator_28644.current_mFormalSelector (HERE), var_typeIndex, enumerator_28644.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 581)) ;
        enumerator_28644.gotoNextObject () ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_28538.current_mResultTypeName (HERE), var_returnedType COMMA_SOURCE_FILE ("semanticContext.galgas", 584)) ;
      }
      {
      ioArgument_ioGetterMap.setter_insertKey (enumerator_28538.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 587)), var_formalArgumentList, enumerator_28538.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 589)), GALGAS_bool (true), var_returnedType, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 592)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 585)) ;
      }
      enumerator_28538.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = constinArgument_inExtensionModifierMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 598)) COMMA_SOURCE_FILE ("semanticContext.galgas", 598)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_extensionModifierMapForType var_extensionModifierMapForType ;
    constinArgument_inExtensionModifierMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionModifierMapForType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 600)) ;
    cEnumerator_extensionModifierMapForType enumerator_29621 (var_extensionModifierMapForType, kEnumeration_up) ;
    while (enumerator_29621.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 602)) ;
      cEnumerator_formalParameterListAST enumerator_29729 (enumerator_29621.current_mFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_29729.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_29729.current_mFormalArgumentTypeName (HERE), var_typeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 605)) ;
        }
        var_formalArgumentList.addAssign_operation (enumerator_29729.current_mFormalSelector (HERE), var_typeIndex, enumerator_29729.current_mFormalArgumentPassingMode (HERE), enumerator_29729.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 606)) ;
        enumerator_29729.gotoNextObject () ;
      }
      {
      ioArgument_ioModifierMap.setter_insertKey (enumerator_29621.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 610)), var_formalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 613)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 608)) ;
      }
      enumerator_29621.gotoNextObject () ;
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
  return function_elementTypeNameSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  ioArgument_ioWrapperDirectoryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1625)) ;
  GALGAS_stringlist var_files = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 1627)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1628)) ;
  cEnumerator_stringlist enumerator_67908 (var_files, kEnumeration_up) ;
  while (enumerator_67908.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_67908.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 1630)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1630)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_absoluteFilePath = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1631)).add_operation (enumerator_67908.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1631)) ;
      {
      outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_67908.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1633))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1633)), var_absoluteFilePath, GALGAS_bool (true), var_currentDirectoryIndex, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1632)) ;
      }
      ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1639)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_67908.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 1640)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1640)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_absoluteFilePath = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1641)).add_operation (enumerator_67908.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1641)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_67908.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1643))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1643)), var_absoluteFilePath, GALGAS_bool (false), var_currentDirectoryIndex, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1642)) ;
        }
        ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1649)) ;
      }
    }
    enumerator_67908.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 1653)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1654)) ;
  cEnumerator_stringlist enumerator_68859 (var_directories, kEnumeration_up) ;
  while (enumerator_68859.hasCurrentObject ()) {
    GALGAS_wrapperFileMap var_internalWrapperFileMap ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap ;
    GALGAS_uint var_theDirectoryIndex = ioArgument_ioWrapperDirectoryIndex ;
    {
    routine_recursivelyEnumerateDirectories (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1660)).add_operation (enumerator_68859.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1660)), constinArgument_inPathInWrapper.add_operation (enumerator_68859.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1661)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1661)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap, var_internalWrapperDirectoryMap, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1659)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_68859.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1670))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1670)), var_internalWrapperFileMap, var_internalWrapperDirectoryMap, var_theDirectoryIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1669)) ;
    }
    enumerator_68859.gotoNextObject () ;
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
  cEnumerator_semanticDeclarationListAST enumerator_129425 (constinArgument_inSemanticDeclarationList, kEnumeration_up) ;
  while (enumerator_129425.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((const cPtr_semanticDeclarationAST *) enumerator_129425.current_mSemanticDeclaration (HERE).ptr (), var_semanticDeclarationList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3033)) ;
    enumerator_129425.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("semanticContext.galgas", 3039)) ;
  GALGAS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext = GALGAS_extensionMethodMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3040)) ;
  GALGAS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext = GALGAS_extensionGetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3041)) ;
  GALGAS_extensionModifierMapForBuildingContext var_extensionModifierMapForBuildingContext = GALGAS_extensionModifierMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3042)) ;
  GALGAS_semanticDeclarationListAST var_extensionOverrideDefinitionList = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3043)) ;
  cEnumerator_semanticDeclarationListAST enumerator_130173 (var_semanticDeclarationList, kEnumeration_up) ;
  while (enumerator_130173.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((const cPtr_semanticDeclarationAST *) enumerator_130173.current_mSemanticDeclaration (HERE).ptr (), var_semanticTypePrecedenceGraph, var_extensionMethodMapForBuildingContext, var_extensionGetterMapForBuildingContext, var_extensionModifierMapForBuildingContext, var_extensionOverrideDefinitionList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3045)) ;
    enumerator_130173.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_semanticTypePrecedenceGraph.getter_undefinedNodeCount (SOURCE_FILE ("semanticContext.galgas", 3053)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("semanticContext.galgas", 3054)) ;
    cEnumerator_lstringlist enumerator_130637 (var_semanticTypePrecedenceGraph.getter_undefinedNodeReferenceList (SOURCE_FILE ("semanticContext.galgas", 3055)), kEnumeration_up) ;
    while (enumerator_130637.hasCurrentObject ()) {
      GALGAS_location location_1 (enumerator_130637.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_130637.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 3056)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3056)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3056))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3056)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      enumerator_130637.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST ;
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST ;
    GALGAS_lstringlist var_unsortedNodeKeyList ;
    GALGAS_lstringlist joker_130869 ; // Joker input parameter
    var_semanticTypePrecedenceGraph.method_topologicalSort (var_sortedSemanticDeclarationListAST, joker_130869, var_unsortedSemanticDeclarationListAST, var_unsortedNodeKeyList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3059)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST.getter_length (SOURCE_FILE ("semanticContext.galgas", 3065)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST.getter_length (SOURCE_FILE ("semanticContext.galgas", 3066)).getter_string (SOURCE_FILE ("semanticContext.galgas", 3066)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3066)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3066)) ;
      cEnumerator_semanticDeclarationListAST enumerator_131269 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_131269.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_131269.current_mSemanticDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3068)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3068)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 3068)) ;
        enumerator_131269.gotoNextObject () ;
      }
      GALGAS_location location_3 (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 3070)).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, var_s  COMMA_SOURCE_FILE ("semanticContext.galgas", 3070)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_sortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 3073)) ;
      outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("semanticContext.galgas", 3075)) ;
      cEnumerator_semanticDeclarationListAST enumerator_131692 (var_sortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_131692.hasCurrentObject ()) {
        callExtensionMethod_enterInSemanticContext ((const cPtr_semanticDeclarationAST *) enumerator_131692.current_mSemanticDeclaration (HERE).ptr (), var_extensionMethodMapForBuildingContext, var_extensionGetterMapForBuildingContext, var_extensionModifierMapForBuildingContext, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3078)) ;
        enumerator_131692.gotoNextObject () ;
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
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 29)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_2778 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_2778.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_2778.current (HERE).mAttribute_mInstruction.ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 31)) ;
    enumerator_2778.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 39)) ;
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
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).isValid ()) {
    uint32_t variant_33615 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).uintValue () ;
    bool loop_33615 = true ;
    while (loop_33615) {
      loop_33615 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).operator_and (var_sourceType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).isValid () ;
      if (loop_33615) {
        loop_33615 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).operator_and (var_sourceType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)).boolValue () ;
      }
      if (loop_33615 && (0 == variant_33615)) {
        loop_33615 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 439)) ;
      }
      if (loop_33615) {
        variant_33615 -- ;
        var_sourceType = var_sourceType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 440)) ;
        var_ok = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType)) ;
      }
    }
  }
  const enumGalgasBool test_0 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 443)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444)) ;
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
    outArgument_outConstructorType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, constinArgument_inTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 747)) ;
  }
  const enumGalgasBool test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 749)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (constinArgument_inTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 750)) ;
    outArgument_outReturnedType.drop () ; // Release error dropped variable
    outArgument_outConstructorType.drop () ; // Release error dropped variable
    outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
    outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap = outArgument_outConstructorType.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 753)) ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList ;
    const cMapElement_constructorMap * objectArray_47535 = (const cMapElement_constructorMap *) var_constructorMap.readAccessForWithInstruction (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 756))) ;
    if (NULL != objectArray_47535) {
        macroValidSharedObject (objectArray_47535, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList = objectArray_47535->mAttribute_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_47535->mAttribute_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_47535->mAttribute_mReturnedType ;
    }else{
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_constructorMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 761)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (constinArgument_inConstructorName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 763)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 763))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 762)) ;
        var_constructorFormalArgumentTypeList.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_constructorMap enumerator_48057 (var_constructorMap, kEnumeration_up) ;
        while (enumerator_48057.hasCurrentObject ()) {
          var_s.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_48057.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 768)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 768)) ;
          cEnumerator_functionSignature enumerator_48129 (enumerator_48057.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_48129.hasCurrentObject ()) {
            GALGAS_string temp_5 ;
            const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_48129.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              temp_5 = enumerator_48129.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 770)) ;
            }else if (kBoolFalse == test_6) {
              temp_5 = GALGAS_string::makeEmptyString () ;
            }
            var_s.plusAssign_operation(GALGAS_string (" \?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 770)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 770)).add_operation (enumerator_48129.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 770)) ;
            enumerator_48129.gotoNextObject () ;
          }
          var_s.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_48057.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 772)) ;
          enumerator_48057.gotoNextObject () ;
        }
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_constructorMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 776)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string ("available constructors are") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string ("available constructor is") ;
        }
        GALGAS_location location_9 (constinArgument_inConstructorName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("the '@").add_operation (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 775)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 775)).add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 775)).add_operation (GALGAS_string ("' constructor; "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 775)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 775)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 776)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 777))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 774)) ;
        var_constructorFormalArgumentTypeList.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 782)).objectCompare (var_constructorFormalArgumentTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 782)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_location location_11 (constinArgument_inConstructorName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_11, GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 784)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 784)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 784)).add_operation (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 784)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 784)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 784)).add_operation (var_constructorFormalArgumentTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 785)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 784)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 785)).add_operation (constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 786)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 785)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 786))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 783)) ;
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 788)) ;
    cEnumerator_actualOutputExpressionList enumerator_49309 (constinArgument_inConstuctorEffectiveParameterExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_49350 (var_constructorFormalArgumentTypeList, kEnumeration_up) ;
    while (enumerator_49309.hasCurrentObject () && enumerator_49350.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_49309.current_mExpression (HERE).ptr (), enumerator_49350.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 791)) ;
      {
      routine_checkAssignmentTypes (enumerator_49350.current_mFormalArgumentType (HERE), var_exp.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 792)), enumerator_49309.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 792)) ;
      }
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_49350.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_49309.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string temp_13 ;
        const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_49350.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_14) {
          temp_13 = enumerator_49350.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 794)) ;
        }else if (kBoolFalse == test_14) {
          temp_13 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_15 (enumerator_49309.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the selector should be '!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 794)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 794))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 794)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 796)) ;
      enumerator_49309.gotoNextObject () ;
      enumerator_49350.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checkReaderImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_checkReaderImplementationInSuperClasses (const GALGAS_lstring & constinArgument_inGetterName,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSuperClass,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inSuperClass.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    GALGAS_methodQualifier var_qualifier ;
    GALGAS_methodKind joker_58603_5 ; // Joker input parameter
    GALGAS_functionSignature joker_58603_4 ; // Joker input parameter
    GALGAS_location joker_58603_3 ; // Joker input parameter
    GALGAS_bool joker_58603_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_58603_1 ; // Joker input parameter
    GALGAS_string joker_58618 ; // Joker input parameter
    constinArgument_inSuperClass.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1024)).method_searchKey (constinArgument_inGetterName, joker_58603_5, joker_58603_4, joker_58603_3, joker_58603_2, joker_58603_1, var_qualifier, joker_58618, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1024)) ;
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
        result_outResult = constinArgument_inSuperClass.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1029)) ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isInherited:
    case GALGAS_methodQualifier::kEnum_isOverridingAbstract:
      {
        result_outResult = function_checkReaderImplementationInSuperClasses (constinArgument_inGetterName, constinArgument_inSuperClass.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)) ;
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
                                                           COMMA_THERE).getter_object (THERE) ;
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
  const enumGalgasBool test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1131)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1132)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_rightType = constinArgument_inRightType ;
    GALGAS_bool var_ok = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).isValid ()) {
      uint32_t variant_63151 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).uintValue () ;
      bool loop_63151 = true ;
      while (loop_63151) {
        loop_63151 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).operator_and (var_rightType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).isValid () ;
        if (loop_63151) {
          loop_63151 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).operator_and (var_rightType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).boolValue () ;
        }
        if (loop_63151 && (0 == variant_63151)) {
          loop_63151 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)) ;
        }
        if (loop_63151) {
          variant_63151 -- ;
          var_rightType = var_rightType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)) ;
          var_ok = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType)) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1142)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1144)).getter_hasKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1144)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1144)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool var_hasCompilerArgument ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
        GALGAS_methodKind var_kind ;
        GALGAS_functionSignature var_argumentTypeList ;
        GALGAS_location joker_63697 ; // Joker input parameter
        GALGAS_methodQualifier joker_63765_2 ; // Joker input parameter
        GALGAS_string joker_63765_1 ; // Joker input parameter
        constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1148)).method_searchKey (constinArgument_inLeftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1149)), var_kind, var_argumentTypeList, joker_63697, var_hasCompilerArgument, var_returnedType, joker_63765_2, joker_63765_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1148)) ;
        var_ok = GALGAS_bool (kIsEqual, var_argumentTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1157)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1157)) ;
        GALGAS_semanticExpressionForGeneration var_conversionExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1164)), constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1165)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1166)), var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1159)) ;
        ioArgument_ioRightExpression = var_conversionExpression ;
      }
      const enumGalgasBool test_3 = var_ok.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1170)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1172)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1172)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1172)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1172)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1172)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1173)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1173)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1174)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1171)) ;
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
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 57)) ;
  }
  cEnumerator_localConstantList enumerator_3777 (constinArgument_inLocalConstantList, kEnumeration_up) ;
  while (enumerator_3777.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3777.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_3777.current_mName (HERE), enumerator_3777.current_mType (HERE), enumerator_3777.current_mCppName (HERE), enumerator_3777.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 61)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_3777.current_mName (HERE), enumerator_3777.current_mType (HERE), enumerator_3777.current_mCppName (HERE), enumerator_3777.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 63)) ;
      }
    }
    enumerator_3777.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4066 (constinArgument_inLocalInitializedVariableList, kEnumeration_up) ;
  while (enumerator_4066.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (enumerator_4066.current_mName (HERE), enumerator_4066.current_mType (HERE), enumerator_4066.current_mCppName (HERE), enumerator_4066.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 68)) ;
    }
    enumerator_4066.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_4221 (constinArgument_inSemanticInstructionListAST, kEnumeration_up) ;
  while (enumerator_4221.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_4221.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 72)) ;
    enumerator_4221.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 79)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeRoutineArguments'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineArguments (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_string constinArgument_inInvokedEntityName,
                                      const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                      const GALGAS_actualParameterListAST constinArgument_inActualParameterList,
                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                      GALGAS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 814)).objectCompare (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 814)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)).add_operation (constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)).add_operation (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 817)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 815)) ;
    outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 821)) ;
    GALGAS_stringset var_exclusiveVariableSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 822)) ;
    cEnumerator_formalParameterSignature enumerator_38156 (constinArgument_inRoutineSignature, kEnumeration_up) ;
    cEnumerator_actualParameterListAST enumerator_38185 (constinArgument_inActualParameterList, kEnumeration_up) ;
    while (enumerator_38156.hasCurrentObject () && enumerator_38185.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((const cPtr_actualParameterAST *) enumerator_38185.current_mActualParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_38156.current_mFormalSelector (HERE), enumerator_38156.current_mFormalArgumentType (HERE), enumerator_38156.current_mFormalArgumentPassingMode (HERE), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 824)) ;
      enumerator_38156.gotoNextObject () ;
      enumerator_38185.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checkMethodImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_checkMethodImplementationInSuperClasses (const GALGAS_lstring & constinArgument_inMethodName,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSuperClass,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inSuperClass.getter_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 844)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    GALGAS_methodQualifier var_qualifier ;
    GALGAS_methodKind joker_38909 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_38912 ; // Joker input parameter
    GALGAS_location joker_38915 ; // Joker input parameter
    GALGAS_bool joker_38918 ; // Joker input parameter
    GALGAS_string joker_38953 ; // Joker input parameter
    constinArgument_inSuperClass.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 847)).method_searchKey (constinArgument_inMethodName, joker_38909, joker_38912, joker_38915, joker_38918, var_qualifier, joker_38953, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 847)) ;
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
        result_outResult = constinArgument_inSuperClass.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 852)) ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isInherited:
    case GALGAS_methodQualifier::kEnum_isOverridingAbstract:
      {
        result_outResult = function_checkMethodImplementationInSuperClasses (constinArgument_inMethodName, constinArgument_inSuperClass.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 854)) ;
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

static const C_galgas_type_descriptor * functionArgs_checkMethodImplementationInSuperClasses [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkMethodImplementationInSuperClasses (C_Compiler * inCompiler,
                                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  return function_checkMethodImplementationInSuperClasses (operand0,
                                                           operand1,
                                                           inCompiler
                                                           COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkMethodImplementationInSuperClasses ("checkMethodImplementationInSuperClasses",
                                                                                         functionWithGenericHeader_checkMethodImplementationInSuperClasses,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         2,
                                                                                         functionArgs_checkMethodImplementationInSuperClasses) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'checkExpressionIsBoolean'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkExpressionIsBoolean (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                       const GALGAS_location constinArgument_inErrorLocation,
                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType = constinArgument_inExpression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 866)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expressionType.objectCompare (var_boolType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outExpression = constinArgument_inExpression ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_expressionType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 871)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 871)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_expressionType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 872)).getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 872)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType ;
        var_expressionType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)), var_attributeType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType.objectCompare (var_boolType)).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_boolType, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 882)) ;
        }else if (kBoolFalse == test_3) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 889)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 889)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 889))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 888)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }else if (kBoolFalse == test_2) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 894)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 894)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 894))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 893)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_40891 = (const cMapElement_getterMap *) var_expressionType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)).readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (NULL != objectArray_40891) {
          macroValidSharedObject (objectArray_40891, cMapElement_getterMap) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, objectArray_40891->mAttribute_mReturnedType.objectCompare (var_boolType)).boolEnum () ;
        if (kBoolTrue == test_4) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 900)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, objectArray_40891->mAttribute_mArgumentTypeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 901)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 902)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, objectArray_40891->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, objectArray_40891->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 904)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_6) {
              outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_boolType, constinArgument_inErrorLocation, objectArray_40891->mAttribute_mKind, constinArgument_inExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 911)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 913)), objectArray_40891->mAttribute_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 906)) ;
            }
          }
        }
      }else{
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_expressionType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 917)).getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 917)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_7) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 919)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 919))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 918)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_7) {
          GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
          cEnumerator_getterMap enumerator_42034 (var_expressionType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 923)), kEnumeration_up) ;
          while (enumerator_42034.hasCurrentObject ()) {
            var_s.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_42034.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 924)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 924)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 924)) ;
            cEnumerator_functionSignature enumerator_42106 (enumerator_42034.current_mArgumentTypeList (HERE), kEnumeration_up) ;
            while (enumerator_42106.hasCurrentObject ()) {
              GALGAS_string temp_8 ;
              const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_42106.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                temp_8 = enumerator_42106.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)) ;
              }else if (kBoolFalse == test_9) {
                temp_8 = GALGAS_string::makeEmptyString () ;
              }
              var_s.plusAssign_operation(GALGAS_string (" \?").add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)).add_operation (enumerator_42106.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)) ;
              enumerator_42106.gotoNextObject () ;
            }
            var_s.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_42034.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 928)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 928)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 928)) ;
            enumerator_42034.gotoNextObject () ;
          }
          GALGAS_string temp_10 ;
          const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_expressionType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 932)).getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 932)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_11) {
            temp_10 = GALGAS_string ("getters are") ;
          }else if (kBoolFalse == test_11) {
            temp_10 = GALGAS_string ("getter is") ;
          }
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 931)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 931)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter; available "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 931)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 931)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 932)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 933))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 930)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkMethodSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMethodSignatures (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 25)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 25)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 26)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 26)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 26)) ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_2762 (constinArgument_inReferenceSignature, kEnumeration_up) ;
    cEnumerator_formalParameterListForGeneration enumerator_2787 (constinArgument_inTestedSignature, kEnumeration_up) ;
    while (enumerator_2762.hasCurrentObject () && enumerator_2787.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2787.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 32)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 32)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2787.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 32)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 32)) ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_2762.current_mFormalSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_4 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_6 (enumerator_2787.current_mFormalSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the selector should be '").add_operation (extensionGetter_string (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 38)).add_operation (enumerator_2762.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 38)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 38)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 38))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 38)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).objectCompare (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).add_operation (enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)) ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)) ;
      }
      enumerator_2762.gotoNextObject () ;
      enumerator_2787.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkReaderSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkReaderSignatures (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReturnType,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInheritedReturnType,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 63)).objectCompare (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 63)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)).add_operation (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)) ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 69)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 69)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 70)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 70)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 70)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 71)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 70)) ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    cEnumerator_functionSignature enumerator_5481 (constinArgument_inReferenceSignature, kEnumeration_up) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5506 (constinArgument_inTestedSignature, kEnumeration_up) ;
    while (enumerator_5481.hasCurrentObject () && enumerator_5506.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_5481.current_mFormalSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_5481.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_5 (enumerator_5506.current_mFormalSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (enumerator_5481.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).objectCompare (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_5506.current_mFormalArgumentName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_5506.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)).add_operation (enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 80)).add_operation (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 80)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)) ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)) ;
      }
      enumerator_5481.gotoNextObject () ;
      enumerator_5506.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13771 (inArgument_inString.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 250)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 250)), kEnumeration_up) ;
  while (enumerator_13771.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray = enumerator_13771.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 251)) ;
    {
    GALGAS_string joker_13880 ; // Joker input parameter
    var_explodedArray.setter_popFirst (joker_13880, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 252)) ;
    }
    cEnumerator_stringlist enumerator_13910 (var_explodedArray, kEnumeration_up) ;
    while (enumerator_13910.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_13910.current_mValue (HERE).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 254)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_char var_c = enumerator_13910.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 255)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (inArgument_inString.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257)) ;
        }
      }
      enumerator_13910.gotoNextObject () ;
    }
    enumerator_13771.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_L_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14449 (inArgument_inString.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 268)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 268)), kEnumeration_up) ;
  while (enumerator_14449.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray = enumerator_14449.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 269)) ;
    {
    GALGAS_string joker_14558 ; // Joker input parameter
    var_explodedArray.setter_popFirst (joker_14558, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 270)) ;
    }
    cEnumerator_stringlist enumerator_14588 (var_explodedArray, kEnumeration_up) ;
    while (enumerator_14588.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_14588.current_mValue (HERE).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 272)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_char var_c = enumerator_14588.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 273)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 274)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (inArgument_inString.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 275)) ;
        }
      }
      enumerator_14588.gotoNextObject () ;
    }
    enumerator_14449.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'forbiddenKeysForMap'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset onceFunction_forbiddenKeysForMap (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outResult ; // Returned variable
  result_outResult = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 285)) ;
  result_outResult.addAssign_operation (GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 286)) ;
  result_outResult.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 287)) ;
  result_outResult.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 288)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_forbiddenKeysForMap = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMap ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_forbiddenKeysForMap (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMap) {
    gOnceFunctionResult_forbiddenKeysForMap = onceFunction_forbiddenKeysForMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMap = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_forbiddenKeysForMap (void) {
  gOnceFunctionResult_forbiddenKeysForMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMap (NULL,
                                                                 releaseOnceFunctionResult_forbiddenKeysForMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMap [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMap ("forbiddenKeysForMap",
                                                                     functionWithGenericHeader_forbiddenKeysForMap,
                                                                     & kTypeDescriptor_GALGAS_stringset,
                                                                     0,
                                                                     functionArgs_forbiddenKeysForMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'buildLocalVariableMapAndSignature'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLocalVariableMapAndSignature (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 387)) ;
  cEnumerator_formalParameterListAST enumerator_19290 (constinArgument_inRoutineSignatureAST, kEnumeration_up) ;
  while (enumerator_19290.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_19290.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 389)) ;
    GALGAS_string var_formalArgumentCppName ;
    switch (enumerator_19290.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName = GALGAS_string ("inArgument_").add_operation (enumerator_19290.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 393)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 393)) ;
        const enumGalgasBool test_0 = enumerator_19290.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioVariableMap.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_19290.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 395)) ;
          }
        }else if (kBoolFalse == test_0) {
          {
          ioArgument_ioVariableMap.setter_insertInputFormalArgument (enumerator_19290.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 397)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName = GALGAS_string ("outArgument_").add_operation (enumerator_19290.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 400)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 400)) ;
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_19290.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 401)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName = GALGAS_string ("ioArgument_").add_operation (enumerator_19290.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 403)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 403)) ;
        const enumGalgasBool test_1 = enumerator_19290.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioVariableMap.setter_insertInputOutputFormalArgumentDeclaredAsUnused (enumerator_19290.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 405)) ;
          }
        }else if (kBoolFalse == test_1) {
          {
          ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_19290.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 407)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName = GALGAS_string ("constinArgument_").add_operation (enumerator_19290.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 410)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 410)) ;
        const enumGalgasBool test_2 = enumerator_19290.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_19290.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 412)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_19290.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 414)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_19290.current_mFormalSelector (HERE), enumerator_19290.current_mFormalArgumentPassingMode (HERE), var_type, enumerator_19290.current_mFormalArgumentName (HERE), var_formalArgumentCppName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 417)) ;
    enumerator_19290.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineBody'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineBody (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                 const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                 const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                 const GALGAS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                 const GALGAS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                 const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                 const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                 const GALGAS_location constinArgument_inEndOfMethodLocation,
                                 GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                 GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 434)) ;
  cEnumerator_localConstantList enumerator_21984 (constinArgument_inLocalConstantList, kEnumeration_up) ;
  while (enumerator_21984.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_21984.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_variableMap.setter_insertUsedLocalConstant (enumerator_21984.current_mName (HERE), enumerator_21984.current_mType (HERE), enumerator_21984.current_mCppName (HERE), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 438)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      var_variableMap.setter_insertLocalConstant (enumerator_21984.current_mName (HERE), enumerator_21984.current_mType (HERE), enumerator_21984.current_mCppName (HERE), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 440)) ;
      }
    }
    enumerator_21984.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_22339 (constinArgument_inNonMutableTypedAttributeList, kEnumeration_up) ;
  while (enumerator_22339.hasCurrentObject ()) {
    {
    var_variableMap.setter_insertNonMutableAttribute (enumerator_22339.current_mAttributeName (HERE), enumerator_22339.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 448)).add_operation (enumerator_22339.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 448)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 448)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 445)) ;
    }
    enumerator_22339.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_22676 (constinArgument_inMutableTypedAttributeList, kEnumeration_up) ;
  while (enumerator_22676.hasCurrentObject ()) {
    {
    var_variableMap.setter_insertMutableAttribute (enumerator_22676.current_mAttributeName (HERE), enumerator_22676.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 457)).add_operation (enumerator_22676.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 457)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 457)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 454)) ;
    }
    enumerator_22676.gotoNextObject () ;
  }
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inRoutineSignatureAST, var_variableMap, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 462)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 469)) ;
  cEnumerator_semanticInstructionListAST enumerator_23265 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_23265.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_23265.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 471)) ;
    enumerator_23265.gotoNextObject () ;
  }
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 478)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeFunctionBody'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionBody (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                  const GALGAS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                  const GALGAS_typedPropertyList constinArgument_inTypedAttributeList,
                                  const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                  const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                  const GALGAS_lstring constinArgument_inReturnVariableName,
                                  const GALGAS_lstring constinArgument_inResultTypeName,
                                  const GALGAS_location constinArgument_inEndOfFunctionLocation,
                                  GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                  GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                  GALGAS_string & outArgument_outResultVariableCppName,
                                  GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 685)) ;
  cEnumerator_typedPropertyList enumerator_31273 (constinArgument_inTypedAttributeList, kEnumeration_up) ;
  while (enumerator_31273.hasCurrentObject ()) {
    {
    var_variableMap.setter_insertNonMutableAttribute (enumerator_31273.current_mAttributeName (HERE), enumerator_31273.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 691)).add_operation (enumerator_31273.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 691)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 691)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 688)) ;
    }
    enumerator_31273.gotoNextObject () ;
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 696)) ;
  cEnumerator_formalInputParameterListAST enumerator_31672 (constinArgument_inFunctionSignature, kEnumeration_up) ;
  while (enumerator_31672.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_31672.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 698)) ;
    const enumGalgasBool test_0 = enumerator_31672.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_cppName = GALGAS_string ("constinArgument_").add_operation (enumerator_31672.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 700)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 700)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_31672.current_mFormalSelector (HERE), var_parameterType, var_cppName, enumerator_31672.current_mFormalArgumentName (HERE), enumerator_31672.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 701)) ;
      const enumGalgasBool test_1 = enumerator_31672.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_variableMap.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_31672.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 708)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        var_variableMap.setter_insertConstantInputFormalArgument (enumerator_31672.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_cppName = GALGAS_string ("inArgument_").add_operation (enumerator_31672.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 713)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_31672.current_mFormalSelector (HERE), var_parameterType, var_cppName, enumerator_31672.current_mFormalArgumentName (HERE), enumerator_31672.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
      const enumGalgasBool test_2 = enumerator_31672.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_variableMap.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_31672.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721)) ;
        }
      }else if (kBoolFalse == test_2) {
        {
        var_variableMap.setter_insertInputFormalArgument (enumerator_31672.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)) ;
        }
      }
    }
    enumerator_31672.gotoNextObject () ;
  }
  outArgument_outReturnedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, constinArgument_inResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 728)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
  {
  var_variableMap.setter_insertOutputFormalArgument (constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 730)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 732)) ;
  cEnumerator_semanticInstructionListAST enumerator_33432 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_33432.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_33432.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)) ;
    enumerator_33432.gotoNextObject () ;
  }
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 741)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'buildPredefinedTypes'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2178))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2178)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2178)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2179))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2179)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2179)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2180))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2180)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2180)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2181))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2181)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2181)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2183))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2183)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2183)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2185))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2185)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2185)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2186))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2186)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2186)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lbool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2187))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2187)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2187)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lchar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2188))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2188)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2188)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2189))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2189)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2189)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("luint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2190))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2190)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2190)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lsint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2191))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2191)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2191)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("luint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2192))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2192)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2192)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lsint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2193)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2193)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("ldouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2194))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2194)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2194)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2195))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2195)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2195)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lbigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2196))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2196)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2196)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2197))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2197)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2197))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2177)) ;
//---
  return result_outPredefinedTypes ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_buildPredefinedTypes (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* §§ inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performSemanticAnalysis (const GALGAS_string constinArgument_inProductDirectory,
                                      const GALGAS_semanticDeclarationListAST constinArgument_inDeclarationList,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      GALGAS_semanticDeclarationSortedListForGeneration & outArgument_outDecoratedDeclarationListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDecoratedDeclarationListForGeneration.drop () ; // Release 'out' argument
  cEnumerator_lstringlist enumerator_96473 (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_unsolvedProxyList (SOURCE_FILE ("semanticAnalysis.galgas", 2213)), kEnumeration_up) ;
  while (enumerator_96473.hasCurrentObject ()) {
    GALGAS_location location_0 (enumerator_96473.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_0, GALGAS_string ("the '@").add_operation (enumerator_96473.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2214)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2214)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2214))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2214)) ;
    enumerator_96473.gotoNextObject () ;
  }
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList = constinArgument_inDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_96715 (constinArgument_inDeclarationList, kEnumeration_up) ;
  while (enumerator_96715.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((const cPtr_semanticDeclarationAST *) enumerator_96715.current_mSemanticDeclaration (HERE).ptr (), var_semanticDeclarationList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2219)) ;
    enumerator_96715.gotoNextObject () ;
  }
  outArgument_outDecoratedDeclarationListForGeneration = GALGAS_semanticDeclarationSortedListForGeneration::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2222)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_predefinedTypes var_predefinedTypes = function_buildPredefinedTypes (constinArgument_inSemanticContext, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2224)) ;
    cEnumerator_semanticDeclarationListAST enumerator_97065 (var_semanticDeclarationList, kEnumeration_up) ;
    while (enumerator_97065.hasCurrentObject ()) {
      callExtensionMethod_semanticAnalysis ((const cPtr_semanticDeclarationAST *) enumerator_97065.current_mSemanticDeclaration (HERE).ptr (), constinArgument_inProductDirectory, constinArgument_inSemanticContext, var_predefinedTypes, outArgument_outDecoratedDeclarationListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2226)) ;
      enumerator_97065.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'syntaxFileGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_syntaxFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_syntaxFileGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeaderGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeaderGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                           const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_COMPONENT_5F_NAME.stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "#define " ;
  result << in_COMPONENT_5F_NAME.stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "\n"
    "//-----------------------------------------------------------------------------*\n"
    "\n"
    "#include <stdint.h>\n"
    "\n"
    "//-----------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_299_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_299 (in_INCLUSION_5F_SET, kEnumeration_up) ;
    while (enumerator_299.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_299.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_299_.increment () ;
      enumerator_299.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  GALGAS_uint index_27_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_27 (in_INCLUSION_5F_SET, kEnumeration_up) ;
    while (enumerator_27.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_27.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue () ;
  result << " {\n"
    "//--- Virtual destructor\n"
    "  public : virtual ~ cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue () ;
  result << " (void) {}\n"
    "\n"
    "//--- Non terminal declarations\n" ;
  GALGAS_uint index_814_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_814 (in_NONTERMINAL_5F_MAP, kEnumeration_up) ;
    while (enumerator_814.hasCurrentObject ()) {
      GALGAS_uint index_848_ (0) ;
      if (enumerator_814.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_848 (enumerator_814.current_mLabelMap (HERE), kEnumeration_up) ;
        while (enumerator_848.hasCurrentObject ()) {
          result << "  protected : virtual void nt_" ;
          result << enumerator_814.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << "_" ;
          result << enumerator_848.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1006_IDX (0) ;
          if (enumerator_848.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_1006 (enumerator_848.current_mSignature (HERE), kEnumeration_up) ;
            while (enumerator_1006.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              if (kBoolTrue == test_0) {
                result << "const class GALGAS_" ;
                result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
                result << " constinArgument" ;
                result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
              }else if (kBoolFalse == test_0) {
                const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                if (kBoolTrue == test_1) {
                  result << "class GALGAS_" ;
                  result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                }else if (kBoolFalse == test_1) {
                  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  if (kBoolTrue == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                  }else if (kBoolFalse == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                    result << " inArgument" ;
                    result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1006_IDX.increment () ;
              enumerator_1006.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_3) {
            result << "class C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_3) {
          }
          result << "class C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) = 0 ;\n"
            "\n" ;
          index_848_.increment () ;
          enumerator_848.gotoNextObject () ;
        }
      }
      result << "  protected : virtual void nt_" ;
      result << enumerator_814.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "class C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 35)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_4) {
      }
      result << "class C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) = 0 ;\n"
        "\n" ;
      const enumGalgasBool test_5 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  protected : virtual void nt_" ;
        result << enumerator_814.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue () ;
        result << "_indexing (class C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) = 0 ;\n"
          "\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_814_.increment () ;
      enumerator_814.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Rule declarations\n" ;
  GALGAS_uint index_2427_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2427 (in_RULE_5F_DECLARATION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2427.hasCurrentObject ()) {
      GALGAS_uint index_2467_ (0) ;
      if (enumerator_2427.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2467 (enumerator_2427.current_mLabelImplementationList (HERE), kEnumeration_up) ;
        while (enumerator_2467.hasCurrentObject ()) {
          result << "  protected : void rule_" ;
          result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_i" ;
          result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2467.current_mLabelName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2696_IDX (0) ;
          if (enumerator_2467.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2696 (enumerator_2467.current_mSignature (HERE), kEnumeration_up) ;
            while (enumerator_2696.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result << "const GALGAS_" ;
                result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
                result << " constinArgument" ;
                result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result << "GALGAS_" ;
                  result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                    result << " inArgument" ;
                    result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_2696_IDX.increment () ;
              enumerator_2696.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_9) {
            result << "C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_9) {
          }
          result << "C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) ;\n"
            "\n" ;
          index_2467_.increment () ;
          enumerator_2467.gotoNextObject () ;
        }
      }
      result << "  protected : void rule_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_" ;
      result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_i" ;
      result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 66)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_10) {
      }
      result << "C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) ;\n"
        "\n" ;
      const enumGalgasBool test_11 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_11) {
        result << "  protected : void rule_" ;
        result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_" ;
        result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_i" ;
        result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_11) {
      }
      index_2427_.increment () ;
      enumerator_2427.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Select methods\n" ;
  GALGAS_uint index_4191_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_4191 (in_SELECT_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_4191.hasCurrentObject ()) {
      result << "  protected : virtual int32_t select_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << "_" ;
      result << enumerator_4191.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " *) = 0 ;\n"
        "\n" ;
      index_4191_.increment () ;
      enumerator_4191.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'enterNonterminalNonTerminalInMapAndCheck'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterNonterminalNonTerminalInMapAndCheck (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                       const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                       GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_101963 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2332))) ;
  if (NULL != objectArray_101963) {
      macroValidSharedObject (objectArray_101963, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet = objectArray_101963->mAttribute_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 2333)) ;
    GALGAS_stringset var_reDeclarationLabelSet = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 2334)) ;
    GALGAS_stringset var_missingLabelSet = var_firstDeclarationLabelSet.substract_operation (var_reDeclarationLabelSet, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2335)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_missingLabelSet.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 2336)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_102343 (var_missingLabelSet, kEnumeration_up) ;
      while (enumerator_102343.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (enumerator_102343.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2339)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2339)) ;
        enumerator_102343.gotoNextObject () ;
      }
      GALGAS_location location_1 (constinArgument_inNonTerminalName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2342)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2342)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2342)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2342))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2341)) ;
    }
    GALGAS_stringset var_newLabelSet = var_reDeclarationLabelSet.substract_operation (var_firstDeclarationLabelSet, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2344)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_newLabelSet.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 2345)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_102692 (var_newLabelSet, kEnumeration_up) ;
      while (enumerator_102692.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (enumerator_102692.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2348)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2348)) ;
        enumerator_102692.gotoNextObject () ;
      }
      GALGAS_location location_3 (constinArgument_inNonTerminalName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2351)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2351)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2351)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2351))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2350)) ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_missingLabelSet.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 2353)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_newLabelSet.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 2353)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2353)).boolEnum () ;
    if (kBoolTrue == test_4) {
      cEnumerator_nonterminalLabelMap enumerator_102963 (objectArray_101963->mAttribute_mLabelMap, kEnumeration_up) ;
      cEnumerator_nonterminalLabelMap enumerator_102997 (constinArgument_inNonterminalLabelMap, kEnumeration_up) ;
      while (enumerator_102963.hasCurrentObject () && enumerator_102997.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_newSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2355)) ;
        cEnumerator_formalParameterSignature enumerator_103097 (enumerator_102997.current_mSignature (HERE), kEnumeration_up) ;
        while (enumerator_103097.hasCurrentObject ()) {
          var_newSignature.addAssign_operation (enumerator_103097.current_mFormalSelector (HERE), enumerator_103097.current_mFormalArgumentType (HERE), enumerator_103097.current_mFormalArgumentPassingMode (HERE), enumerator_103097.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2357)) ;
          enumerator_103097.gotoNextObject () ;
        }
        {
        routine_checkMethodSignatures (enumerator_102963.current_mSignatureForGeneration (HERE), enumerator_102963.current_mEndOfArgumentLocation (HERE), var_newSignature, enumerator_102997.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2359)) ;
        }
        enumerator_102963.gotoNextObject () ;
        enumerator_102997.gotoNextObject () ;
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2368)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildNonterminalDeclarationsMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildNonterminalDeclarationsMap (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2378)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_103972 (constinArgument_inNonterminalDeclarationList, kEnumeration_up) ;
  while (enumerator_103972.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2381)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_104058 (enumerator_103972.current_mLabels (HERE), kEnumeration_up) ;
    while (enumerator_104058.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2383)) ;
      GALGAS_formalParameterSignature var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2384)) ;
      cEnumerator_formalParameterListAST enumerator_104236 (enumerator_104058.current_mFormalArgumentList (HERE), kEnumeration_up) ;
      while (enumerator_104236.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_104236.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2386)) ;
        var_signatureForGeneration.addAssign_operation (enumerator_104236.current_mFormalSelector (HERE), enumerator_104236.current_mFormalArgumentPassingMode (HERE), var_t, enumerator_104236.current_mFormalArgumentName (HERE), enumerator_104236.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2387))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2387)) ;
        var_signature.addAssign_operation (enumerator_104236.current_mFormalSelector (HERE), var_t, enumerator_104236.current_mFormalArgumentPassingMode (HERE), enumerator_104236.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2388)) ;
        enumerator_104236.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap.setter_insertKey (enumerator_104058.current_mLabelName (HERE), var_signatureForGeneration, var_signature, enumerator_104058.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2390)) ;
      }
      enumerator_104058.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_103972.current_mNonterminalName (HERE), var_nonterminalLabelMap, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2392)) ;
    }
    enumerator_103972.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeSyntaxInstructionList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSyntaxInstructionList (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                           const GALGAS_string constinArgument_inLexiqueName,
                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                           const GALGAS_string constinArgument_inComponentName,
                                           const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                           const GALGAS_location constinArgument_inEndOfBranchLocation,
                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                           GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2938)) ;
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2940)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_129826 (constinArgument_inSyntaxInstructionListAST, kEnumeration_up) ;
  while (enumerator_129826.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_129826.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2943)) ;
    enumerator_129826.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2957)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'semanticAnalysisOfRuleLabel'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfRuleLabel (const GALGAS_formalParameterListAST constinArgument_inFormalArguments,
                                          const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                          const GALGAS_terminalMap constinArgument_inTerminalMap,
                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                          const GALGAS_string constinArgument_inLexiqueName,
                                          const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                          const GALGAS_string constinArgument_inComponentName,
                                          const GALGAS_location constinArgument_inEndOfInstructionList,
                                          const GALGAS_stringset constinArgument_inIndexNameSet,
                                          GALGAS_uint & ioArgument_ioSelectMethodCount,
                                          GALGAS_formalParameterListForGeneration & outArgument_outSignatureForGeneration,
                                          GALGAS_formalParameterSignature & outArgument_outSignature,
                                          GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 3527)) ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inFormalArguments, var_variableMap, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3528)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3535)) ;
  cEnumerator_formalParameterListForGeneration enumerator_152640 (outArgument_outSignatureForGeneration, kEnumeration_up) ;
  while (enumerator_152640.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_152640.current_mFormalSelector (HERE), enumerator_152640.current_mFormalArgumentType (HERE), enumerator_152640.current_mFormalArgumentPassingMode (HERE), enumerator_152640.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3537)) ;
    enumerator_152640.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3540)) ;
  GALGAS_stringlist var_localVariableCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3541)) ;
  cEnumerator_syntaxInstructionList enumerator_152983 (constinArgument_inSyntaxInstructionList, kEnumeration_up) ;
  while (enumerator_152983.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_152983.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3543)) ;
    enumerator_152983.gotoNextObject () ;
  }
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3557)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfSyntaxComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfSyntaxComponent (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                const GALGAS_string constinArgument_inComponentName,
                                                const GALGAS_string constinArgument_inLexiqueName,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                const GALGAS_stringset constinArgument_inIndexNameSet,
                                                const GALGAS_bool constinArgument_inHasIndexing,
                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                GALGAS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GALGAS_nonterminalMap var_nonterminalMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 3579)) ;
  {
  routine_buildNonterminalDeclarationsMap (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, var_nonterminalMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3580)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_154735 (constinArgument_inRuleList, kEnumeration_up) ;
  while (enumerator_154735.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 3587)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_154824 (enumerator_154735.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_154824.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3589)) ;
      GALGAS_formalParameterSignature var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3590)) ;
      cEnumerator_formalParameterListAST enumerator_154999 (enumerator_154824.current_mFormalArguments (HERE), kEnumeration_up) ;
      while (enumerator_154999.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_154999.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3592)) ;
        var_signatureForGeneration.addAssign_operation (enumerator_154999.current_mFormalSelector (HERE), enumerator_154999.current_mFormalArgumentPassingMode (HERE), var_type, enumerator_154999.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_154999.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3593)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3593))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3593)) ;
        var_signature.addAssign_operation (enumerator_154999.current_mFormalSelector (HERE), var_type, enumerator_154999.current_mFormalArgumentPassingMode (HERE), enumerator_154999.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3594)) ;
        enumerator_154999.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap.setter_insertKey (enumerator_154824.current_mLabelName (HERE), var_signatureForGeneration, var_signature, enumerator_154824.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3596)) ;
      }
      enumerator_154824.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_154735.current_mNonterminalName (HERE), var_nonterminalLabelMap, var_nonterminalMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3598)) ;
    }
    enumerator_154735.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3604)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3606))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3601)) ;
  GALGAS_uint var_selectMethodCount = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList = GALGAS_ruleDeclarationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3609)) ;
  GALGAS_uint var_newRuleIndex = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_syntaxRuleListAST enumerator_155934 (constinArgument_inRuleList, kEnumeration_up) ;
  while (enumerator_155934.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList = GALGAS_ruleLabelImplementationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3612)) ;
    GALGAS_uint var_localSelectMethodCount = var_selectMethodCount ;
    GALGAS_nonterminalLabelMap joker_156118 ; // Joker input parameter
    var_nonterminalMap.method_searchKey (enumerator_155934.current_mNonterminalName (HERE), joker_156118, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3614)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_156145 (enumerator_155934.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_156145.hasCurrentObject ()) {
      var_localSelectMethodCount = var_selectMethodCount ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration ;
      GALGAS_formalParameterSignature var_signature ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration ;
      {
      routine_semanticAnalysisOfRuleLabel (enumerator_156145.current_mFormalArguments (HERE), enumerator_156145.current_mSyntaxInstructionList (HERE), var_analysisContext, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3626)), var_nonterminalMap, constinArgument_inComponentName, enumerator_156145.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount, var_signatureForGeneration, var_signature, var_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3620)) ;
      }
      var_ruleLabelImplementationList.addAssign_operation (enumerator_156145.current_mLabelName (HERE), var_signatureForGeneration, var_signature, enumerator_156145.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3636)) ;
      enumerator_156145.gotoNextObject () ;
    }
    var_selectMethodCount = var_localSelectMethodCount ;
    GALGAS_nonterminalLabelMap joker_157115 ; // Joker input parameter
    var_nonterminalMap.method_searchKey (enumerator_155934.current_mNonterminalName (HERE), joker_157115, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3644)) ;
    var_ruleDeclarationList.addAssign_operation (enumerator_155934.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3646)), var_newRuleIndex, var_ruleLabelImplementationList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3645)) ;
    var_newRuleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3649)) ;
    enumerator_155934.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::constructor_new (constinArgument_inComponentName, constinArgument_inLexiqueName, var_nonterminalMap, var_ruleDeclarationList, var_selectMethodCount, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3652)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateProcedure'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateProcedure (const GALGAS_bool constinArgument_inGenerateStatic,
                                const GALGAS_string constinArgument_inProcedureName,
                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                GALGAS_formalParameterListForGeneration inArgument_inFormalArgumentList,
                                const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                const GALGAS_bool constinArgument_inProcedureIsConst,
                                const GALGAS_string constinArgument_inCompilerTypeName,
                                const GALGAS_bool constinArgument_inGenerateLocationArgs,
                                const GALGAS_bool constinArgument_inGenerateResetTemplateString,
                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                GALGAS_string & outArgument_outGeneratedCode,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 251)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_unusedVariableCppNameSet.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 253))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 253)) ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 256))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 256)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_11811 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_11811.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_11811.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 259)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_unusedVariableCppNameSet.addAssign_operation (enumerator_11811.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 260)) ;
    }
    enumerator_11811.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 266)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_12112 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_12112.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_12112.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 268)) ;
    enumerator_12112.gotoNextObject () ;
  }
  {
  var_routineBody.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 276)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_12415 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_12415.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12415.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 279)) ;
    enumerator_12415.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_3 = constinArgument_inGenerateStatic.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void ").add_operation (constinArgument_inProcedureName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 287)) ;
  cEnumerator_formalParameterListForGeneration enumerator_12744 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_12744.hasCurrentObject ()) {
    switch (enumerator_12744.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)) ;
      }
      break ;
    }
    const enumGalgasBool test_4 = var_unusedVariableCppNameSet.getter_hasKey (enumerator_12744.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_12744.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)) ;
    }else if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_12744.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 303)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)) ;
    }
    enumerator_12744.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_5) {
    const enumGalgasBool test_6 = var_unusedVariableCppNameSet.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)).add_operation (GALGAS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)) ;
    }else if (kBoolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)) ;
    }
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 318)) ;
  const enumGalgasBool test_7 = var_unusedVariableCppNameSet.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)).boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)) ;
  }else if (kBoolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 322)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
  if (kBoolTrue == test_8) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 325)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 327)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)) ;
  const enumGalgasBool test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
  if (kBoolTrue == test_9) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 331)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 333)) ;
  cEnumerator_formalParameterListForGeneration enumerator_14619 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_14619.hasCurrentObject ()) {
    switch (enumerator_14619.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_14619.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338)).add_operation (GALGAS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
      }
      break ;
    }
    enumerator_14619.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 343)) ;
  const enumGalgasBool test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
  if (kBoolTrue == test_10) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 349)) ;
}


