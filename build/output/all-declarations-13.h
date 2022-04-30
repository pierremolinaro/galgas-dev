#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4LexiqueComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_LexiqueComponentSyntax (void) {}

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
  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i2_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i3_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i7_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i10_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i13_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i18_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i24_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i25_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i26_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i33_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i34_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_ (GALGAS_externFunctionListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_ (GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4OptionComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_OptionComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_ (class GALGAS_commandLineOptionListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_i1_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GuiComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GuiComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GALGAS_withLexiqueListAST & ioArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4SyntaxComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_SyntaxComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_ (class GALGAS_syntaxInstructionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GALGAS_syntaxRuleListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                       class GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GALGAS__32_lstringlist & outArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (const GALGAS_lstring constinArgument0,
                                                                                    GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_syntaxRuleListAST & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GrammarComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GrammarComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_ (class GALGAS_lstring & outArgument0,
                                                            class GALGAS_formalParameterListAST & ioArgument1,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument0,
                                                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ProgramDeclarations' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ProgramDeclarations (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ProgramDeclarations_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_2 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @headerCompositionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_headerCompositionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_headerCompositionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_headerCompositionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_headerCompositionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_headerCompositionMap (const GALGAS_headerCompositionMap & inSource) ;
  public: GALGAS_headerCompositionMap & operator = (const GALGAS_headerCompositionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_headerCompositionMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_headerCompositionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_headerCompositionMap constructor_mapWithMapToOverride (const class GALGAS_headerCompositionMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_stringset & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringset constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHeaderStringForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInclusionForKey (class GALGAS_stringset constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringset & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mHeaderStringForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInclusionForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_headerCompositionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_stringset & outOperand1,
                                                    class GALGAS_string & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_headerCompositionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_headerCompositionMap ;
 
} ; // End of GALGAS_headerCompositionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_headerCompositionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_headerCompositionMap (const GALGAS_headerCompositionMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_stringset current_mInclusion (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mHeaderString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_headerCompositionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@headerCompositionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_headerCompositionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_stringset mProperty_mInclusion ;
  public: GALGAS_string mProperty_mHeaderString ;

//--- Constructor
  public: cMapElement_headerCompositionMap (const GALGAS_lstring & inKey,
                                            const GALGAS_stringset & in_mInclusion,
                                            const GALGAS_string & in_mHeaderString
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @headerCompositionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_headerCompositionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_stringset mProperty_mInclusion ;
  public: inline GALGAS_stringset readProperty_mInclusion (void) const {
    return mProperty_mInclusion ;
  }

  public: GALGAS_string mProperty_mHeaderString ;
  public: inline GALGAS_string readProperty_mHeaderString (void) const {
    return mProperty_mHeaderString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_headerCompositionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_headerCompositionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInclusion (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInclusion = inValue ;
  }

  public: inline void setter_setMHeaderString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderString = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_headerCompositionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_headerCompositionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_stringset & in_mInclusion,
                                                  const GALGAS_string & in_mHeaderString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_headerCompositionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_headerCompositionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_stringset & inOperand1,
                                                                               const class GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_headerCompositionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_headerCompositionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @headerRepartitionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_headerRepartitionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_headerRepartitionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_headerRepartitionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_headerRepartitionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_headerRepartitionMap (const GALGAS_headerRepartitionMap & inSource) ;
  public: GALGAS_headerRepartitionMap & operator = (const GALGAS_headerRepartitionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_headerRepartitionMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_headerRepartitionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_headerRepartitionMap constructor_mapWithMapToOverride (const class GALGAS_headerRepartitionMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHeaderFileNameForKey (class GALGAS_string constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mHeaderFileNameForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_headerRepartitionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_headerRepartitionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_headerRepartitionMap ;
 
} ; // End of GALGAS_headerRepartitionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_headerRepartitionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_headerRepartitionMap (const GALGAS_headerRepartitionMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mHeaderFileName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_headerRepartitionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@headerRepartitionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_headerRepartitionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mHeaderFileName ;

//--- Constructor
  public: cMapElement_headerRepartitionMap (const GALGAS_lstring & inKey,
                                            const GALGAS_string & in_mHeaderFileName
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @headerRepartitionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_headerRepartitionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mHeaderFileName ;
  public: inline GALGAS_string readProperty_mHeaderFileName (void) const {
    return mProperty_mHeaderFileName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_headerRepartitionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_headerRepartitionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMHeaderFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_headerRepartitionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_headerRepartitionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_string & in_mHeaderFileName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_headerRepartitionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_headerRepartitionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_headerRepartitionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_headerRepartitionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @projectQualifiedFeatureMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_projectQualifiedFeatureMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_projectQualifiedFeatureMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_projectQualifiedFeatureMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_projectQualifiedFeatureMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inSource) ;
  public: GALGAS_projectQualifiedFeatureMap & operator = (const GALGAS_projectQualifiedFeatureMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_projectQualifiedFeatureMap extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_projectQualifiedFeatureMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_projectQualifiedFeatureMap constructor_mapWithMapToOverride (const class GALGAS_projectQualifiedFeatureMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureValueForKey (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureValueForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_projectQualifiedFeatureMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_projectQualifiedFeatureMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_projectQualifiedFeatureMap ;
 
} ; // End of GALGAS_projectQualifiedFeatureMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_projectQualifiedFeatureMap : public cGenericAbstractEnumerator {
  public: cEnumerator_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_projectQualifiedFeatureMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@projectQualifiedFeatureMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_projectQualifiedFeatureMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mFeatureValue ;

//--- Constructor
  public: cMapElement_projectQualifiedFeatureMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_lstring & in_mFeatureValue
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @projectQualifiedFeatureMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_projectQualifiedFeatureMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mFeatureValue ;
  public: inline GALGAS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_projectQualifiedFeatureMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_projectQualifiedFeatureMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_projectQualifiedFeatureMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_projectQualifiedFeatureMap_2D_element (const GALGAS_lstring & in_lkey,
                                                        const GALGAS_lstring & in_mFeatureValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_projectQualifiedFeatureMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_projectQualifiedFeatureMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_projectQualifiedFeatureMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_projectQualifiedFeatureMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeGroupList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeGroupList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_XCodeGroupList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mGroupReference,
                                                 const class GALGAS_string & in_mGroupName,
                                                 const class GALGAS_string & in_mGroupPath,
                                                 const class GALGAS_stringlist & in_mChildrenRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeGroupList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeGroupList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_XCodeGroupList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_stringlist & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_stringlist & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_XCodeGroupList add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeGroupList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_stringlist constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_stringlist & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_stringlist & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_stringlist & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMChildrenRefsAtIndex (class GALGAS_stringlist constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupPathAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_stringlist & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_stringlist & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mChildrenRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeGroupList ;
 
} ; // End of GALGAS_XCodeGroupList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_XCodeGroupList : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_XCodeGroupList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeGroupList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeGroupList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mGroupReference ;
  public: inline GALGAS_string readProperty_mGroupReference (void) const {
    return mProperty_mGroupReference ;
  }

  public: GALGAS_string mProperty_mGroupName ;
  public: inline GALGAS_string readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GALGAS_string mProperty_mGroupPath ;
  public: inline GALGAS_string readProperty_mGroupPath (void) const {
    return mProperty_mGroupPath ;
  }

  public: GALGAS_stringlist mProperty_mChildrenRefs ;
  public: inline GALGAS_stringlist readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_XCodeGroupList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupReference = inValue ;
  }

  public: inline void setter_setMGroupName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMGroupPath (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupPath = inValue ;
  }

  public: inline void setter_setMChildrenRefs (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_XCodeGroupList_2D_element (const GALGAS_string & in_mGroupReference,
                                            const GALGAS_string & in_mGroupName,
                                            const GALGAS_string & in_mGroupPath,
                                            const GALGAS_stringlist & in_mChildrenRefs) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeGroupList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeGroupList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_stringlist & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeGroupList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeToolTargetList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeToolTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_XCodeToolTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTargetRef,
                                                 const class GALGAS_string & in_mTargetName,
                                                 const class GALGAS_string & in_mProductFileReference,
                                                 const class GALGAS_string & in_mProductFileName,
                                                 const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const class GALGAS_string & in_mBuildPhaseRef,
                                                 const class GALGAS_string & in_mBuildConfigurationListRef,
                                                 const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GALGAS_string & in_mBuildConfigurationRef,
                                                 const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const class GALGAS_string & in_mFrameworkBuildPhaseRef
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeToolTargetList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeToolTargetList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_XCodeToolTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_stringlist & inOperand4,
                                                                             const class GALGAS_string & inOperand5,
                                                                             const class GALGAS_string & inOperand6,
                                                                             const class GALGAS_stringlist & inOperand7,
                                                                             const class GALGAS_string & inOperand8,
                                                                             const class GALGAS_stringlist & inOperand9,
                                                                             const class GALGAS_string & inOperand10
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_stringlist & inOperand4,
                                                     const class GALGAS_string & inOperand5,
                                                     const class GALGAS_string & inOperand6,
                                                     const class GALGAS_stringlist & inOperand7,
                                                     const class GALGAS_string & inOperand8,
                                                     const class GALGAS_stringlist & inOperand9,
                                                     const class GALGAS_string & inOperand10
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_XCodeToolTargetList add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeToolTargetList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_stringlist constinArgument4,
                                                      class GALGAS_string constinArgument5,
                                                      class GALGAS_string constinArgument6,
                                                      class GALGAS_stringlist constinArgument7,
                                                      class GALGAS_string constinArgument8,
                                                      class GALGAS_stringlist constinArgument9,
                                                      class GALGAS_string constinArgument10,
                                                      class GALGAS_uint constinArgument11,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_string & outArgument6,
                                                 class GALGAS_stringlist & outArgument7,
                                                 class GALGAS_string & outArgument8,
                                                 class GALGAS_stringlist & outArgument9,
                                                 class GALGAS_string & outArgument10,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_stringlist & outArgument4,
                                                class GALGAS_string & outArgument5,
                                                class GALGAS_string & outArgument6,
                                                class GALGAS_stringlist & outArgument7,
                                                class GALGAS_string & outArgument8,
                                                class GALGAS_stringlist & outArgument9,
                                                class GALGAS_string & outArgument10,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_stringlist & outArgument4,
                                                      class GALGAS_string & outArgument5,
                                                      class GALGAS_string & outArgument6,
                                                      class GALGAS_stringlist & outArgument7,
                                                      class GALGAS_string & outArgument8,
                                                      class GALGAS_stringlist & outArgument9,
                                                      class GALGAS_string & outArgument10,
                                                      class GALGAS_uint constinArgument11,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GALGAS_string constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_stringlist & outArgument4,
                                             class GALGAS_string & outArgument5,
                                             class GALGAS_string & outArgument6,
                                             class GALGAS_stringlist & outArgument7,
                                             class GALGAS_string & outArgument8,
                                             class GALGAS_stringlist & outArgument9,
                                             class GALGAS_string & outArgument10,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeToolTargetList ;
 
} ; // End of GALGAS_XCodeToolTargetList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_XCodeToolTargetList : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_XCodeToolTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeToolTargetList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeToolTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTargetRef ;
  public: inline GALGAS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GALGAS_string mProperty_mTargetName ;
  public: inline GALGAS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GALGAS_string mProperty_mProductFileReference ;
  public: inline GALGAS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GALGAS_string mProperty_mProductFileName ;
  public: inline GALGAS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GALGAS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GALGAS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GALGAS_string mProperty_mBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationListRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GALGAS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GALGAS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GALGAS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GALGAS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GALGAS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_XCodeToolTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & in_mTargetRef,
                                                 const GALGAS_string & in_mTargetName,
                                                 const GALGAS_string & in_mProductFileReference,
                                                 const GALGAS_string & in_mProductFileName,
                                                 const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const GALGAS_string & in_mBuildPhaseRef,
                                                 const GALGAS_string & in_mBuildConfigurationListRef,
                                                 const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GALGAS_string & in_mBuildConfigurationRef,
                                                 const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const GALGAS_string & in_mFrameworkBuildPhaseRef) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeToolTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeToolTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_stringlist & inOperand4,
                                                                              const class GALGAS_string & inOperand5,
                                                                              const class GALGAS_string & inOperand6,
                                                                              const class GALGAS_stringlist & inOperand7,
                                                                              const class GALGAS_string & inOperand8,
                                                                              const class GALGAS_stringlist & inOperand9,
                                                                              const class GALGAS_string & inOperand10
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeToolTargetList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeAppTargetList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeAppTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_XCodeAppTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTargetRef,
                                                 const class GALGAS_string & in_mTargetName,
                                                 const class GALGAS_string & in_mProductFileReference,
                                                 const class GALGAS_string & in_mProductFileName,
                                                 const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const class GALGAS_string & in_mBuildPhaseRef,
                                                 const class GALGAS_string & in_mBuildConfigurationListRef,
                                                 const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GALGAS_string & in_mBuildConfigurationRef,
                                                 const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const class GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                 const class GALGAS__32_stringlist & in_mDependentTargets,
                                                 const class GALGAS_string & in_mResourceBuildRef,
                                                 const class GALGAS_stringlist & in_mResourceFileBuildRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeAppTargetList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeAppTargetList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_XCodeAppTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_string & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_stringlist & inOperand4,
                                                                            const class GALGAS_string & inOperand5,
                                                                            const class GALGAS_string & inOperand6,
                                                                            const class GALGAS_stringlist & inOperand7,
                                                                            const class GALGAS_string & inOperand8,
                                                                            const class GALGAS_stringlist & inOperand9,
                                                                            const class GALGAS_string & inOperand10,
                                                                            const class GALGAS__32_stringlist & inOperand11,
                                                                            const class GALGAS_string & inOperand12,
                                                                            const class GALGAS_stringlist & inOperand13
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_stringlist & inOperand4,
                                                     const class GALGAS_string & inOperand5,
                                                     const class GALGAS_string & inOperand6,
                                                     const class GALGAS_stringlist & inOperand7,
                                                     const class GALGAS_string & inOperand8,
                                                     const class GALGAS_stringlist & inOperand9,
                                                     const class GALGAS_string & inOperand10,
                                                     const class GALGAS__32_stringlist & inOperand11,
                                                     const class GALGAS_string & inOperand12,
                                                     const class GALGAS_stringlist & inOperand13
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_XCodeAppTargetList add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeAppTargetList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_stringlist constinArgument4,
                                                      class GALGAS_string constinArgument5,
                                                      class GALGAS_string constinArgument6,
                                                      class GALGAS_stringlist constinArgument7,
                                                      class GALGAS_string constinArgument8,
                                                      class GALGAS_stringlist constinArgument9,
                                                      class GALGAS_string constinArgument10,
                                                      class GALGAS__32_stringlist constinArgument11,
                                                      class GALGAS_string constinArgument12,
                                                      class GALGAS_stringlist constinArgument13,
                                                      class GALGAS_uint constinArgument14,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_string & outArgument6,
                                                 class GALGAS_stringlist & outArgument7,
                                                 class GALGAS_string & outArgument8,
                                                 class GALGAS_stringlist & outArgument9,
                                                 class GALGAS_string & outArgument10,
                                                 class GALGAS__32_stringlist & outArgument11,
                                                 class GALGAS_string & outArgument12,
                                                 class GALGAS_stringlist & outArgument13,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_stringlist & outArgument4,
                                                class GALGAS_string & outArgument5,
                                                class GALGAS_string & outArgument6,
                                                class GALGAS_stringlist & outArgument7,
                                                class GALGAS_string & outArgument8,
                                                class GALGAS_stringlist & outArgument9,
                                                class GALGAS_string & outArgument10,
                                                class GALGAS__32_stringlist & outArgument11,
                                                class GALGAS_string & outArgument12,
                                                class GALGAS_stringlist & outArgument13,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_stringlist & outArgument4,
                                                      class GALGAS_string & outArgument5,
                                                      class GALGAS_string & outArgument6,
                                                      class GALGAS_stringlist & outArgument7,
                                                      class GALGAS_string & outArgument8,
                                                      class GALGAS_stringlist & outArgument9,
                                                      class GALGAS_string & outArgument10,
                                                      class GALGAS__32_stringlist & outArgument11,
                                                      class GALGAS_string & outArgument12,
                                                      class GALGAS_stringlist & outArgument13,
                                                      class GALGAS_uint constinArgument14,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GALGAS_string constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependentTargetsAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceBuildRefAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceFileBuildRefsAtIndex (class GALGAS_stringlist constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              class GALGAS__32_stringlist & outArgument11,
                                              class GALGAS_string & outArgument12,
                                              class GALGAS_stringlist & outArgument13,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_stringlist & outArgument4,
                                             class GALGAS_string & outArgument5,
                                             class GALGAS_string & outArgument6,
                                             class GALGAS_stringlist & outArgument7,
                                             class GALGAS_string & outArgument8,
                                             class GALGAS_stringlist & outArgument9,
                                             class GALGAS_string & outArgument10,
                                             class GALGAS__32_stringlist & outArgument11,
                                             class GALGAS_string & outArgument12,
                                             class GALGAS_stringlist & outArgument13,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mDependentTargetsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mResourceBuildRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mResourceFileBuildRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeAppTargetList ;
 
} ; // End of GALGAS_XCodeAppTargetList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_XCodeAppTargetList : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GALGAS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_XCodeAppTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeAppTargetList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeAppTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTargetRef ;
  public: inline GALGAS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GALGAS_string mProperty_mTargetName ;
  public: inline GALGAS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GALGAS_string mProperty_mProductFileReference ;
  public: inline GALGAS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GALGAS_string mProperty_mProductFileName ;
  public: inline GALGAS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GALGAS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GALGAS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GALGAS_string mProperty_mBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationListRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GALGAS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GALGAS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GALGAS_string mProperty_mBuildConfigurationRef ;
  public: inline GALGAS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GALGAS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GALGAS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GALGAS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GALGAS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

  public: GALGAS__32_stringlist mProperty_mDependentTargets ;
  public: inline GALGAS__32_stringlist readProperty_mDependentTargets (void) const {
    return mProperty_mDependentTargets ;
  }

  public: GALGAS_string mProperty_mResourceBuildRef ;
  public: inline GALGAS_string readProperty_mResourceBuildRef (void) const {
    return mProperty_mResourceBuildRef ;
  }

  public: GALGAS_stringlist mProperty_mResourceFileBuildRefs ;
  public: inline GALGAS_stringlist readProperty_mResourceFileBuildRefs (void) const {
    return mProperty_mResourceFileBuildRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_XCodeAppTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMDependentTargets (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependentTargets = inValue ;
  }

  public: inline void setter_setMResourceBuildRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceBuildRef = inValue ;
  }

  public: inline void setter_setMResourceFileBuildRefs (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceFileBuildRefs = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & in_mTargetRef,
                                                const GALGAS_string & in_mTargetName,
                                                const GALGAS_string & in_mProductFileReference,
                                                const GALGAS_string & in_mProductFileName,
                                                const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                const GALGAS_string & in_mBuildPhaseRef,
                                                const GALGAS_string & in_mBuildConfigurationListRef,
                                                const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                const GALGAS_string & in_mBuildConfigurationRef,
                                                const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                const GALGAS__32_stringlist & in_mDependentTargets,
                                                const GALGAS_string & in_mResourceBuildRef,
                                                const GALGAS_stringlist & in_mResourceFileBuildRefs) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_XCodeAppTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_XCodeAppTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_stringlist & inOperand4,
                                                                             const class GALGAS_string & inOperand5,
                                                                             const class GALGAS_string & inOperand6,
                                                                             const class GALGAS_stringlist & inOperand7,
                                                                             const class GALGAS_string & inOperand8,
                                                                             const class GALGAS_stringlist & inOperand9,
                                                                             const class GALGAS_string & inOperand10,
                                                                             const class GALGAS__32_stringlist & inOperand11,
                                                                             const class GALGAS_string & inOperand12,
                                                                             const class GALGAS_stringlist & inOperand13
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeAppTargetList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_BuildFileList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mFileReference,
                                                 const class GALGAS_string & in_mFileName,
                                                 const class GALGAS_string & in_mBuildReference
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_BuildFileList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_BuildFileList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_BuildFileList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_string & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_BuildFileList add_operation (const GALGAS_BuildFileList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_BuildFileList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_BuildFileList ;
 
} ; // End of GALGAS_BuildFileList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_BuildFileList : public cGenericAbstractEnumerator {
  public: cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_BuildFileList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mFileReference ;
  public: inline GALGAS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GALGAS_string mProperty_mFileName ;
  public: inline GALGAS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GALGAS_string mProperty_mBuildReference ;
  public: inline GALGAS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_BuildFileList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_BuildFileList_2D_element (const GALGAS_string & in_mFileReference,
                                           const GALGAS_string & in_mFileName,
                                           const GALGAS_string & in_mBuildReference) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_BuildFileList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_BuildFileList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_BuildFileList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ;

