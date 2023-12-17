#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ParameterArgumentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_actualParameterListAST & outArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_formalParameterListAST & outArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__ (class GALGAS_lstringlist & outArgument0,
                                                                  class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_ (GALGAS_lstringlist & outArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_ (GALGAS_lstringlist & outArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_12 (C_Lexique_galgasScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_actualParameterListAST & outArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_castInstructionBranchListAST & ioArgument0,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GALGAS_semanticExpressionAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_formalParameterListAST & outArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                              const class GALGAS_actualParameterListAST constinArgument1,
                                                              const class GALGAS_lstring constinArgument2,
                                                              const class GALGAS_lstring constinArgument3,
                                                              class GALGAS_semanticInstructionAST & outArgument4,
                                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (const class GALGAS_location constinArgument0,
                                                                          const class GALGAS_lstring constinArgument1,
                                                                          const class GALGAS_lstring constinArgument2,
                                                                          class GALGAS_semanticInstructionAST & outArgument3,
                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__ (class GALGAS_ifExpressionList & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                         class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GALGAS_fixitListAST & outArgument0,
                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (const class GALGAS_bool constinArgument0,
                                                                                          class GALGAS_semanticInstructionAST & outArgument1,
                                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (class GALGAS_semanticInstructionAST & outArgument0,
                                                                  class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (const class GALGAS_bool constinArgument0,
                                                                     class GALGAS_semanticInstructionAST & outArgument1,
                                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                           const class GALGAS_semanticExpressionAST constinArgument1,
                                                           const class GALGAS_location constinArgument2,
                                                           const class GALGAS_lstring constinArgument3,
                                                           class GALGAS_semanticInstructionAST & outArgument4,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                            C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_ (const GALGAS_bool constinArgument0,
                                                                                                                     GALGAS_semanticInstructionAST & outArgument1,
                                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_ (GALGAS_fixitListAST & outArgument0,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_ (const GALGAS_location constinArgument0,
                                                                                                     const GALGAS_lstring constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     GALGAS_semanticInstructionAST & outArgument3,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_ (const GALGAS_location constinArgument0,
                                                                                                     const GALGAS_lstring constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     GALGAS_semanticInstructionAST & outArgument3,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_ (const GALGAS_bool constinArgument0,
                                                                                                GALGAS_semanticInstructionAST & outArgument1,
                                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_ (GALGAS_ifExpressionList & outArgument0,
                                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_ (GALGAS_lstringlist & outArgument0,
                                                                         GALGAS_switchExtractedValuesListAST & outArgument1,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_68 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_69 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_70 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_71 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_72 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_73 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_74 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_75 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_76 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_77 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_78 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_79 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_80 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_81 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_82 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_83 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_84 (C_Lexique_galgasScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GALGAS_AccessControlAST & outArgument0,
                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_ (class GALGAS_externTypeConstructorList & ioArgument0,
                                                         class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GALGAS_string & outArgument0,
                                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GALGAS_string & outArgument0,
                                                                   class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_ (class GALGAS_externTypeGetterList & ioArgument0,
                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_ (class GALGAS_externTypeMethodList & ioArgument0,
                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_ (class GALGAS_externTypeSetterList & ioArgument0,
                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GALGAS_filewrapperTemplateListAST & outArgument0,
                                                        class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                            class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__ (class GALGAS_formalParameterListAST & outArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__ (const class GALGAS_lstring constinArgument0,
                                                                class GALGAS_galgasDeclarationAST & ioArgument1,
                                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                  class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_ (class GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                             class GALGAS_lstring & outArgument1,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                            C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                            C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_ (GALGAS_lstringlist & outArgument0,
                                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_ (GALGAS_lstringlist & outArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_ (GALGAS_string & outArgument0,
                                                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_ (GALGAS_string & outArgument0,
                                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_ (GALGAS_externTypeGetterList & ioArgument0,
                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_ (GALGAS_externTypeSetterList & ioArgument0,
                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_ (GALGAS_externTypeMethodList & ioArgument0,
                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                        GALGAS_lstring & outArgument1,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i34_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i34_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i34_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i36_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i57_ (GALGAS_AccessControlAST & outArgument0,
                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i57_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i57_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (C_Lexique_galgasScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_weakSuffix (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3LexiqueComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_LexiqueComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (class GALGAS_indexingListAST & ioArgument0,
                                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GALGAS_lexicalInstructionListAST & ioArgument0,
                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                         class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GALGAS_lexicalListEntryListAST & ioArgument0,
                                                        class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                            class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GALGAS_lexicalInstructionAST & outArgument0,
                                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                         class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__ (class GALGAS_lexicalStyleListAST & ioArgument0,
                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__ (class GALGAS_templateDelimitorListAST & ioArgument0,
                                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__ (class GALGAS_templateReplacementListAST & ioArgument0,
                                                                  class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__ (class GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                  class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_ (GALGAS_indexingListAST & ioArgument0,
                                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                                       C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                                       C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_ (GALGAS_templateDelimitorListAST & ioArgument0,
                                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgasScanner *) = 0 ;


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

//--------------------------------- Property read access
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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueComponentAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionMethodMapForBuildingContext & ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & ioExtensionOverrideDefinitionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionMethodMapForBuildingContext inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticContext & ioSemanticContext,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_string inProductDirectory,
           const class GALGAS_semanticContext inSemanticContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_predefinedTypes inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & ioSemanticDeclarationListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

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

//--- Constructor
  public: cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

