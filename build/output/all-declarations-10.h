#ifndef all_2D_declarations_2D__31__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"

//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_grammarLL_31_grammar : public cParser_grammarModelBuilder {
//------------------------------------- 'grammar_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//------------------------------------- 'grammar_start_symbol_label' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'label_formal_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_label_5F_formal_5F_parameter_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_label_5F_formal_5F_parameter_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_label_5F_formal_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

  public : virtual int32_t select_grammarModelBuilder_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_9 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_programSLRgrammar : public cParser_expressionSyntax,
                                   public cParser_parameterArgumentSyntax,
                                   public cParser_semanticInstructionsSyntax,
                                   public cParser_programModelBuilder,
                                   public cParser_semanticDeclarationsSyntax {
//------------------------------------- 'actual_input_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_abstractInputParameter & outArgument1,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_parameter_5F_list_ (GALGAS_actualParameterListAST & outArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_attribute_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_attribute_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_attribute_5F_declaration_ (GALGAS_attributeInCollectionListAST & ioArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_instruction_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_instruction_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_instruction_5F_branch_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'collection_value_element' non terminal
//--- 'parse' label
  public : virtual void nt_collection_5F_value_5F_element_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_collection_5F_value_5F_element_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_collection_5F_value_5F_element_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'concatenation_term' non terminal
//--- 'parse' label
  public : virtual void nt_concatenation_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_concatenation_5F_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_concatenation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                        C_String & ioSyntaxDirectedTranslationResult,
                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_factor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                    C_String & ioSyntaxDirectedTranslationResult,
                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_element_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_element_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'foreach_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_foreach_5F_enumerated_5F_object_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_foreach_5F_enumerated_5F_object_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_foreach_5F_enumerated_5F_object_ (GALGAS_foreachInstructionEnumeratedObjectListAST & ioArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_parameter_5F_list_ (GALGAS_formalParameterListAST & outArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'if_branch' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_if_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_branch_ (GALGAS_semanticInstructionAST & outArgument0,
                                          C_String & ioSyntaxDirectedTranslationResult,
                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'insert_method_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_insert_5F_method_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_insert_5F_method_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_insert_5F_method_5F_declaration_ (GALGAS_insertMethodListAST & ioArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'local_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_local_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_local_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_local_5F_declaration_ (GALGAS_bool & outArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'match_entry' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_entry_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_entry_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_entry_ (GALGAS_matchEntryListAST & ioArgument0,
                                            C_String & ioSyntaxDirectedTranslationResult,
                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'match_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_instruction_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_instruction_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_instruction_5F_branch_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_output_5F_expression_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_output_5F_expression_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_String & ioSyntaxDirectedTranslationResult,
                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_primary_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_semanticExpressionAST & outArgument0,
                                     C_String & ioSyntaxDirectedTranslationResult,
                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'program_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_program_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_program_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_program_5F_component_5F_start_5F_symbol_ (GALGAS_programComponentAST & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_programComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_programComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_factor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                                C_String & ioSyntaxDirectedTranslationResult,
                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                              C_String & ioSyntaxDirectedTranslationResult,
                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'semantic_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_declaration_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_ (GALGAS_semanticInstructionAST & outArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_list_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_expression_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                  C_String & ioSyntaxDirectedTranslationResult,
                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

  public : virtual int32_t select_expressionSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_17 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_18 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_19 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_20 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_21 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_22 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_23 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_24 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_25 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_26 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_27 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_28 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_29 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_30 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_31 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_32 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_33 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_34 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_35 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_36 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_37 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_38 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_39 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_40 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_41 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_42 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_43 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_44 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_45 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_46 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_47 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_48 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_49 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_50 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_51 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_52 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_53 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_54 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_55 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_56 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_57 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_58 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_59 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_60 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_61 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_62 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_63 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_64 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_65 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_66 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_programModelBuilder_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_programModelBuilder_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_programModelBuilder_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_programModelBuilder_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_17 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_18 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_19 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_20 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_21 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_22 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_23 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_24 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_25 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_26 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_27 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_28 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_29 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_30 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_31 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_32 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_33 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_34 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_35 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_36 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_37 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_38 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_39 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_40 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_41 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_42 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_43 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_projectLL_31_grammar : public cParser_projectModelBuilder {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_projectComponentAST & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_projectComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_projectComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

  public : virtual int32_t select_projectModelBuilder_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_projectModelBuilder_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_projectModelBuilder_2 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgas_33_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_galgas_33_Grammar : public cParser_galgas_33_ExpressionSyntax,
                                   public cParser_galgas_33_ParameterArgumentSyntax,
                                   public cParser_galgas_33_InstructionsSyntax,
                                   public cParser_galgas_33_DeclarationsSyntax,
                                   public cParser_galgas_33_LexiqueComponentSyntax,
                                   public cParser_galgas_33_OptionComponentSyntax,
                                   public cParser_galgas_33_GuiComponentSyntax,
                                   public cParser_galgas_33_SyntaxComponentSyntax,
                                   public cParser_galgas_33_GrammarComponentSyntax,
                                   public cParser_galgas_33_ProgramDeclarations {
//------------------------------------- 'actual_input_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_abstractInputParameter & outArgument1,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_parameter_5F_list_ (GALGAS_actualParameterListAST & outArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_attribute_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_attribute_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_attribute_5F_declaration_ (GALGAS_attributeInCollectionListAST & ioArgument0,
                                                      C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'branchOfParseWhenInstruction' non terminal
//--- 'parse' label
  public : virtual void nt_branchOfParseWhenInstruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_branchOfParseWhenInstruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_branchOfParseWhenInstruction_ (GALGAS_syntaxInstructionList & outArgument0,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_instruction_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_instruction_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_instruction_5F_branch_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'casted_expression' non terminal
//--- 'parse' label
  public : virtual void nt_casted_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_casted_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_casted_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'collection_value_element' non terminal
//--- 'parse' label
  public : virtual void nt_collection_5F_value_5F_element_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_collection_5F_value_5F_element_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_collection_5F_value_5F_element_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'declaration_with_private' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_with_5F_private_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_5F_with_5F_private_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_with_5F_private_ (const GALGAS_bool inArgument0,
                                                            GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'extern_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_function_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_function_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_function_5F_declaration_ (GALGAS_externFunctionListAST & ioArgument0,
                                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'extern_routine_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_routine_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_routine_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_routine_5F_declaration_ (GALGAS_externRoutineListAST & ioArgument0,
                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_element_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_element_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_parameter_5F_list_ (GALGAS_formalParameterListAST & outArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'function_call_or_attribute' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'grammar_start_symbol_label' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'if_branch' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_if_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_branch_ (GALGAS_semanticInstructionAST & outArgument0,
                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'insert_method_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_insert_5F_method_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_insert_5F_method_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_insert_5F_method_5F_declaration_ (GALGAS_insertMethodListAST & ioArgument0,
                                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'label_formal_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_label_5F_formal_5F_parameter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_label_5F_formal_5F_parameter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_label_5F_formal_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_explicit_5F_rule_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_expression_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_factor_ (GALGAS_lexicalExpressionAST & outArgument0,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_implicit_5F_rule_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_instruction_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_declaration_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_entry_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_entry_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_entry_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                      C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_message_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_message_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_message_5F_declaration_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_send_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_send_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_send_5F_instruction_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_term_ (GALGAS_lexicalExpressionAST & outArgument0,
                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'match_entry' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_entry_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_entry_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_entry_ (GALGAS_matchEntryListAST & ioArgument0,
                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'match_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_instruction_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_instruction_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_instruction_5F_branch_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'nonterminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_nonterminal_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_nonterminal_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_nonterminal_5F_declaration_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'nonterminal_label_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_nonterminal_5F_label_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_nonterminal_5F_label_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_nonterminal_5F_label_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'option' non terminal
//--- 'parse' label
  public : virtual void nt_option_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_option_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_option_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'optional_type' non terminal
//--- 'parse' label
  public : virtual void nt_optional_5F_type_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_optional_5F_type_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_optional_5F_type_ (GALGAS_lstring & outArgument0,
                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_output_5F_expression_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_output_5F_expression_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_primary_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_semanticExpressionAST & outArgument0,
                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'primary_entre_crochets' non terminal
//--- 'parse' label
  public : virtual void nt_primary_5F_entre_5F_crochets_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_primary_5F_entre_5F_crochets_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_5F_entre_5F_crochets_ (GALGAS_semanticExpressionAST & outArgument0,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                                C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public : virtual void nt_repeat_5F_while_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_repeat_5F_while_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_repeat_5F_while_5F_branch_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_ (GALGAS_semanticInstructionAST & outArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_list_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_start_5F_symbol_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_DeclarationAST & ioArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_galgas_33_DeclarationAST & ioArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//------------------------------------- 'style_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_style_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_style_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_style_5F_declaration_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_instruction_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_instruction_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_instruction_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_instruction_5F_list_ (GALGAS_syntaxInstructionList & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_rule_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_rule_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_rule_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_rule_5F_declaration_ (GALGAS_syntaxRuleListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_rule_label' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_rule_5F_label_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_rule_5F_label_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_rule_5F_label_ (const GALGAS_lstring inArgument0,
                                                     GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_delimitor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_delimitor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_delimitor_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_replacement_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_replacement_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_replacement_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_declaration_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_2 (C_Lexique_galgas_33_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
#endif
