#ifndef all_2D_declarations_2D__31__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR lexiqueLL1grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_lexiqueLL_31_grammar : public cParser_lexiqueSyntax {
//------------------------------------- 'extern_routine_or_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                GALGAS_externFunctionListAST & ioArgument1,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'function_call_or_attribute' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_explicit_5F_rule_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_expression_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_expression_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                    C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_factor_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_factor_ (GALGAS_lexicalExpressionAST & outArgument0,
                                               C_String & ioSyntaxDirectedTranslationResult,
                                               C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_implicit_5F_rule_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_instruction_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_instruction_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                    C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_declaration_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_entry_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_entry_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_entry_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_message_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_message_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_message_5F_declaration_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                               C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_send_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_send_5F_instruction_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_send_5F_instruction_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_term_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_term_ (GALGAS_lexicalExpressionAST & outArgument0,
                                             C_String & ioSyntaxDirectedTranslationResult,
                                             C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'lexique_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public : virtual void nt_repeat_5F_while_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_repeat_5F_while_5F_branch_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_repeat_5F_while_5F_branch_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'style_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_style_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_style_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_style_5F_declaration_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_delimitor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_delimitor_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_delimitor_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_replacement_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_replacement_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_replacement_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_declaration_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

  public : virtual int32_t select_lexiqueSyntax_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_1 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_2 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_3 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_4 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_5 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_6 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_7 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_8 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_9 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_10 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_11 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_12 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_13 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_14 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_15 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_16 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_17 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_18 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_19 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_20 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_21 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_22 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_23 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_24 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_25 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_26 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_27 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_28 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_29 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_30 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_31 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_32 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_33 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_34 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_35 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_36 (C_Lexique_galgas_32_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR optionLL1grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_optionLL_31_grammar : public cParser_optionSyntax {
//------------------------------------- 'option' non terminal
//--- 'parse' label
  public : virtual void nt_option_parse (C_String & ioSyntaxDirectedTranslationResult,
                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_option_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_option_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                    C_String & ioSyntaxDirectedTranslationResult,
                                    C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'option_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_option_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_option_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_option_5F_component_5F_start_5F_symbol_ (GALGAS_optionComponentAST & outArgument0,
                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_optionComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_optionComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

  public : virtual int32_t select_optionSyntax_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_optionSyntax_1 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_optionSyntax_2 (C_Lexique_galgas_32_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR guiGrammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_guiGrammar : public cParser_guiSyntax {
//------------------------------------- 'gui_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_component_5F_start_5F_symbol_ (GALGAS_guiComponentAST & outArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_guiComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_guiComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

  public : virtual int32_t select_guiSyntax_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_guiSyntax_1 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_guiSyntax_2 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_guiSyntax_3 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_guiSyntax_4 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_guiSyntax_5 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_guiSyntax_6 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_guiSyntax_7 (C_Lexique_galgas_32_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR semanticsSLRgrammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_semanticsSLRgrammar : public cParser_expressionSyntax,
                                     public cParser_parameterArgumentSyntax,
                                     public cParser_semanticInstructionsSyntax,
                                     public cParser_semanticsComponent,
                                     public cParser_semanticDeclarationsSyntax {
//------------------------------------- 'actual_input_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_abstractInputParameter & outArgument1,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_parameter_5F_list_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_parameter_5F_list_ (GALGAS_actualParameterListAST & outArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_attribute_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_attribute_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_attribute_5F_declaration_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_instruction_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_instruction_5F_branch_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_instruction_5F_branch_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'collection_value_element' non terminal
//--- 'parse' label
  public : virtual void nt_collection_5F_value_5F_element_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_collection_5F_value_5F_element_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_collection_5F_value_5F_element_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'concatenation_term' non terminal
//--- 'parse' label
  public : virtual void nt_concatenation_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_concatenation_5F_term_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_concatenation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                             C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                        C_String & ioSyntaxDirectedTranslationResult,
                                        C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_factor_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                    C_String & ioSyntaxDirectedTranslationResult,
                                    C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_element_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_element_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'foreach_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_foreach_5F_enumerated_5F_object_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_foreach_5F_enumerated_5F_object_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_foreach_5F_enumerated_5F_object_ (GALGAS_foreachInstructionEnumeratedObjectListAST & ioArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_parameter_5F_list_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_parameter_5F_list_ (GALGAS_formalParameterListAST & outArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'if_branch' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                               C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_if_5F_branch_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_branch_ (GALGAS_semanticInstructionAST & outArgument0,
                                          C_String & ioSyntaxDirectedTranslationResult,
                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'insert_method_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_insert_5F_method_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_insert_5F_method_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_insert_5F_method_5F_declaration_ (GALGAS_insertMethodListAST & ioArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'local_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_local_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_local_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_local_5F_declaration_ (GALGAS_bool & outArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'match_entry' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_entry_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_entry_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_entry_ (GALGAS_matchEntryListAST & ioArgument0,
                                            C_String & ioSyntaxDirectedTranslationResult,
                                            C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'match_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_instruction_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_instruction_5F_branch_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_instruction_5F_branch_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_output_5F_expression_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_output_5F_expression_5F_list_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_String & ioSyntaxDirectedTranslationResult,
                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_primary_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_semanticExpressionAST & outArgument0,
                                     C_String & ioSyntaxDirectedTranslationResult,
                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_factor_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                                C_String & ioSyntaxDirectedTranslationResult,
                                                C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_term_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                              C_String & ioSyntaxDirectedTranslationResult,
                                              C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'semantic_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_declaration_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_declaration_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_ (GALGAS_semanticInstructionAST & outArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_list_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_list_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'semantics_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_semantics_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantics_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantics_5F_component_5F_start_5F_symbol_ (GALGAS_semanticsComponentAST & outArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_semanticsComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_semanticsComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_expression_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                         C_Lexique_galgas_32_Scanner * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                       C_Lexique_galgas_32_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_term_indexing (C_Lexique_galgas_32_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                  C_String & ioSyntaxDirectedTranslationResult,
                                  C_Lexique_galgas_32_Scanner * inCompiler) ;

  public : virtual int32_t select_expressionSyntax_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_1 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_2 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_3 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_4 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_5 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_6 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_7 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_8 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_9 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_10 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_11 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_12 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_13 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_14 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_15 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_expressionSyntax_16 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_1 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_2 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_3 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_4 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_5 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_6 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_7 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_8 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_9 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_10 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_11 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_12 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_13 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_1 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_2 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_3 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_4 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_5 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_6 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_7 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_8 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_9 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_10 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_11 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_12 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_13 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_14 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_15 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_16 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_17 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_18 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_19 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_20 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_21 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_22 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_23 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_24 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_25 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_26 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_27 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_28 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_29 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_30 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_31 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_32 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_33 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_34 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_35 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_36 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_37 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_38 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_39 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_40 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_41 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_42 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_43 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_44 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_45 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_46 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_47 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_48 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_49 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_50 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_51 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_52 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_53 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_54 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_55 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_56 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_57 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_58 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_59 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_60 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_61 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_62 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_63 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_64 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_65 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_66 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_67 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_68 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_69 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticsComponent_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_0 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_1 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_2 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_3 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_4 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_5 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_6 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_7 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_8 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_9 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_10 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_11 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_12 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_13 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_14 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_15 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_16 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_17 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_18 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_19 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_20 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_21 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_22 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_23 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_24 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_25 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_26 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_27 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_28 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_29 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_30 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_31 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_32 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_33 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_34 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_35 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_36 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_37 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_38 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_39 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_40 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_41 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_42 (C_Lexique_galgas_32_Scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_43 (C_Lexique_galgas_32_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
#endif
