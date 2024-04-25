#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                               class GALGAS_actualInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      class GALGAS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                             class GALGAS_semanticInstructionListAST & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                             class GALGAS_castInstructionBranchListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                     class GALGAS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                           class GALGAS_semanticExpressionAST & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                             class GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                          class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                               class GALGAS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                   class GALGAS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                          class GALGAS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__ (const class GALGAS_bool constinArgument0,
                                                                  const class GALGAS_bool constinArgument1,
                                                                  const class GALGAS_bool constinArgument2,
                                                                  const class GALGAS_lstring constinArgument3,
                                                                  class GALGAS_galgasDeclarationAST & ioArgument4,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                              const class GALGAS_location constinArgument1,
                                                              const class GALGAS_actualParameterListAST constinArgument2,
                                                              const class GALGAS_lstring constinArgument3,
                                                              const class GALGAS_lstring constinArgument4,
                                                              class GALGAS_semanticInstructionAST & outArgument5,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                          const class GALGAS_location constinArgument1,
                                                                          const class GALGAS_lstring constinArgument2,
                                                                          const class GALGAS_lstring constinArgument3,
                                                                          class GALGAS_semanticInstructionAST & outArgument4,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                           class GALGAS_ifExpressionList & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                         class GALGAS_semanticInstructionAST & outArgument1,
                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                              class GALGAS_fixitListAST & outArgument1,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                       class GALGAS_actualOutputArgumentList & outArgument1,
                                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                       class GALGAS_actualOutputArgumentList & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                           class GALGAS_actualOutputArgumentList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                          const class GALGAS_bool constinArgument1,
                                                                                          class GALGAS_semanticInstructionAST & outArgument2,
                                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                  class GALGAS_semanticInstructionAST & outArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     const class GALGAS_bool constinArgument1,
                                                                     class GALGAS_semanticInstructionAST & outArgument2,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                          class GALGAS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                              class GALGAS__5B_lstring_5D_ & outArgument1,
                                              class GALGAS_switchExtractedValuesListAST & outArgument2,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                           class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                             class GALGAS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                           const class GALGAS_location constinArgument1,
                                                           const class GALGAS_semanticExpressionAST constinArgument2,
                                                           const class GALGAS_location constinArgument3,
                                                           const class GALGAS_lstring constinArgument4,
                                                           class GALGAS_semanticInstructionAST & outArgument5,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                    GALGAS_semanticInstructionListAST & outArgument1,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_ (const GALGAS_bool constinArgument0,
                                                                                            const GALGAS_bool constinArgument1,
                                                                                            const GALGAS_bool constinArgument2,
                                                                                            const GALGAS_lstring constinArgument3,
                                                                                            GALGAS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_ (const GALGAS_bool constinArgument0,
                                                                                            const GALGAS_bool constinArgument1,
                                                                                            const GALGAS_bool constinArgument2,
                                                                                            const GALGAS_lstring constinArgument3,
                                                                                            GALGAS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                     GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                         GALGAS_actualInputParameterListAST & outArgument1,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_castInstructionBranchListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_semanticInstructionListAST & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                                     const GALGAS_bool constinArgument1,
                                                                                                                     GALGAS_semanticInstructionAST & outArgument2,
                                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                                  GALGAS_actualOutputArgumentList & outArgument1,
                                                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                         GALGAS_fixitListAST & outArgument1,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                     GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                     GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                     GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                         const GALGAS_location constinArgument1,
                                                                                         const GALGAS_actualParameterListAST constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         const GALGAS_lstring constinArgument4,
                                                                                         GALGAS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                         const GALGAS_location constinArgument1,
                                                                                         const GALGAS_actualParameterListAST constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         const GALGAS_lstring constinArgument4,
                                                                                         GALGAS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GALGAS_location constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     const GALGAS_lstring constinArgument3,
                                                                                                     GALGAS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GALGAS_location constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     const GALGAS_lstring constinArgument3,
                                                                                                     GALGAS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                                const GALGAS_bool constinArgument1,
                                                                                                GALGAS_semanticInstructionAST & outArgument2,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i39_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                    GALGAS_semanticInstructionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i39_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i41_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                      GALGAS_ifExpressionList & outArgument1,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                         GALGAS__5B_lstring_5D_ & outArgument1,
                                                                         GALGAS_switchExtractedValuesListAST & outArgument2,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                             GALGAS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                      const GALGAS_location constinArgument1,
                                                                                      const GALGAS_semanticExpressionAST constinArgument2,
                                                                                      const GALGAS_location constinArgument3,
                                                                                      const GALGAS_lstring constinArgument4,
                                                                                      GALGAS_semanticInstructionAST & outArgument5,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                      const GALGAS_location constinArgument1,
                                                                                      const GALGAS_semanticExpressionAST constinArgument2,
                                                                                      const GALGAS_location constinArgument3,
                                                                                      const GALGAS_lstring constinArgument4,
                                                                                      GALGAS_semanticInstructionAST & outArgument5,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_68 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_69 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_70 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_71 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_72 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_73 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_74 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_75 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_76 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_77 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_78 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_79 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_80 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_81 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_82 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_83 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_84 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GALGAS_AccessControlAST & outArgument0,
                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                     class GALGAS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                    class GALGAS_externTypeConstructorList & ioArgument1,
                                                                    class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GALGAS_string & outArgument0,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GALGAS_string & outArgument0,
                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                               class GALGAS_externTypeGetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                               class GALGAS_externTypeMethodList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                               class GALGAS_externTypeSetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                        class GALGAS_filewrapperTemplateListAST & outArgument1,
                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                               class GALGAS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                   class GALGAS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                          class GALGAS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__ (const class GALGAS_lstring constinArgument0,
                                                                class GALGAS_galgasDeclarationAST & ioArgument1,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                  class GALGAS_propertyInCollectionListAST & ioArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_ (class GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                                          class GALGAS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                             class GALGAS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                            GALGAS_propertyInCollectionListAST & ioArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                            GALGAS_propertyInCollectionListAST & ioArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_ (GALGAS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_ (GALGAS_lstringlist & outArgument0,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                  GALGAS_filewrapperTemplateListAST & outArgument1,
                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i8_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                       GALGAS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_ (GALGAS_string & outArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_ (GALGAS_string & outArgument0,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i15_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                               GALGAS_externTypeConstructorList & ioArgument1,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i16_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                          GALGAS_externTypeGetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i17_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                          GALGAS_externTypeSetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i18_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                          GALGAS_externTypeMethodList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i30_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i31_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i33_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i61_ (GALGAS_AccessControlAST & outArgument0,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i61_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i61_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_68 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_69 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_70 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_71 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_72 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_73 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_74 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_75 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_76 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_77 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_78 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_79 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_weakSuffix (class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (class GALGAS_galgasDeclarationAST & ioObject,
                                          class GALGAS_lstring & out_outOptionalTypeName,
                                          class GALGAS_lstring in_inTypeName,
                                          const class GALGAS_bool constin_inPredefined,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3LexiqueComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_LexiqueComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (class GALGAS_indexingListAST & ioArgument0,
                                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GALGAS_lexicalInstructionListAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GALGAS_lexicalListEntryListAST & ioArgument0,
                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GALGAS_lexicalInstructionAST & outArgument0,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalStyleListAST & ioArgument0,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__ (class GALGAS_templateDelimitorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__ (class GALGAS_templateReplacementListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__ (class GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_ (GALGAS_indexingListAST & ioArgument0,
                                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_ (GALGAS_templateDelimitorListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueComponentAST (const class cPtr_lexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_bool readProperty_mIsTemplate (void) const ;

  public: class GALGAS_templateDelimitorListAST readProperty_mTemplateDelimitorListAST (void) const ;

  public: class GALGAS_templateReplacementListAST readProperty_mTemplateReplacementListAST (void) const ;

  public: class GALGAS_lexicalAttributeListAST readProperty_mLexicalAttributeListAST (void) const ;

  public: class GALGAS_lexicalStyleListAST readProperty_mLexicalStyleListAST (void) const ;

  public: class GALGAS_terminalDeclarationListAST readProperty_mTerminalDeclarationListAST (void) const ;

  public: class GALGAS_lexicalMessageDeclarationListAST readProperty_mLexicalMessageDeclarationListAST (void) const ;

  public: class GALGAS_lexicalListDeclarationListAST readProperty_mLexicalListDeclarationListAST (void) const ;

  public: class GALGAS_lexicalRuleListAST readProperty_mLexicalRuleListAST (void) const ;

  public: class GALGAS_indexingListAST readProperty_mIndexingListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexiqueComponentAST init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                                              const class GALGAS_bool & inOperand2,
                                                                                                              const class GALGAS_templateDelimitorListAST & inOperand3,
                                                                                                              const class GALGAS_templateReplacementListAST & inOperand4,
                                                                                                              const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                                                                              const class GALGAS_lexicalStyleListAST & inOperand6,
                                                                                                              const class GALGAS_terminalDeclarationListAST & inOperand7,
                                                                                                              const class GALGAS_lexicalMessageDeclarationListAST & inOperand8,
                                                                                                              const class GALGAS_lexicalListDeclarationListAST & inOperand9,
                                                                                                              const class GALGAS_lexicalRuleListAST & inOperand10,
                                                                                                              const class GALGAS_indexingListAST & inOperand11,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueComponentAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_templateDelimitorListAST & inOperand3,
                                                                  const class GALGAS_templateReplacementListAST & inOperand4,
                                                                  const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                                  const class GALGAS_lexicalStyleListAST & inOperand6,
                                                                  const class GALGAS_terminalDeclarationListAST & inOperand7,
                                                                  const class GALGAS_lexicalMessageDeclarationListAST & inOperand8,
                                                                  const class GALGAS_lexicalListDeclarationListAST & inOperand9,
                                                                  const class GALGAS_lexicalRuleListAST & inOperand10,
                                                                  const class GALGAS_indexingListAST & inOperand11
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueComponentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                                     const class GALGAS_bool & inOperand2,
                                                                                                     const class GALGAS_templateDelimitorListAST & inOperand3,
                                                                                                     const class GALGAS_templateReplacementListAST & inOperand4,
                                                                                                     const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                                                                     const class GALGAS_lexicalStyleListAST & inOperand6,
                                                                                                     const class GALGAS_terminalDeclarationListAST & inOperand7,
                                                                                                     const class GALGAS_lexicalMessageDeclarationListAST & inOperand8,
                                                                                                     const class GALGAS_lexicalListDeclarationListAST & inOperand9,
                                                                                                     const class GALGAS_lexicalRuleListAST & inOperand10,
                                                                                                     const class GALGAS_indexingListAST & inOperand11,
                                                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLexiqueComponentName ;
  public: GALGAS_bool mProperty_mIsTemplate ;
  public: GALGAS_templateDelimitorListAST mProperty_mTemplateDelimitorListAST ;
  public: GALGAS_templateReplacementListAST mProperty_mTemplateReplacementListAST ;
  public: GALGAS_lexicalAttributeListAST mProperty_mLexicalAttributeListAST ;
  public: GALGAS_lexicalStyleListAST mProperty_mLexicalStyleListAST ;
  public: GALGAS_terminalDeclarationListAST mProperty_mTerminalDeclarationListAST ;
  public: GALGAS_lexicalMessageDeclarationListAST mProperty_mLexicalMessageDeclarationListAST ;
  public: GALGAS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationListAST ;
  public: GALGAS_lexicalRuleListAST mProperty_mLexicalRuleListAST ;
  public: GALGAS_indexingListAST mProperty_mIndexingListAST ;


//--- Default constructor
  public: cPtr_lexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueComponentAST (const GALGAS_bool & in_isPredefined,
                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                    const GALGAS_bool & in_mIsTemplate,
                                    const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                    const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                    const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                    const GALGAS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                    const GALGAS_indexingListAST & in_mIndexingListAST
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

