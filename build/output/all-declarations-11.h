#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_castInstructionBranchListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                              class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                              const class GALGAS_lstring constinArgument1,
                                                              const class GALGAS_lstring constinArgument2,
                                                              class GALGAS_semanticInstructionAST & outArgument3,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_ (class GALGAS_ifExpressionList & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GALGAS_fixitListAST & outArgument0,
                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_match_5F_entry_ (class GALGAS_matchEntryListAST & ioArgument0,
                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_match_5F_entry_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_match_5F_entry_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_match_5F_instruction_5F_branch_ (class GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_match_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_match_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (const class GALGAS_bool constinArgument0,
                                                                                          class GALGAS_semanticInstructionAST & outArgument1,
                                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (const class GALGAS_bool constinArgument0,
                                                                     class GALGAS_semanticInstructionAST & outArgument1,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                           const class GALGAS_semanticExpressionAST constinArgument1,
                                                           const class GALGAS_location constinArgument2,
                                                           const class GALGAS_lstring constinArgument3,
                                                           class GALGAS_semanticInstructionAST & outArgument4,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_ (const GALGAS_bool constinArgument0,
                                                                                                                     GALGAS_semanticInstructionAST & outArgument1,
                                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_ (GALGAS_fixitListAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_lstring constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         GALGAS_semanticInstructionAST & outArgument3,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_lstring constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         GALGAS_semanticInstructionAST & outArgument3,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i31_ (const GALGAS_bool constinArgument0,
                                                                                                GALGAS_semanticInstructionAST & outArgument1,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i33_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i35_ (GALGAS_ifExpressionList & outArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_entry_i41_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_entry_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_entry_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_entry_i42_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_entry_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_entry_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i43_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_ (GALGAS_lstringlist & outArgument0,
                                                                         GALGAS_switchExtractedValuesListAST & outArgument1,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_68 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_69 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_70 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_71 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_72 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_73 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_74 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_75 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_76 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_77 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_78 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_79 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_80 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_81 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_82 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_83 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_84 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentInstructionAST (const class cPtr_assignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_semanticExpressionAST & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetVariableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetVariableName ;
  public: GALGAS_lstring mProperty_mOptionalProperty ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_lstring & in_mTargetVariableName,
                                         const GALGAS_lstring & in_mOptionalProperty,
                                         const GALGAS_semanticExpressionAST & in_mSourceExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @divEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_divEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_divEqualExpressionInstructionAST (const class cPtr_divEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_divEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_semanticExpressionAST & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_divEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_divEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_bool & in_mPrefixedBySelf,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionAST & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionImplicitVarInExpAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionImplicitVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST (const class cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionImplicitVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionImplicitVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfAnonymousEnumeration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mEnumeratedExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionImplicitVarInExpAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionImplicitVarInExpAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionImplicitVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mPrefix ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfAnonymousEnumeration ;

//--- Constructor
  public: cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                        const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                        const GALGAS_location & in_mEndOfAnonymousEnumeration
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionVarInExpAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionVarInExpAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionVarInExpAST (const class cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_semanticExpressionAST & inOperand2,
                                                                               const class GALGAS_location & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnumerationExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mEnumeratedExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationOptionalTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationVariable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionVarInExpAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionVarInExpAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mEnumerationOptionalTypeName ;
  public: GALGAS_lstring mProperty_mEnumerationVariable ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfEnumerationExpression ;

//--- Constructor
  public: cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                const GALGAS_lstring & in_mEnumerationVariable,
                                                const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                const GALGAS_location & in_mEndOfEnumerationExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_externFunctionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externFunctionDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_externFunctionDeclarationAST (const class cPtr_externFunctionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externFunctionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (class GALGAS_formalInputParameterListAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externFunctionDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_externFunctionDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_formalInputParameterListAST mProperty_mFormalArgumentList ;
  public: GALGAS_lstring mProperty_mResultTypeName ;

//--- Constructor
  public: cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mFunctionName,
                                             const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                             const GALGAS_lstring & in_mResultTypeName
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externRoutineDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_externRoutineDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externRoutineDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_externRoutineDeclarationAST (const class cPtr_externRoutineDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externRoutineDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externRoutineDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_formalParameterListAST & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externRoutineDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (class GALGAS_formalParameterListAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternal (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externRoutineDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_externRoutineDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_bool mProperty_mIsInternal ;
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_formalParameterListAST mProperty_mFormalArgumentList ;

//--- Constructor
  public: cPtr_externRoutineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_bool & in_mIsInternal,
                                            const GALGAS_lstring & in_mRoutineName,
                                            const GALGAS_formalParameterListAST & in_mFormalArgumentList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionAST (const class cPtr_forInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_semanticExpressionAST & inOperand3,
                                                                 const class GALGAS_location & inOperand4,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                 const class GALGAS_location & inOperand8,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                 const class GALGAS_location & inOperand10,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand11,
                                                                 const class GALGAS_location & inOperand12,
                                                                 const class GALGAS_location & inOperand13
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mAfterInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mBeforeInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mBetweenInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_after_5F_branch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_before_5F_branch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_between_5F_branch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_branch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_foreach_5F_instruction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_while_5F_expression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_mEnumeratedObjectList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexVariableName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_forInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_forInstructionEnumeratedObjectListAST mProperty_mEnumeratedObjectList ;
  public: GALGAS_lstring mProperty_mIndexVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GALGAS_location mProperty_mEndOf_5F_while_5F_expression ;
  public: GALGAS_semanticInstructionListAST mProperty_mBeforeInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_before_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mBetweenInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_between_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mDoInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_do_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mAfterInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_after_5F_branch ;
  public: GALGAS_location mProperty_mEndOf_5F_foreach_5F_instruction ;

//--- Constructor
  public: cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                  const GALGAS_lstring & in_mIndexVariableName,
                                  const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                  const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                  const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                  const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionDeclarationAST : public GALGAS_externFunctionDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_functionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_functionDeclarationAST (const class cPtr_functionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                      const class GALGAS_lstring & inOperand3,
                                                                      const class GALGAS_lstring & inOperand4,
                                                                      const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                      const class GALGAS_location & inOperand6,
                                                                      const class GALGAS_bool & inOperand7,
                                                                      const class GALGAS_bool & inOperand8
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfFunctionInstructionList (class GALGAS_location inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionInstructionList (class GALGAS_semanticInstructionListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternal (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsUsefull (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultVariableName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUsefull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultVariableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mResultVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public: GALGAS_location mProperty_mEndOfFunctionInstructionList ;
  public: GALGAS_bool mProperty_mIsInternal ;
  public: GALGAS_bool mProperty_mIsUsefull ;

//--- Constructor
  public: cPtr_functionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_lstring & in_mFunctionName,
                                       const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                       const GALGAS_lstring & in_mResultTypeName,
                                       const GALGAS_lstring & in_mResultVariableName,
                                       const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                       const GALGAS_location & in_mEndOfFunctionInstructionList,
                                       const GALGAS_bool & in_mIsInternal,
                                       const GALGAS_bool & in_mIsUsefull
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInFileInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInFileInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_grammarInFileInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInFileInstructionAST (const class cPtr_grammarInFileInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInFileInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInFileInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_semanticExpressionAST & inOperand3,
                                                                           const class GALGAS_location & inOperand4,
                                                                           const class GALGAS_actualParameterListAST & inOperand5,
                                                                           const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSourceExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGrammarComponentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInFileInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInFileInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInFileInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GALGAS_location mProperty_mEndOfSourceExpression ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mGrammarComponentName,
                                            const GALGAS_lstring & in_mLabelName,
                                            const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                            const GALGAS_location & in_mEndOfSourceExpression,
                                            const GALGAS_actualParameterListAST & in_mActualParameterList,
                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInStringInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInStringInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_grammarInStringInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInStringInstructionAST (const class cPtr_grammarInStringInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInStringInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInStringInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_semanticExpressionAST & inOperand3,
                                                                             const class GALGAS_location & inOperand4,
                                                                             const class GALGAS_semanticExpressionAST & inOperand5,
                                                                             const class GALGAS_location & inOperand6,
                                                                             const class GALGAS_actualParameterListAST & inOperand7,
                                                                             const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfNameExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSourceExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGrammarComponentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mNameExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInStringInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInStringInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInStringInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GALGAS_location mProperty_mEndOfSourceExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mNameExpression ;
  public: GALGAS_location mProperty_mEndOfNameExpression ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_grammarInStringInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mGrammarComponentName,
                                              const GALGAS_lstring & in_mLabelName,
                                              const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                              const GALGAS_location & in_mEndOfSourceExpression,
                                              const GALGAS_semanticExpressionAST & in_mNameExpression,
                                              const GALGAS_location & in_mEndOfNameExpression,
                                              const GALGAS_actualParameterListAST & in_mActualParameterList,
                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                 const GALGAS_lstring & in_mActualParameterName
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                              const class GALGAS_lstring & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                               const GALGAS_lstring & in_mActualParameterName
                                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_new (const class GALGAS_lstring & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_incDecInstructionAST (const class cPtr_incDecInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_lstringlist & inOperand3,
                                                                    const class GALGAS_incDecKind & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_incDecKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefixedBySelf (class GALGAS_bool inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_incDecInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_bool & in_mPrefixedBySelf,
                                     const GALGAS_lstring & in_mReceiverName,
                                     const GALGAS_lstringlist & in_mStructAttributeList,
                                     const GALGAS_incDecKind & in_mKind
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_incDecNoOVFInstructionAST (const class cPtr_incDecNoOVFInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_lstringlist & inOperand3,
                                                                         const class GALGAS_incDecKind & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_incDecKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefixedBySelf (class GALGAS_bool inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecNoOVFInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecNoOVFInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_incDecNoOVFInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_bool & in_mPrefixedBySelf,
                                          const GALGAS_lstring & in_mReceiverName,
                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                          const GALGAS_incDecKind & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterDeclaredConstant reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputParameterDeclaredConstant : public GALGAS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GALGAS_inputParameterDeclaredConstant (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputParameterDeclaredConstant constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_inputParameterDeclaredConstant (const class cPtr_inputParameterDeclaredConstant * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputParameterDeclaredConstant extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputParameterDeclaredConstant constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterTypeName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredConstant class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputParameterDeclaredConstant class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inputParameterDeclaredConstant : public cPtr_abstractInputParameter {
//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                               const GALGAS_lstring & in_mActualParameterName
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterDeclaredVariable reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputParameterDeclaredVariable : public GALGAS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GALGAS_inputParameterDeclaredVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputParameterDeclaredVariable constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_inputParameterDeclaredVariable (const class cPtr_inputParameterDeclaredVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputParameterDeclaredVariable extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputParameterDeclaredVariable constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterTypeName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredVariable class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputParameterDeclaredVariable class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inputParameterDeclaredVariable : public cPtr_abstractInputParameter {
//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                               const GALGAS_lstring & in_mActualParameterName
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterVariable reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputParameterVariable : public GALGAS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GALGAS_inputParameterVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputParameterVariable constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_inputParameterVariable (const class cPtr_inputParameterVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputParameterVariable extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputParameterVariable constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputParameterVariable & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterVariable class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputParameterVariable class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inputParameterVariable : public cPtr_abstractInputParameter {
//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantDeclarationWithAssignmentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_localConstantDeclarationWithAssignmentAST (const class cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localConstantDeclarationWithAssignmentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localConstantDeclarationWithAssignmentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mVariableName,
                                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationWithAssignmentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationWithAssignmentAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableDeclarationWithAssignmentAST (const class cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationWithAssignmentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationWithAssignmentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_localVariableDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mVariableName,
                                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const class cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                   const class GALGAS_semanticExpressionAST & inOperand4
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithAssignmentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mIsConstant ;
  public: GALGAS_lstring mProperty_mOptionalTypeName ;
  public: GALGAS_lstring mProperty_mVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_bool & in_mIsConstant,
                                                                    const GALGAS_lstring & in_mOptionalTypeName,
                                                                    const GALGAS_lstring & in_mVariableName,
                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @methodCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_methodCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_methodCallInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_methodCallInstructionAST (const class cPtr_methodCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_methodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_actualParameterListAST & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @methodCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_methodCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_lstring mProperty_mMethodName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                         const GALGAS_lstring & in_mMethodName,
                                         const GALGAS_actualParameterListAST & in_mActualParameterList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @minusEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_minusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_minusEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_minusEqualExpressionInstructionAST (const class cPtr_minusEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_minusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_minusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_minusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_minusEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @minusEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_minusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_minusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_bool & in_mPrefixedBySelf,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mStructAttributeList,
                                                   const GALGAS_semanticExpressionAST & in_mExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mulEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mulEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_mulEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_mulEqualExpressionInstructionAST (const class cPtr_mulEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mulEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mulEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_semanticExpressionAST & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mulEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mulEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mulEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mulEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_mulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_bool & in_mPrefixedBySelf,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionAST & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_onceFunctionDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_onceFunctionDeclarationAST (const class cPtr_onceFunctionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_onceFunctionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_lstring & inOperand3,
                                                                          const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                          const class GALGAS_location & inOperand5,
                                                                          const class GALGAS_bool & inOperand6,
                                                                          const class GALGAS_bool & inOperand7
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfFunctionInstructionList (class GALGAS_location inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionInstructionList (class GALGAS_semanticInstructionListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternal (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsUsefull (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultVariableName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUsefull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultVariableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @onceFunctionDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_onceFunctionDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: GALGAS_lstring mProperty_mResultVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public: GALGAS_location mProperty_mEndOfFunctionInstructionList ;
  public: GALGAS_bool mProperty_mIsInternal ;
  public: GALGAS_bool mProperty_mIsUsefull ;

//--- Constructor
  public: cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mFunctionName,
                                           const GALGAS_lstring & in_mResultTypeName,
                                           const GALGAS_lstring & in_mResultVariableName,
                                           const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                           const GALGAS_location & in_mEndOfFunctionInstructionList,
                                           const GALGAS_bool & in_mIsInternal,
                                           const GALGAS_bool & in_mIsUsefull
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualElementsInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualElementsInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualElementsInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_plusEqualElementsInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualElementsInstructionAST (const class cPtr_plusEqualElementsInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualElementsInstructionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualElementsInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_bool & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2,
                                                                               const class GALGAS_lstringlist & inOperand3,
                                                                               const class GALGAS_actualOutputExpressionList & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualElementsInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualElementsInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_plusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public: cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_bool & in_mPrefixedBySelf,
                                                const GALGAS_lstring & in_mReceiverName,
                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                const GALGAS_actualOutputExpressionList & in_mExpressions
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualExpressionInstructionAST (const class cPtr_plusEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_plusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_bool & in_mPrefixedBySelf,
                                                  const GALGAS_lstring & in_mReceiverName,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_procCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_procCallInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_procCallInstructionAST (const class cPtr_procCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_procCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_actualParameterListAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_procCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @procCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_procCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_procCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_lstring & in_mRoutineName,
                                       const GALGAS_actualParameterListAST & in_mActualParameterList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @procDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procDeclarationAST : public GALGAS_externRoutineDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_procDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_procDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_procDeclarationAST (const class cPtr_procDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_procDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_formalParameterListAST & inOperand3,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                  const class GALGAS_location & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_procDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineInstructionList (class GALGAS_location inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineInstructionList (class GALGAS_semanticInstructionListAST inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mRoutineInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @procDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_procDeclarationAST : public cPtr_externRoutineDeclarationAST {
//--- Properties
  public: GALGAS_semanticInstructionListAST mProperty_mRoutineInstructionList ;
  public: GALGAS_location mProperty_mEndOfRoutineInstructionList ;

//--- Constructor
  public: cPtr_procDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_bool & in_mIsInternal,
                                   const GALGAS_lstring & in_mRoutineName,
                                   const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                   const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                   const GALGAS_location & in_mEndOfRoutineInstructionList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readAccessWithInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_readAccessWithInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_readAccessWithInstructionAST (const class cPtr_readAccessWithInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_semanticExpressionAST & inOperand2,
                                                                            const class GALGAS_location & inOperand3,
                                                                            const class GALGAS_semanticExpressionAST & inOperand4,
                                                                            const class GALGAS_location & inOperand5,
                                                                            const class GALGAS_lstring & inOperand6,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                            const class GALGAS_location & inOperand8,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                            const class GALGAS_location & inOperand10
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDoBranchInstructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseBranchInstructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfKeyExpression (class GALGAS_location inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfReceiverExpression (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_do_5F_instructions (class GALGAS_location inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_else_5F_instructions (class GALGAS_location inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefix (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_lstring inArgument0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mDoBranchInstructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mElseBranchInstructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfKeyExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mKeyExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readAccessWithInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readAccessWithInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readAccessWithInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mPrefix ;
  public: GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mKeyExpression ;
  public: GALGAS_location mProperty_mEndOfKeyExpression ;
  public: GALGAS_lstring mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListAST mProperty_mDoBranchInstructions ;
  public: GALGAS_location mProperty_mEndOf_5F_do_5F_instructions ;
  public: GALGAS_semanticInstructionListAST mProperty_mElseBranchInstructions ;
  public: GALGAS_location mProperty_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public: cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mPrefix,
                                             const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                             const GALGAS_location & in_mEndOfReceiverExpression,
                                             const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                             const GALGAS_location & in_mEndOfKeyExpression,
                                             const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                             const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                             const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                             const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                             const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readWriteAccessWithInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_readWriteAccessWithInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_readWriteAccessWithInstructionAST (const class cPtr_readWriteAccessWithInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                                 const class GALGAS_location & inOperand5,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand6,
                                                                                 const class GALGAS_location & inOperand7,
                                                                                 const class GALGAS_lstring & inOperand8,
                                                                                 const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                                 const class GALGAS_location & inOperand10,
                                                                                 const class GALGAS_semanticInstructionListAST & inOperand11,
                                                                                 const class GALGAS_location & inOperand12
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfKeyExpression (class GALGAS_location inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfReceiverExpression (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_do_5F_instructions (class GALGAS_location inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_else_5F_instructions (class GALGAS_location inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldList (class GALGAS_lstringlist inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefix (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverIsPrefixedBySelf (class GALGAS_bool inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_lstring inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_do_5F_Instructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_else_5F_Instructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfKeyExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mKeyExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mReceiverIsPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_m_5F_do_5F_Instructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_m_5F_else_5F_Instructions (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteAccessWithInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readWriteAccessWithInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readWriteAccessWithInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mPrefix ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_bool mProperty_mReceiverIsPrefixedBySelf ;
  public: GALGAS_lstringlist mProperty_mFieldList ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mKeyExpression ;
  public: GALGAS_location mProperty_mEndOfKeyExpression ;
  public: GALGAS_lstring mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListAST mProperty_m_5F_do_5F_Instructions ;
  public: GALGAS_location mProperty_mEndOf_5F_do_5F_instructions ;
  public: GALGAS_semanticInstructionListAST mProperty_m_5F_else_5F_Instructions ;
  public: GALGAS_location mProperty_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public: cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mPrefix,
                                                  const GALGAS_lstring & in_mReceiverName,
                                                  const GALGAS_bool & in_mReceiverIsPrefixedBySelf,
                                                  const GALGAS_lstringlist & in_mFieldList,
                                                  const GALGAS_location & in_mEndOfReceiverExpression,
                                                  const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                  const GALGAS_location & in_mEndOfKeyExpression,
                                                  const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                  const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                  const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                  const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                  const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfPropertyAssignmentInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfPropertyAssignmentInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfPropertyAssignmentInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selfPropertyAssignmentInstructionAST (const class cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfPropertyAssignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfPropertyAssignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfPropertyAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetSelfPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPropertyAssignmentInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfPropertyAssignmentInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfPropertyAssignmentInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetSelfPropertyName ;
  public: GALGAS_lstring mProperty_mOptionalProperty ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_lstring & in_mTargetSelfPropertyName,
                                                     const GALGAS_lstring & in_mOptionalProperty,
                                                     const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfSetterCallInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selfSetterCallInstructionAST (const class cPtr_selfSetterCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_actualParameterListAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfSetterCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfSetterCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mSetterName,
                                             const GALGAS_actualParameterListAST & in_mActualParameterList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_setterCallInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_setterCallInstructionAST (const class cPtr_setterCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_lstringlist & inOperand3,
                                                                        const class GALGAS_lstring & inOperand4,
                                                                        const class GALGAS_lstring & inOperand5,
                                                                        const class GALGAS_actualParameterListAST & inOperand6
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPrefixedBySelf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mReceiverStructProperties (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameForCasting (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @setterCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_setterCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mReceiverStructProperties ;
  public: GALGAS_lstring mProperty_mTypeNameForCasting ;
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_bool & in_mPrefixedBySelf,
                                         const GALGAS_lstring & in_mReceiverName,
                                         const GALGAS_lstringlist & in_mReceiverStructProperties,
                                         const GALGAS_lstring & in_mTypeNameForCasting,
                                         const GALGAS_lstring & in_mSetterName,
                                         const GALGAS_actualParameterListAST & in_mActualParameterList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_typeMethodCallInstructionAST (const class cPtr_typeMethodCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_actualParameterListAST & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @typeMethodCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mMethodName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mMethodName,
                                             const GALGAS_actualParameterListAST & in_mActualParameterList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @undefinedLocalConstantDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_undefinedLocalConstantDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_undefinedLocalConstantDeclarationAST (const class cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @undefinedLocalConstantDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mConstantTypeName ;
  public: GALGAS_lstring mProperty_mConstantName ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_lstring & in_mConstantTypeName,
                                                     const GALGAS_lstring & in_mConstantName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_gmp ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorClassDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorValueClassDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningOnPropertyMethodCollision ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                              class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_ (class GALGAS_externTypeConstructorList & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GALGAS_string & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GALGAS_string & outArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_ (class GALGAS_externTypeGetterList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_ (class GALGAS_externTypeMethodList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_ (class GALGAS_externTypeSetterList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GALGAS_filewrapperTemplateListAST & outArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_ (class GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_attribute_ (class GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_attribute_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_attribute_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_override_ (class GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_override_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_override_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_list_ (class GALGAS_mapStateList & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_transition_ (class GALGAS_mapStateTransitionList & ioArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_transition_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_transition_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_ (GALGAS_string & outArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_ (GALGAS_string & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_ (GALGAS_externTypeGetterList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_ (GALGAS_externTypeSetterList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_ (GALGAS_externTypeMethodList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i28_ (GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i29_ (GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i30_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i31_ (GALGAS_mapStateList & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i32_ (GALGAS_mapStateTransitionList & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i44_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i45_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i46_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i47_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_54 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_55 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionGetterAST (const class cPtr_abstractExtensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                          const class GALGAS_lstring & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mAbstractExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;

//--- Constructor
  public: cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                           const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                           const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionMethodAST (const class cPtr_abstractExtensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_formalParameterListAST & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodFormalParameterList (class GALGAS_formalParameterListAST inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodName (class GALGAS_lstring inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mAbstractExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mAbstractExtensionMethodFormalParameterList ;

//--- Constructor
  public: cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                           const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionSetterAST (const class cPtr_abstractExtensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_formalParameterListAST & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mAbstractExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionSetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mAbstractExtensionSetterFormalParameterList ;

//--- Constructor
  public: cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                           const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_arrayDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arrayDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_arrayDeclarationAST (const class cPtr_arrayDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_luint & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArrayTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mDimension (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mElementTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mArrayTypeName ;
  public: GALGAS_lstring mProperty_mElementTypeName ;
  public: GALGAS_luint mProperty_mDimension ;

//--- Constructor
  public: cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mArrayTypeName,
                                    const GALGAS_lstring & in_mElementTypeName,
                                    const GALGAS_luint & in_mDimension
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolsetDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolsetDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_boolsetDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolsetDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_boolsetDeclarationAST (const class cPtr_boolsetDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolsetDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolsetDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstringlist & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBoolsetTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFlagList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolsetDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolsetDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolsetDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mBoolsetTypeName ;
  public: GALGAS_lstringlist mProperty_mFlagList ;

//--- Constructor
  public: cPtr_boolsetDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_lstring & in_mBoolsetTypeName,
                                      const GALGAS_lstringlist & in_mFlagList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_classDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_classDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_classDeclarationAST (const class cPtr_classDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_classDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_lstring & inOperand3,
                                                                   const class GALGAS_lstring & inOperand4,
                                                                   const class GALGAS_lstringlist & inOperand5,
                                                                   const class GALGAS_propertyInCollectionListAST & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mClassFeatureList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsReference (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @classDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_bool mProperty_mIsReference ;
  public: GALGAS_lstring mProperty_mClassTypeName ;
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_lstringlist mProperty_mClassFeatureList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_bool & in_mIsAbstract,
                                    const GALGAS_bool & in_mIsReference,
                                    const GALGAS_lstring & in_mClassTypeName,
                                    const GALGAS_lstring & in_mSuperClassName,
                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dictDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dictDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_dictDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dictDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_dictDeclarationAST (const class cPtr_dictDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dictDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dictDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                  const class GALGAS_propertyInCollectionListAST & inOperand4
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dictDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDictTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKeyTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dictDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dictDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dictDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mDictTypeName ;
  public: GALGAS_lstring mProperty_mKeyTypeName ;
  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_dictDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mDictTypeName,
                                   const GALGAS_lstring & in_mKeyTypeName,
                                   const GALGAS_lstringlist & in_mAttributeList,
                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_enumDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumDeclarationAST (const class cPtr_enumDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_enumConstantList & inOperand2,
                                                                  const class GALGAS_lstring & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_mConstantList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDefaultConstantName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mEnumTypeName ;
  public: GALGAS_enumConstantList mProperty_mConstantList ;
  public: GALGAS_lstring mProperty_mDefaultConstantName ;

//--- Constructor
  public: cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mEnumTypeName,
                                   const GALGAS_enumConstantList & in_mConstantList,
                                   const GALGAS_lstring & in_mDefaultConstantName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionGetterAST (const class cPtr_extensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                  const class GALGAS_lstring & inOperand4,
                                                                  const class GALGAS_lstring & inOperand5,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                  const class GALGAS_location & inOperand7
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReaderLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mExtensionGetterInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionGetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionGetterReturnedVariableName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mExtensionGetterReturnedTypeName ;
  public: GALGAS_lstring mProperty_mExtensionGetterReturnedVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionGetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfReaderLocation ;

//--- Constructor
  public: cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionGetterName,
                                   const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                   const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                   const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                   const GALGAS_location & in_mEndOfReaderLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionMethodAST (const class cPtr_extensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_formalParameterListAST & inOperand3,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                  const class GALGAS_location & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfMethodLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mExtensionMethodInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mExtensionMethodFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionMethodInstructionList ;
  public: GALGAS_location mProperty_mEndOfMethodLocation ;

//--- Constructor
  public: cPtr_extensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionMethodName,
                                   const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                   const GALGAS_location & in_mEndOfMethodLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionSetterAST (const class cPtr_extensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_formalParameterListAST & inOperand3,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                  const class GALGAS_location & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSetterDeclarationLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mExtensionSetterInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionSetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mExtensionSetterFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionSetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;

//--- Constructor
  public: cPtr_extensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionSetterName,
                                   const GALGAS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                   const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_externTypeDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externTypeDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_externTypeDeclarationAST (const class cPtr_externTypeDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_externTypeConstructorList & inOperand4,
                                                                        const class GALGAS_externTypeGetterList & inOperand5,
                                                                        const class GALGAS_externTypeSetterList & inOperand6,
                                                                        const class GALGAS_externTypeMethodList & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppClassCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppPreDeclarationCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_mExternTypeConstructorList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_mExternTypeGetterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_mExternTypeMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_mExternTypeSetterList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externTypeDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mExternTypeName ;
  public: GALGAS_string mProperty_mCppPreDeclarationCode ;
  public: GALGAS_string mProperty_mCppClassCode ;
  public: GALGAS_externTypeConstructorList mProperty_mExternTypeConstructorList ;
  public: GALGAS_externTypeGetterList mProperty_mExternTypeGetterList ;
  public: GALGAS_externTypeSetterList mProperty_mExternTypeSetterList ;
  public: GALGAS_externTypeMethodList mProperty_mExternTypeMethodList ;

//--- Constructor
  public: cPtr_externTypeDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_lstring & in_mExternTypeName,
                                         const GALGAS_string & in_mCppPreDeclarationCode,
                                         const GALGAS_string & in_mCppClassCode,
                                         const GALGAS_externTypeConstructorList & in_mExternTypeConstructorList,
                                         const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                         const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                         const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperDeclarationAST (const class cPtr_filewrapperDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_lstring & inOperand4,
                                                                         const class GALGAS_lstringlist & inOperand5,
                                                                         const class GALGAS_lstringlist & inOperand6,
                                                                         const class GALGAS_filewrapperTemplateListAST & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperBinaryFileExtensionList (class GALGAS_lstringlist inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperPath (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateList (class GALGAS_filewrapperTemplateListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTextFileExtensionList (class GALGAS_lstringlist inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternal (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileAbsolutePath (class GALGAS_string inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperBinaryFileExtensionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPath (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_mFilewrapperTemplateList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperTextFileExtensionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceFileAbsolutePath (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_bool mProperty_mIsInternal ;
  public: GALGAS_string mProperty_mSourceFileAbsolutePath ;
  public: GALGAS_lstring mProperty_mFilewrapperName ;
  public: GALGAS_lstring mProperty_mFilewrapperPath ;
  public: GALGAS_lstringlist mProperty_mFilewrapperTextFileExtensionList ;
  public: GALGAS_lstringlist mProperty_mFilewrapperBinaryFileExtensionList ;
  public: GALGAS_filewrapperTemplateListAST mProperty_mFilewrapperTemplateList ;

//--- Constructor
  public: cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_bool & in_mIsInternal,
                                          const GALGAS_string & in_mSourceFileAbsolutePath,
                                          const GALGAS_lstring & in_mFilewrapperName,
                                          const GALGAS_lstring & in_mFilewrapperPath,
                                          const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                          const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                          const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_graphDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_graphDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_graphDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_graphDeclarationAST (const class cPtr_graphDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_graphInsertModifierList & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_graphDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypeName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGraphTypeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierList (class GALGAS_graphInsertModifierList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAssociatedListTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGraphTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_mInsertModifierList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @graphDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mGraphTypeName ;
  public: GALGAS_lstring mProperty_mAssociatedListTypeName ;
  public: GALGAS_graphInsertModifierList mProperty_mInsertModifierList ;

//--- Constructor
  public: cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mGraphTypeName,
                                    const GALGAS_lstring & in_mAssociatedListTypeName,
                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_listDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_listDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_listDeclarationAST (const class cPtr_listDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_propertyInCollectionListAST & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mListTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mListTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mListTypeName,
                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listmapDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listmapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_listmapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_listmapDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_listmapDeclarationAST (const class cPtr_listmapDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listmapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listmapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAssociatedListTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mListmapTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listmapDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listmapDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_listmapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mListmapTypeName ;
  public: GALGAS_lstring mProperty_mAssociatedListTypeName ;

//--- Constructor
  public: cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_lstring & in_mListmapTypeName,
                                      const GALGAS_lstring & in_mAssociatedListTypeName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableDeclarationAST (const class cPtr_localVariableDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_bool & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUndefinedConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationAST : public cPtr_semanticInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mVariableName ;
  public: GALGAS_bool mProperty_mIsUndefinedConstant ;

//--- Constructor
  public: cPtr_localVariableDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_lstring & in_mVariableName,
                                            const GALGAS_bool & in_mIsUndefinedConstant
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_mapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_mapDeclarationAST (const class cPtr_mapDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_lstringlist & inOperand2,
                                                                 const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                 const class GALGAS_insertMethodListAST & inOperand4,
                                                                 const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                                 const class GALGAS_mapRemoveMethodListAST & inOperand6,
                                                                 const class GALGAS_insertOrReplaceDeclarationListAST & inOperand7
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeList (class GALGAS_lstringlist inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (class GALGAS_insertMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertOrReplaceDeclarationListAST (class GALGAS_insertOrReplaceDeclarationListAST inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapTypeName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyList (class GALGAS_propertyInCollectionListAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRemoveMethodList (class GALGAS_mapRemoveMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (class GALGAS_mapSearchMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_mInsertOrReplaceDeclarationListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_mRemoveMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mMapTypeName ;
  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapRemoveMethodListAST mProperty_mRemoveMethodList ;
  public: GALGAS_insertOrReplaceDeclarationListAST mProperty_mInsertOrReplaceDeclarationListAST ;

//--- Constructor
  public: cPtr_mapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                  const GALGAS_lstring & in_mMapTypeName,
                                  const GALGAS_lstringlist & in_mAttributeList,
                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                  const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                  const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                  const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                  const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapEntryDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapEntryDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_mapEntryDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapEntryDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_mapEntryDeclarationAST (const class cPtr_mapEntryDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapEntryDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapEntryDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapEntryDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAssociatedMapTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMapEntryTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapEntryDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapEntryDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapEntryDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mapEntryDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mMapEntryTypeName ;
  public: GALGAS_lstring mProperty_mAssociatedMapTypeName ;

//--- Constructor
  public: cPtr_mapEntryDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_lstring & in_mMapEntryTypeName,
                                       const GALGAS_lstring & in_mAssociatedMapTypeName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionGetterAST (const class cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                    const class GALGAS_lstring & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mAbstractExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                     const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                     const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionMethodAST (const class cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_formalParameterListAST & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionMethodFormalParameterList (class GALGAS_formalParameterListAST inArgument0
                                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionMethodName (class GALGAS_lstring inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                     const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionSetterAST (const class cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_formalParameterListAST & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionSetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                     const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionGetterAST (const class cPtr_overridingExtensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                            const class GALGAS_lstring & inOperand4,
                                                                            const class GALGAS_lstring & inOperand5,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                            const class GALGAS_location & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReaderLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mOverridingExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mOverridingExtensionGetterInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionGetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionGetterReturnedVariableName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionGetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfReaderLocation ;

//--- Constructor
  public: cPtr_overridingExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                             const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                             const GALGAS_location & in_mEndOfReaderLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionMethodAST (const class cPtr_overridingExtensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_formalParameterListAST & inOperand3,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                            const class GALGAS_location & inOperand5
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfMethodLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mOverridingExtensionMethodInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionMethodInstructionList ;
  public: GALGAS_location mProperty_mEndOfMethodLocation ;

//--- Constructor
  public: cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                             const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                             const GALGAS_location & in_mEndOfMethodLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionSetterAST (const class cPtr_overridingExtensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_formalParameterListAST & inOperand3,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                            const class GALGAS_location & inOperand5
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSetterDeclarationLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mOverridingExtensionSetterInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionSetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionSetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;

//--- Constructor
  public: cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                             const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                             const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sharedMapDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sharedMapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_sharedMapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sharedMapDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_sharedMapDeclarationAST (const class cPtr_sharedMapDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sharedMapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sharedMapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstringlist & inOperand2,
                                                                       const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                       const class GALGAS_insertMethodListAST & inOperand4,
                                                                       const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                                       const class GALGAS_mapStateList & inOperand6,
                                                                       const class GALGAS_mapOverrideBlockListAST & inOperand7,
                                                                       const class GALGAS_sharedMapAttributeListAST & inOperand8
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeList (class GALGAS_lstringlist inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (class GALGAS_insertMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapOverrideBlockListAST (class GALGAS_mapOverrideBlockListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapStateList (class GALGAS_mapStateList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapTypeName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyList (class GALGAS_propertyInCollectionListAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (class GALGAS_mapSearchMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSharedMapAttributeListAST (class GALGAS_sharedMapAttributeListAST inArgument0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST getter_mMapOverrideBlockListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapStateList getter_mMapStateList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sharedMapAttributeListAST getter_mSharedMapAttributeListAST (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sharedMapDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sharedMapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mMapTypeName ;
  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapStateList mProperty_mMapStateList ;
  public: GALGAS_mapOverrideBlockListAST mProperty_mMapOverrideBlockListAST ;
  public: GALGAS_sharedMapAttributeListAST mProperty_mSharedMapAttributeListAST ;

//--- Constructor
  public: cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_lstring & in_mMapTypeName,
                                        const GALGAS_lstringlist & in_mAttributeList,
                                        const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                        const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                        const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                        const GALGAS_mapStateList & in_mMapStateList,
                                        const GALGAS_mapOverrideBlockListAST & in_mMapOverrideBlockListAST,
                                        const GALGAS_sharedMapAttributeListAST & in_mSharedMapAttributeListAST
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sortedListDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_sortedListDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sortedListDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_sortedListDeclarationAST (const class cPtr_sortedListDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedListDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                        const class GALGAS_sortedListSortDescriptorListAST & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST getter_mSortDescriptorList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSortedListTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sortedListDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mSortedListTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_sortedListSortDescriptorListAST mProperty_mSortDescriptorList ;

//--- Constructor
  public: cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_lstring & in_mSortedListTypeName,
                                         const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                         const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_structDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_structDeclarationAST (const class cPtr_structDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                    const class GALGAS_string & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratedElementTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStructTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mStructurePropertyList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mStructTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mStructurePropertyList ;
  public: GALGAS_string mProperty_mEnumeratedElementTypeName ;

//--- Constructor
  public: cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mStructTypeName,
                                     const GALGAS_propertyInCollectionListAST & in_mStructurePropertyList,
                                     const GALGAS_string & in_mEnumeratedElementTypeName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @weakReferenceDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_weakReferenceDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_weakReferenceDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_weakReferenceDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_weakReferenceDeclarationAST (const class cPtr_weakReferenceDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_weakReferenceDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_lstringlist & inOperand4,
                                                                           const class GALGAS_propertyInCollectionListAST & inOperand5
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_weakReferenceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mClassFeatureList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperWeakReferenceTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mWeakReferenceTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_weakReferenceDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @weakReferenceDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_weakReferenceDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mClassTypeName ;
  public: GALGAS_lstring mProperty_mWeakReferenceTypeName ;
  public: GALGAS_lstring mProperty_mSuperWeakReferenceTypeName ;
  public: GALGAS_lstringlist mProperty_mClassFeatureList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_weakReferenceDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mClassTypeName,
                                            const GALGAS_lstring & in_mWeakReferenceTypeName,
                                            const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                            const GALGAS_lstringlist & in_mClassFeatureList,
                                            const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_weakSuffix (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3LexiqueComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_LexiqueComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_ (class GALGAS_externFunctionListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_ (class GALGAS_externRoutineListAST & ioArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_ (class GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_ (class GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_ (class GALGAS_indexingListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GALGAS_lexicalInstructionListAST & ioArgument0,
                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_ (class GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GALGAS_lexicalListEntryListAST & ioArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_ (class GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GALGAS_lexicalInstructionAST & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_ (class GALGAS_lexicalStyleListAST & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_ (class GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_ (class GALGAS_templateReplacementListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_ (class GALGAS_terminalDeclarationListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_ (GALGAS_externFunctionListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_ (GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalAttributeInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalAttributeInputArgumentAST (const class cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalAttributeInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;

//--- Constructor
  public: cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeInputOutputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputOutputArgumentAST : public GALGAS_abstractLexicalRoutineActualArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputOutputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalAttributeInputOutputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalAttributeInputOutputArgumentAST (const class cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputOutputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputOutputArgumentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputOutputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalAttributeInputOutputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputOutputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {
//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;

//--- Constructor
  public: cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                       const GALGAS_lstring & in_mAttributeName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterInputArgumentAST (const class cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterInputArgumentAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterIntervalMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterIntervalMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterIntervalMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterIntervalMatchAST (const class cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterIntervalMatchAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterIntervalMatchAST constructor_new (const class GALGAS_lchar & inOperand0,
                                                                                const class GALGAS_lchar & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mLowerBound (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mUpperBound (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterIntervalMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {
//--- Properties
  public: GALGAS_lchar mProperty_mLowerBound ;
  public: GALGAS_lchar mProperty_mUpperBound ;

//--- Constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                 const GALGAS_lchar & in_mUpperBound
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterMatchAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {
//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterSetMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterSetMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterSetMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCharacterSetName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mCharacterSetName ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalDropInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalDropInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalDropInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalDropInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalDropInstructionAST (const class cPtr_lexicalDropInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalDropInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalDropInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalDropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalDropInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalDropInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalDropInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;

//--- Constructor
  public: cPtr_lexicalDropInstructionAST (const GALGAS_lstring & in_mTerminalName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalErrorByDefaultAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalErrorByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalErrorByDefaultAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalErrorByDefaultAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalErrorByDefaultAST (const class cPtr_lexicalErrorByDefaultAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalErrorByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalErrorByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDefaultErrorMessageName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalErrorByDefaultAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalErrorByDefaultAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorByDefaultAST : public cPtr_lexicalSendDefaultActionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mDefaultErrorMessageName ;

//--- Constructor
  public: cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalErrorInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalErrorInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalErrorInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalErrorInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalErrorInstructionAST (const class cPtr_lexicalErrorInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalErrorInstructionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalErrorInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalErrorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mErrorMessageName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalErrorInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalErrorInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mErrorMessageName ;

//--- Constructor
  public: cPtr_lexicalErrorInstructionAST (const GALGAS_lstring & in_mErrorMessageName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCallAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCallAST : public GALGAS_lexicalFunctionExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionCallAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionCallAST (const class cPtr_lexicalFunctionCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCallAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCallAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCalledFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCallAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionCallAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionCallAST : public cPtr_lexicalFunctionExpressionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mCalledFunctionName ;

//--- Constructor
  public: cPtr_lexicalFunctionCallAST (const GALGAS_lstring & in_mCalledFunctionName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCharacterIntervalMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCharacterIntervalMatchAST : public GALGAS_lexicalFunctionExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCharacterIntervalMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionCharacterIntervalMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionCharacterIntervalMatchAST (const class cPtr_lexicalFunctionCharacterIntervalMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCharacterIntervalMatchAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCharacterIntervalMatchAST constructor_new (const class GALGAS_lchar & inOperand0,
                                                                                        const class GALGAS_lchar & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mLowerBound (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mUpperBound (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCharacterIntervalMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionCharacterIntervalMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionCharacterIntervalMatchAST : public cPtr_lexicalFunctionExpressionAST {
//--- Properties
  public: GALGAS_lchar mProperty_mLowerBound ;
  public: GALGAS_lchar mProperty_mUpperBound ;

//--- Constructor
  public: cPtr_lexicalFunctionCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                         const GALGAS_lchar & in_mUpperBound
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCharacterMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCharacterMatchAST : public GALGAS_lexicalFunctionExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCharacterMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionCharacterMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionCharacterMatchAST (const class cPtr_lexicalFunctionCharacterMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCharacterMatchAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCharacterMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionCharacterMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionCharacterMatchAST : public cPtr_lexicalFunctionExpressionAST {
//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalFunctionCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionInputArgumentAST (const class cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_mFunctionActualArgumentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_lexicalFunctionCallActualArgumentListAST mProperty_mFunctionActualArgumentList ;

//--- Constructor
  public: cPtr_lexicalFunctionInputArgumentAST (const GALGAS_lstring & in_mFunctionName,
                                                const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalImplicitRuleAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalImplicitRuleAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalImplicitRuleAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mListName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {
//--- Properties
  public: GALGAS_lstring mProperty_mListName ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRewindInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRewindInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRewindInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalRewindInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalRewindInstructionAST (const class cPtr_lexicalRewindInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRewindInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRewindInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalTagName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRewindInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalRewindInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalRewindInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mLexicalTagName ;
  public: GALGAS_lstring mProperty_mTerminalName ;

//--- Constructor
  public: cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                            const GALGAS_lstring & in_mTerminalName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalRoutineInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalRoutineInstructionAST (const class cPtr_lexicalRoutineInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand1,
                                                                            const class GALGAS_lstringlist & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineCallActualArgumentListAST getter_mActualArgumentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mErrorMessageList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalRoutineInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalRoutineInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_lexicalRoutineCallActualArgumentListAST mProperty_mActualArgumentList ;
  public: GALGAS_lstringlist mProperty_mErrorMessageList ;

//--- Constructor
  public: cPtr_lexicalRoutineInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                             const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                             const GALGAS_lstringlist & in_mErrorMessageList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendTerminalByDefaultAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendTerminalByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendTerminalByDefaultAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalSendTerminalByDefaultAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalSendTerminalByDefaultAST (const class cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendTerminalByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendTerminalByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDefaultSentTerminal (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendTerminalByDefaultAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalSendTerminalByDefaultAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalSendTerminalByDefaultAST : public cPtr_lexicalSendDefaultActionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mDefaultSentTerminal ;

//--- Constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSimpleSendInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSimpleSendInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSimpleSendInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalSimpleSendInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalSimpleSendInstructionAST (const class cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSimpleSendInstructionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSimpleSendInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSentTerminal (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSimpleSendInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalSimpleSendInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalSimpleSendInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mSentTerminal ;

//--- Constructor
  public: cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringMatchAST (const class cPtr_lexicalStringMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringMatchAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mString ;

//--- Constructor
  public: cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringNotMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringNotMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringNotMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringNotMatchAST (const class cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringNotMatchAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringNotMatchAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mErrorMessage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringNotMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mString ;
  public: GALGAS_lstring mProperty_mErrorMessage ;

//--- Constructor
  public: cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                         const GALGAS_lstring & in_mErrorMessage
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTagInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTagInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTagInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalTagInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalTagInstructionAST (const class cPtr_lexicalTagInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTagInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTagInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTagInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalTagName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTagInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalTagInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalTagInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mLexicalTagName ;

//--- Constructor
  public: cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalUnsignedInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalUnsignedInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalUnsignedInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalUnsignedInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalUnsignedInputArgumentAST (const class cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalUnsignedInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalUnsignedInputArgumentAST constructor_new (const class GALGAS_luint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mUnsigned (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalUnsignedInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalUnsignedInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalUnsignedInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Properties
  public: GALGAS_luint mProperty_mUnsigned ;

//--- Constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (const GALGAS_luint & in_mUnsigned
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalWarningInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalWarningInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalWarningInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalWarningInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalWarningInstructionAST (const class cPtr_lexicalWarningInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalWarningInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalWarningInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalWarningInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mWarningMessageName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalWarningInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalWarningInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalWarningInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties
  public: GALGAS_lstring mProperty_mWarningMessageName ;

//--- Constructor
  public: cPtr_lexicalWarningInstructionAST (const GALGAS_lstring & in_mWarningMessageName
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueComponentAST (const class cPtr_lexiqueComponentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_metamodelTemplateDelimitorListAST & inOperand3,
                                                                   const class GALGAS_templateReplacementListAST & inOperand4,
                                                                   const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                                   const class GALGAS_lexicalStyleListAST & inOperand6,
                                                                   const class GALGAS_terminalDeclarationListAST & inOperand7,
                                                                   const class GALGAS_lexicalMessageDeclarationListAST & inOperand8,
                                                                   const class GALGAS_lexicalListDeclarationListAST & inOperand9,
                                                                   const class GALGAS_lexicalRuleListAST & inOperand10,
                                                                   const class GALGAS_externRoutineListAST & inOperand11,
                                                                   const class GALGAS_externFunctionListAST & inOperand12,
                                                                   const class GALGAS_indexingListAST & inOperand13,
                                                                   const class GALGAS_lstring & inOperand14,
                                                                   const class GALGAS_lexicalFunctionListAST & inOperand15
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST getter_mExternFunctionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST getter_mExternRoutineList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexingDirectory (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_mIndexingListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsTemplate (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_mLexicalAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionListAST getter_mLexicalFunctionListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_mLexicalListDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_mLexicalMessageDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_mLexicalRuleList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_mLexicalStyleList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueComponentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST getter_mTemplateDelimitorList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_mTemplateReplacementList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_mTerminalDeclarationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueComponentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexiqueComponentAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mLexiqueComponentName ;
  public: GALGAS_bool mProperty_mIsTemplate ;
  public: GALGAS_metamodelTemplateDelimitorListAST mProperty_mTemplateDelimitorList ;
  public: GALGAS_templateReplacementListAST mProperty_mTemplateReplacementList ;
  public: GALGAS_lexicalAttributeListAST mProperty_mLexicalAttributeList ;
  public: GALGAS_lexicalStyleListAST mProperty_mLexicalStyleList ;
  public: GALGAS_terminalDeclarationListAST mProperty_mTerminalDeclarationList ;
  public: GALGAS_lexicalMessageDeclarationListAST mProperty_mLexicalMessageDeclarationList ;
  public: GALGAS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationList ;
  public: GALGAS_lexicalRuleListAST mProperty_mLexicalRuleList ;
  public: GALGAS_externRoutineListAST mProperty_mExternRoutineList ;
  public: GALGAS_externFunctionListAST mProperty_mExternFunctionList ;
  public: GALGAS_indexingListAST mProperty_mIndexingListAST ;
  public: GALGAS_lstring mProperty_mIndexingDirectory ;
  public: GALGAS_lexicalFunctionListAST mProperty_mLexicalFunctionListAST ;

//--- Constructor
  public: cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                    const GALGAS_bool & in_mIsTemplate,
                                    const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                    const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                    const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                    const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                    const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                    const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                    const GALGAS_indexingListAST & in_mIndexingListAST,
                                    const GALGAS_lstring & in_mIndexingDirectory,
                                    const GALGAS_lexicalFunctionListAST & in_mLexicalFunctionListAST
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

