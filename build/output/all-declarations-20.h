#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (class GGS_localVarManager & ioObject,
                                                  const class GGS_lstring constin_inVarName,
                                                  const class GGS_unifiedTypeMapEntry constin_inType,
                                                  const class GGS_string constin_inCppName,
                                                  const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression_template' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_template_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_template_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_template_ (GGS_templateExpressionAST & outArgument0,
                                                   Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS_lstringlist & ioArgument0,
                                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_lstringlist & outArgument0,
                                                                       GGS_location & outArgument1,
                                                                       GGS_templateExpressionAST & outArgument2,
                                                                       Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (GGS_templateExpressionListAST & outArgument0,
                                                                Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                      Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                        Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
 /*  public: virtual void nt_switch_5F_case_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GGS__5B_lstring_5D_ & outArgument0,
                                           GGS_switchExtractedValuesListAST & outArgument1,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_instruction_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GGS_templateInstructionListAST & ioArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GGS_templateInstructionListAST & outArgument0,
                                                                  Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_templateInstructionListAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_templateInstructionListAST & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'term_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                        Lexique_galgasTemplateScanner * inCompiler) ;

  public: virtual int32_t select_templateSyntax_0 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_1 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_2 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_3 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_4 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_5 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_6 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_7 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_8 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_9 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_10 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_11 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_12 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_13 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_14 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_15 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_16 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_17 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_18 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_19 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_20 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_21 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_22 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_23 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_24 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_25 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_26 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_27 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_28 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_29 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_30 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_31 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_32 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_33 (Lexique_galgasTemplateScanner *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                   class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                   const class GGS_analysisContext constinArgument2,
                                                                                                   class GGS_unifiedTypeMap & ioArgument3,
                                                                                                   const class GGS_semanticExpressionAST constinArgument4,
                                                                                                   const class GGS_semanticExpressionAST constinArgument5,
                                                                                                   const class GGS_fixitListAST constinArgument6,
                                                                                                   const class GGS_location constinArgument7,
                                                                                                   const class GGS_string constinArgument8,
                                                                                                   class GGS_localVarManager & ioArgument9,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument10,
                                                                                                   class GGS_semanticExpressionForGeneration & outArgument11,
                                                                                                   class GGS_fixitListForGeneration & outArgument12,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_procedureNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_grammarNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                                                                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                                                                                                                      const class GGS_analysisContext constinArgument2,
                                                                                                                                                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                                                                                                                                                      const class GGS_localConstantList constinArgument4,
                                                                                                                                                                                                      const class GGS_localInitializedVariableList constinArgument5,
                                                                                                                                                                                                      const class GGS_localInitializedVariableList constinArgument6,
                                                                                                                                                                                                      const class GGS_semanticInstructionListAST constinArgument7,
                                                                                                                                                                                                      const class GGS_location constinArgument8,
                                                                                                                                                                                                      class GGS_localVarManager & ioArgument9,
                                                                                                                                                                                                      class GGS_semanticInstructionListForGeneration & outArgument10,
                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (class GGS_stringset & ioArgument0,
                                                              const class GGS_semanticInstructionListForGeneration constinArgument1,
                                                              class GGS_uint & ioArgument2,
                                                              class GGS_stringset & ioArgument3,
                                                              const class GGS_bool constinArgument4,
                                                              class GGS_string & ioArgument5,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (const class GGS_lstring constinArgument0,
                                                                                                                                                                                                               class GGS_usefulEntitiesGraph & ioArgument1,
                                                                                                                                                                                                               const class GGS_analysisContext constinArgument2,
                                                                                                                                                                                                               class GGS_unifiedTypeMap & ioArgument3,
                                                                                                                                                                                                               const class GGS_localConstantList constinArgument4,
                                                                                                                                                                                                               const class GGS_localInitializedVariableList constinArgument5,
                                                                                                                                                                                                               const class GGS_localInitializedVariableList constinArgument6,
                                                                                                                                                                                                               const class GGS_semanticInstructionListAST constinArgument7,
                                                                                                                                                                                                               class GGS_localVarManager & ioArgument8,
                                                                                                                                                                                                               class GGS_semanticInstructionListForGeneration & outArgument9,
                                                                                                                                                                                                               class Compiler * inCompiler
                                                                                                                                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputGrammarSwiftDescriptionFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warnsOnEnumerationNameMismatch ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warnsOnOldStyleEnumeration ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

//--------------------------------------------------------------------------------------------------

