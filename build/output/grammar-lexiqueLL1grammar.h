#ifndef grammar_2D_lexiqueLL_31_grammar_1_DEFINED
#define grammar_2D_lexiqueLL_31_grammar_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "syntax-lexiqueSyntax.h"
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_lexiqueLL_31_grammar : public cParser_lexiqueSyntax {
//------------------------------------- 'extern_routine_or_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                GALGAS_externFunctionListAST & ioArgument1,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'function_call_or_attribute' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_explicit_5F_rule_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_expression_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_expression_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_factor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_factor_ (GALGAS_lexicalExpressionAST & outArgument0,
                                               C_String & ioSyntaxDirectedTranslationResult,
                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_implicit_5F_rule_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_instruction_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_instruction_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_declaration_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_entry_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_entry_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_entry_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_message_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_message_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_message_5F_declaration_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                               C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_send_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_send_5F_instruction_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_send_5F_instruction_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_term_ (GALGAS_lexicalExpressionAST & outArgument0,
                                             C_String & ioSyntaxDirectedTranslationResult,
                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexique_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

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

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public : virtual void nt_repeat_5F_while_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_repeat_5F_while_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_repeat_5F_while_5F_branch_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'style_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_style_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_style_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_style_5F_declaration_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_delimitor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_delimitor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_delimitor_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_replacement_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_replacement_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_replacement_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_declaration_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

  public : virtual int32_t select_lexiqueSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_17 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_18 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_19 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_20 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_21 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_22 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_23 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_24 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_25 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_26 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_27 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_28 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_29 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_30 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_31 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_32 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_33 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_34 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_35 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_36 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#endif

