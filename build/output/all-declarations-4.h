#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3OptionComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_OptionComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__ (class GGS_commandLineOptionListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GuiComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GuiComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GGS_guiSimpleAttributeListAST & ioArgument0,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GGS_withLexiqueListAST & ioArgument0,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                                    class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument0,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3SyntaxComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_SyntaxComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_actualInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxInstructionList & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class GGS_nonterminalDeclarationListAST & ioArgument1,
                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_semanticInstructionAST & outArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                class GGS_syntaxInstructionAST & outArgument1,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                        class GGS_syntaxInstructionList & outArgument1,
                                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxRuleListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       const class GGS_lstring constinArgument1,
                                                       class GGS_syntaxRuleLabelListAST & ioArgument2,
                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GGS__32_lstringlist & outArgument0,
                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_nonterminalDeclarationListAST & ioArgument1,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    const GGS_lstring constinArgument1,
                                                                                    GGS_syntaxRuleLabelListAST & ioArgument2,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxRuleListAST & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_syntaxInstructionList & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_syntaxInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxInstructionList & outArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxInstructionList & outArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_syntaxInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_syntaxInstructionAST & outArgument1,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_syntaxInstructionAST & outArgument1,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_syntaxInstructionAST & outArgument1,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_ (GGS__32_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_syntaxInstructionAST & outArgument1,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_syntaxInstructionAST & outArgument1,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_syntaxInstructionAST & outArgument1,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalCallInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalCallInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_nonterminalCallInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nonterminalCallInstruction (const class cPtr_nonterminalCallInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNonterminalName (void) const ;

  public: class GGS_lstring readProperty_mLabelName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalCallInstruction init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_lstring & inOperand2,
                                                                          const class GGS_actualParameterListAST & inOperand3,
                                                                          const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalCallInstruction extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonterminalCallInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @nonterminalCallInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_nonterminalCallInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nonterminalCallInstruction_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_actualParameterListAST & inOperand3,
                                                                    const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mNonterminalName ;
  public: GGS_lstring mProperty_mLabelName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_nonterminalCallInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nonterminalCallInstruction (const GGS_location & in_mInstructionLocation,
                                           const GGS_lstring & in_mNonterminalName,
                                           const GGS_lstring & in_mLabelName,
                                           const GGS_actualParameterListAST & in_mActualParameterList,
                                           const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseLoopInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseLoopInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_parseLoopInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_parseLoopInstruction (const class cPtr_parseLoopInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mVariantExpression (void) const ;

  public: class GGS_location readProperty_mEndOfVariantExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mWhileExpression (void) const ;

  public: class GGS_location readProperty_mEndOfWhileExpression (void) const ;

  public: class GGS_syntaxInstructionList readProperty_mDoInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_parseLoopInstruction init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_semanticExpressionAST & inOperand3,
                                                                            const class GGS_location & inOperand4,
                                                                            const class GGS_syntaxInstructionList & inOperand5,
                                                                            const class GGS_location & inOperand6,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_parseLoopInstruction extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseLoopInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseLoopInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @parseLoopInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_parseLoopInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void parseLoopInstruction_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_semanticExpressionAST & inOperand3,
                                                                      const class GGS_location & inOperand4,
                                                                      const class GGS_syntaxInstructionList & inOperand5,
                                                                      const class GGS_location & inOperand6,
                                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mVariantExpression ;
  public: GGS_location mProperty_mEndOfVariantExpression ;
  public: GGS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GGS_location mProperty_mEndOfWhileExpression ;
  public: GGS_syntaxInstructionList mProperty_mDoInstructionList ;
  public: GGS_location mProperty_mEndOfInstructionList ;


//--- Default constructor
  public: cPtr_parseLoopInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_parseLoopInstruction (const GGS_location & in_mInstructionLocation,
                                     const GGS_semanticExpressionAST & in_mVariantExpression,
                                     const GGS_location & in_mEndOfVariantExpression,
                                     const GGS_semanticExpressionAST & in_mWhileExpression,
                                     const GGS_location & in_mEndOfWhileExpression,
                                     const GGS_syntaxInstructionList & in_mDoInstructionList,
                                     const GGS_location & in_mEndOfInstructionList,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseRewindInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseRewindInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_parseRewindInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_parseRewindInstruction (const class cPtr_parseRewindInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_listOfSyntaxInstructionList readProperty_mParseRewindBranchList (void) const ;

  public: class GGS_location readProperty_mEndOfParseDoInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_parseRewindInstruction init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_listOfSyntaxInstructionList & inOperand1,
                                                              const class GGS_location & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_parseRewindInstruction extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseRewindInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseRewindInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @parseRewindInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_parseRewindInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void parseRewindInstruction_init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_listOfSyntaxInstructionList & inOperand1,
                                                        const class GGS_location & inOperand2,
                                                        Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_listOfSyntaxInstructionList mProperty_mParseRewindBranchList ;
  public: GGS_location mProperty_mEndOfParseDoInstruction ;


//--- Default constructor
  public: cPtr_parseRewindInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_parseRewindInstruction (const GGS_location & in_mInstructionLocation,
                                       const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                       const GGS_location & in_mEndOfParseDoInstruction,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseWhenInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseWhenInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_parseWhenInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_parseWhenInstruction (const class cPtr_parseWhenInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mWhenExpression (void) const ;

  public: class GGS_location readProperty_mEndOfWhenExpression (void) const ;

  public: class GGS_syntaxInstructionList readProperty_mWhenInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfWhenInstructionList (void) const ;

  public: class GGS_syntaxInstructionList readProperty_mElseInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_parseWhenInstruction init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_syntaxInstructionList & inOperand3,
                                                                            const class GGS_location & inOperand4,
                                                                            const class GGS_syntaxInstructionList & inOperand5,
                                                                            const class GGS_location & inOperand6,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_parseWhenInstruction extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseWhenInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseWhenInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @parseWhenInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_parseWhenInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void parseWhenInstruction_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_syntaxInstructionList & inOperand3,
                                                                      const class GGS_location & inOperand4,
                                                                      const class GGS_syntaxInstructionList & inOperand5,
                                                                      const class GGS_location & inOperand6,
                                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mWhenExpression ;
  public: GGS_location mProperty_mEndOfWhenExpression ;
  public: GGS_syntaxInstructionList mProperty_mWhenInstructionList ;
  public: GGS_location mProperty_mEndOfWhenInstructionList ;
  public: GGS_syntaxInstructionList mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfElseInstructionList ;


//--- Default constructor
  public: cPtr_parseWhenInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_parseWhenInstruction (const GGS_location & in_mInstructionLocation,
                                     const GGS_semanticExpressionAST & in_mWhenExpression,
                                     const GGS_location & in_mEndOfWhenExpression,
                                     const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                     const GGS_location & in_mEndOfWhenInstructionList,
                                     const GGS_syntaxInstructionList & in_mElseInstructionList,
                                     const GGS_location & in_mEndOfElseInstructionList,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_repeatInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstruction (const class cPtr_repeatInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_syntaxInstructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const ;

  public: class GGS_listOfSyntaxInstructionList readProperty_mRepeatBranchList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_repeat_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstruction init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_syntaxInstructionList & inOperand1,
                                                                 const class GGS_location & inOperand2,
                                                                 const class GGS_listOfSyntaxInstructionList & inOperand3,
                                                                 const class GGS_location & inOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstruction extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @repeatInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_repeatInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void repeatInstruction_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_syntaxInstructionList & inOperand1,
                                                           const class GGS_location & inOperand2,
                                                           const class GGS_listOfSyntaxInstructionList & inOperand3,
                                                           const class GGS_location & inOperand4,
                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_syntaxInstructionList mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  public: GGS_listOfSyntaxInstructionList mProperty_mRepeatBranchList ;
  public: GGS_location mProperty_mEndOf_5F_repeat_5F_instruction ;


//--- Default constructor
  public: cPtr_repeatInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_repeatInstruction (const GGS_location & in_mInstructionLocation,
                                  const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                  const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                  const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                  const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selectInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstruction (const class cPtr_selectInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_listOfSyntaxInstructionList readProperty_mSelectBranchList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_select_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstruction init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_listOfSyntaxInstructionList & inOperand1,
                                                         const class GGS_location & inOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstruction extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_selectInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectInstruction_init_21__21__21_ (const class GGS_location & inOperand0,
                                                   const class GGS_listOfSyntaxInstructionList & inOperand1,
                                                   const class GGS_location & inOperand2,
                                                   Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_listOfSyntaxInstructionList mProperty_mSelectBranchList ;
  public: GGS_location mProperty_mEndOf_5F_select_5F_instruction ;


//--- Default constructor
  public: cPtr_selectInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectInstruction (const GGS_location & in_mInstructionLocation,
                                  const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                  const GGS_location & in_mEndOf_5F_select_5F_instruction,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionAST : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxSendInstructionAST (const class cPtr_syntaxSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxSendInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxSendInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxSendInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxSendInstructionAST : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxSendInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_syntaxSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxSendInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_semanticExpressionAST & in_mExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionAST : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_terminalCheckInstructionAST (const class cPtr_terminalCheckInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalName (void) const ;

  public: class GGS_actualInputParameterListAST readProperty_mActualInputParameterList (void) const ;

  public: class GGS__32_lstringlist readProperty_mIndexingKeyList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalCheckInstructionAST init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_actualInputParameterListAST & inOperand2,
                                                                               const class GGS__32_lstringlist & inOperand3,
                                                                               const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                               const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalCheckInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @terminalCheckInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstructionAST : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void terminalCheckInstructionAST_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_actualInputParameterListAST & inOperand2,
                                                                         const class GGS__32_lstringlist & inOperand3,
                                                                         const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                         const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                         Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: GGS_actualInputParameterListAST mProperty_mActualInputParameterList ;
  public: GGS__32_lstringlist mProperty_mIndexingKeyList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;


//--- Default constructor
  public: cPtr_terminalCheckInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_terminalCheckInstructionAST (const GGS_location & in_mInstructionLocation,
                                            const GGS_lstring & in_mTerminalName,
                                            const GGS_actualInputParameterListAST & in_mActualInputParameterList,
                                            const GGS__32_lstringlist & in_mIndexingKeyList,
                                            const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                            const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@syntaxExtensions insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_syntaxExtensions & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_lstring constin_inSyntaxComponentName,
                                const class GGS_nonterminalDeclarationListAST constin_inNonterminalDeclarationList,
                                const class GGS_syntaxRuleListAST constin_inRuleList,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GrammarComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GrammarComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                              const class GGS_lstring constinArgument1,
                                                                              class GGS_nonTerminalLabelListAST & ioArgument2,
                                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_lstring & outArgument1,
                                                                       class GGS_formalParameterListAST & ioArgument2,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                            const GGS_lstring constinArgument1,
                                                                                                            GGS_nonTerminalLabelListAST & ioArgument2,
                                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProgramDeclarations' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProgramDeclarations (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProgramDeclarations_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_2 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLexicalRoutineActualArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLexicalRoutineActualArgumentAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (const class GGS_abstractLexicalRoutineActualArgumentAST & inSource) ;

  public: GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & operator = (const class GGS_abstractLexicalRoutineActualArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractLexicalRoutineActualArgumentAST_2E_weak init_nil (void) {
    GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractLexicalRoutineActualArgumentAST bang_abstractLexicalRoutineActualArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractLexicalRoutineActualArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractLexicalRoutineActualArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractLexicalRoutineActualArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputOutputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputOutputArgumentAST_2E_weak : public GGS_abstractLexicalRoutineActualArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (const class GGS_lexicalAttributeInputOutputArgumentAST & inSource) ;

  public: GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & operator = (const class GGS_lexicalAttributeInputOutputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalAttributeInputOutputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalAttributeInputOutputArgumentAST bang_lexicalAttributeInputOutputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalAttributeInputOutputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalAttributeInputOutputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalAttributeInputOutputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFormalInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFormalInputArgumentAST_2E_weak : public GGS_abstractLexicalRoutineActualArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalFormalInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalFormalInputArgumentAST_2E_weak (const class GGS_lexicalFormalInputArgumentAST & inSource) ;

  public: GGS_lexicalFormalInputArgumentAST_2E_weak & operator = (const class GGS_lexicalFormalInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalFormalInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalFormalInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalFormalInputArgumentAST bang_lexicalFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalFormalInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFormalInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFormalInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFormalInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineCallActualArgumentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineCallActualArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractLexicalRoutineActualArgumentAST mProperty_mLexicalRoutineActualArgument ;
  public: inline GGS_abstractLexicalRoutineActualArgumentAST readProperty_mLexicalRoutineActualArgument (void) const {
    return mProperty_mLexicalRoutineActualArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalRoutineActualArgument (const GGS_abstractLexicalRoutineActualArgumentAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineActualArgument = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element & operator = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineCallActualArgumentListAST_2E_element init_21_ (const class GGS_abstractLexicalRoutineActualArgumentAST & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineCallActualArgumentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineCallInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalRoutineCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalRoutineCallInstructionAST_2E_weak (const class GGS_lexicalRoutineCallInstructionAST & inSource) ;

  public: GGS_lexicalRoutineCallInstructionAST_2E_weak & operator = (const class GGS_lexicalRoutineCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalRoutineCallInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalRoutineCallInstructionAST bang_lexicalRoutineCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalRoutineCallInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRoutineCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                        const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const class GGS_lexicalArgumentModeAST constin_inLexicalRoutineFormalArgumentMode,
                                                          const class GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum lexicalArgumentModeAST
//--------------------------------------------------------------------------------------------------

class GGS_lexicalArgumentModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_lexicalArgumentModeAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_lexicalInputMode,
    enum_lexicalInputOutputMode
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalArgumentModeAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalArgumentModeAST class_func_lexicalInputMode (LOCATION_ARGS) ;

  public: static class GGS_lexicalArgumentModeAST class_func_lexicalInputOutputMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalArgumentModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalInputMode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalInputOutputMode (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;

//--------------------------------------------------------------------------------------------------
//   enum lexicalTypeEnum
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_lexicalTypeEnum (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_lexicalType_5F_string,
    enum_lexicalType_5F_char,
    enum_lexicalType_5F_uint,
    enum_lexicalType_5F_uint_36__34_,
    enum_lexicalType_5F_sint,
    enum_lexicalType_5F_sint_36__34_,
    enum_lexicalType_5F_double,
    enum_lexicalType_5F_bigint
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalTypeEnum extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_bigint (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_char (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_double (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_sint (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_sint_36__34_ (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_string (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_uint (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalTypeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_char (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_sint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_uint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLexicalType_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitorListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mStartString ;
  public: inline GGS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GGS_bool mProperty_nonAtomicSelection ;
  public: inline GGS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GGS_bool mProperty_mTemplateEndMark ;
  public: inline GGS_bool readProperty_mTemplateEndMark (void) const {
    return mProperty_mTemplateEndMark ;
  }

  public: GGS_bool mProperty_mPreserved ;
  public: inline GGS_bool readProperty_mPreserved (void) const {
    return mProperty_mPreserved ;
  }

  public: GGS_lstring mProperty_mEndString ;
  public: inline GGS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateDelimitorListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setMTemplateEndMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateEndMark = inValue ;
  }

  public: inline void setter_setMPreserved (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreserved = inValue ;
  }

  public: inline void setter_setMEndString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateDelimitorListAST_2E_element (const GGS_lstring & in_mStartString,
                                                   const GGS_bool & in_nonAtomicSelection,
                                                   const GGS_bool & in_mTemplateEndMark,
                                                   const GGS_bool & in_mPreserved,
                                                   const GGS_lstring & in_mEndString) ;

//--------------------------------- Copy constructor
  public: GGS_templateDelimitorListAST_2E_element (const GGS_templateDelimitorListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateDelimitorListAST_2E_element & operator = (const GGS_templateDelimitorListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitorListAST_2E_element init_21__21_nonAtomicSelection_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_bool & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_lstring & inOperand4,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDelimitorListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateReplacementListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateReplacementListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMatchString ;
  public: inline GGS_lstring readProperty_mMatchString (void) const {
    return mProperty_mMatchString ;
  }

  public: GGS_lstring mProperty_mReplacementString ;
  public: inline GGS_lstring readProperty_mReplacementString (void) const {
    return mProperty_mReplacementString ;
  }

  public: GGS_lstring mProperty_mReplacementFunction ;
  public: inline GGS_lstring readProperty_mReplacementFunction (void) const {
    return mProperty_mReplacementFunction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateReplacementListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMatchString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMatchString = inValue ;
  }

  public: inline void setter_setMReplacementString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementString = inValue ;
  }

  public: inline void setter_setMReplacementFunction (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateReplacementListAST_2E_element (const GGS_lstring & in_mMatchString,
                                                     const GGS_lstring & in_mReplacementString,
                                                     const GGS_lstring & in_mReplacementFunction) ;

//--------------------------------- Copy constructor
  public: GGS_templateReplacementListAST_2E_element (const GGS_templateReplacementListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateReplacementListAST_2E_element & operator = (const GGS_templateReplacementListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateReplacementListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateReplacementListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateReplacementListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLexiqueComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLexiqueComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLexiqueComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLexiqueComponentAST_2E_weak (const class GGS_templateLexiqueComponentAST & inSource) ;

  public: GGS_templateLexiqueComponentAST_2E_weak & operator = (const class GGS_templateLexiqueComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLexiqueComponentAST_2E_weak init_nil (void) {
    GGS_templateLexiqueComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLexiqueComponentAST bang_templateLexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLexiqueComponentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLexiqueComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLexiqueComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLexiqueComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GGS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GGS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_unifiedTypeMapElementClass & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeMap_2E_element & operator = (const GGS_unifiedTypeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_unifiedTypeMapElementClass & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unifiedTypeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GGS_unifiedTypeMap & ioObject,
                                const class GGS_lstring constin_inLKey,
                                class GGS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeMapEntryForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                   const class GGS_lstring & constinArgument0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeMapEntryOrNullForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                         const class GGS_lstring & constinArgument0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_unifiedTypeDefinition constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeDefinition struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_bool mProperty_isPredefined ;
  public: inline GGS_bool readProperty_isPredefined (void) const {
    return mProperty_isPredefined ;
  }

  public: GGS_bool mProperty_isConcrete ;
  public: inline GGS_bool readProperty_isConcrete (void) const {
    return mProperty_isConcrete ;
  }

  public: GGS_bool mProperty_isFinal ;
  public: inline GGS_bool readProperty_isFinal (void) const {
    return mProperty_isFinal ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_superType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_superType (void) const {
    return mProperty_superType ;
  }

  public: GGS_typeKindEnum mProperty_typeKind ;
  public: inline GGS_typeKindEnum readProperty_typeKind (void) const {
    return mProperty_typeKind ;
  }

  public: GGS_bool mProperty_supportCollectionValue ;
  public: inline GGS_bool readProperty_supportCollectionValue (void) const {
    return mProperty_supportCollectionValue ;
  }

  public: GGS_typedPropertyList mProperty_allTypedPropertyList ;
  public: inline GGS_typedPropertyList readProperty_allTypedPropertyList (void) const {
    return mProperty_allTypedPropertyList ;
  }

  public: GGS_propertyMap mProperty_propertyMap ;
  public: inline GGS_propertyMap readProperty_propertyMap (void) const {
    return mProperty_propertyMap ;
  }

  public: GGS_typedPropertyList mProperty_currentTypedPropertyList ;
  public: inline GGS_typedPropertyList readProperty_currentTypedPropertyList (void) const {
    return mProperty_currentTypedPropertyList ;
  }

  public: GGS_initializerMap mProperty_initializerMap ;
  public: inline GGS_initializerMap readProperty_initializerMap (void) const {
    return mProperty_initializerMap ;
  }

  public: GGS_classFunctionMap mProperty_classFunctionMap ;
  public: inline GGS_classFunctionMap readProperty_classFunctionMap (void) const {
    return mProperty_classFunctionMap ;
  }

  public: GGS_getterMap mProperty_getterMap ;
  public: inline GGS_getterMap readProperty_getterMap (void) const {
    return mProperty_getterMap ;
  }

  public: GGS_setterMap mProperty_setterMap ;
  public: inline GGS_setterMap readProperty_setterMap (void) const {
    return mProperty_setterMap ;
  }

  public: GGS_instanceMethodMap mProperty_instanceMethodMap ;
  public: inline GGS_instanceMethodMap readProperty_instanceMethodMap (void) const {
    return mProperty_instanceMethodMap ;
  }

  public: GGS_classMethodMap mProperty_classMethodMap ;
  public: inline GGS_classMethodMap readProperty_classMethodMap (void) const {
    return mProperty_classMethodMap ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_unwrappedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_unwrappedType (void) const {
    return mProperty_unwrappedType ;
  }

  public: GGS_subscriptMap mProperty_readSubscriptMap ;
  public: inline GGS_subscriptMap readProperty_readSubscriptMap (void) const {
    return mProperty_readSubscriptMap ;
  }

  public: GGS_enumerationDescriptorList mProperty_enumerationDescriptorList ;
  public: inline GGS_enumerationDescriptorList readProperty_enumerationDescriptorList (void) const {
    return mProperty_enumerationDescriptorList ;
  }

  public: GGS_typeFeatures mProperty_features ;
  public: inline GGS_typeFeatures readProperty_features (void) const {
    return mProperty_features ;
  }

  public: GGS_functionSignature mProperty_addAssignOperatorArguments ;
  public: inline GGS_functionSignature readProperty_addAssignOperatorArguments (void) const {
    return mProperty_addAssignOperatorArguments ;
  }

  public: GGS_bool mProperty_generateHeaderInSeparateFile ;
  public: inline GGS_bool readProperty_generateHeaderInSeparateFile (void) const {
    return mProperty_generateHeaderInSeparateFile ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_typeForEnumeratedElement ;
  public: inline GGS_unifiedTypeMapEntry readProperty_typeForEnumeratedElement (void) const {
    return mProperty_typeForEnumeratedElement ;
  }

  public: GGS_string mProperty_headerFileName ;
  public: inline GGS_string readProperty_headerFileName (void) const {
    return mProperty_headerFileName ;
  }

  public: GGS_headerKind mProperty_headerKind ;
  public: inline GGS_headerKind readProperty_headerKind (void) const {
    return mProperty_headerKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeDefinition (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setIsPredefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isPredefined = inValue ;
  }

  public: inline void setter_setIsConcrete (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConcrete = inValue ;
  }

  public: inline void setter_setIsFinal (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isFinal = inValue ;
  }

  public: inline void setter_setSuperType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superType = inValue ;
  }

  public: inline void setter_setTypeKind (const GGS_typeKindEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeKind = inValue ;
  }

  public: inline void setter_setSupportCollectionValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_supportCollectionValue = inValue ;
  }

  public: inline void setter_setAllTypedPropertyList (const GGS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_allTypedPropertyList = inValue ;
  }

  public: inline void setter_setPropertyMap (const GGS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyMap = inValue ;
  }

  public: inline void setter_setCurrentTypedPropertyList (const GGS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_currentTypedPropertyList = inValue ;
  }

  public: inline void setter_setInitializerMap (const GGS_initializerMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initializerMap = inValue ;
  }

  public: inline void setter_setClassFunctionMap (const GGS_classFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classFunctionMap = inValue ;
  }

  public: inline void setter_setGetterMap (const GGS_getterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_getterMap = inValue ;
  }

  public: inline void setter_setSetterMap (const GGS_setterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_setterMap = inValue ;
  }

  public: inline void setter_setInstanceMethodMap (const GGS_instanceMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instanceMethodMap = inValue ;
  }

  public: inline void setter_setClassMethodMap (const GGS_classMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classMethodMap = inValue ;
  }

  public: inline void setter_setUnwrappedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_unwrappedType = inValue ;
  }

  public: inline void setter_setReadSubscriptMap (const GGS_subscriptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_readSubscriptMap = inValue ;
  }

  public: inline void setter_setEnumerationDescriptorList (const GGS_enumerationDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumerationDescriptorList = inValue ;
  }

  public: inline void setter_setFeatures (const GGS_typeFeatures & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_features = inValue ;
  }

  public: inline void setter_setAddAssignOperatorArguments (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_addAssignOperatorArguments = inValue ;
  }

  public: inline void setter_setGenerateHeaderInSeparateFile (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_generateHeaderInSeparateFile = inValue ;
  }

  public: inline void setter_setTypeForEnumeratedElement (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeForEnumeratedElement = inValue ;
  }

  public: inline void setter_setHeaderFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerFileName = inValue ;
  }

  public: inline void setter_setHeaderKind (const GGS_headerKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeDefinition (const GGS_lstring & in_typeName,
                                     const GGS_bool & in_isPredefined,
                                     const GGS_bool & in_isConcrete,
                                     const GGS_bool & in_isFinal,
                                     const GGS_unifiedTypeMapEntry & in_superType,
                                     const GGS_typeKindEnum & in_typeKind,
                                     const GGS_bool & in_supportCollectionValue,
                                     const GGS_typedPropertyList & in_allTypedPropertyList,
                                     const GGS_propertyMap & in_propertyMap,
                                     const GGS_typedPropertyList & in_currentTypedPropertyList,
                                     const GGS_initializerMap & in_initializerMap,
                                     const GGS_classFunctionMap & in_classFunctionMap,
                                     const GGS_getterMap & in_getterMap,
                                     const GGS_setterMap & in_setterMap,
                                     const GGS_instanceMethodMap & in_instanceMethodMap,
                                     const GGS_classMethodMap & in_classMethodMap,
                                     const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                     const GGS_subscriptMap & in_readSubscriptMap,
                                     const GGS_enumerationDescriptorList & in_enumerationDescriptorList,
                                     const GGS_typeFeatures & in_features,
                                     const GGS_functionSignature & in_addAssignOperatorArguments,
                                     const GGS_bool & in_generateHeaderInSeparateFile,
                                     const GGS_unifiedTypeMapEntry & in_typeForEnumeratedElement,
                                     const GGS_string & in_headerFileName,
                                     const GGS_headerKind & in_headerKind) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeDefinition (const GGS_unifiedTypeDefinition & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeDefinition & operator = (const GGS_unifiedTypeDefinition & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeDefinition init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (const class GGS_lstring & inOperand0,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand1,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand2,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand3,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_typeKindEnum & inOperand5,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand6,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_typedPropertyList & inOperand7,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_propertyMap & inOperand8,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_typedPropertyList & inOperand9,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_initializerMap & inOperand10,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_classFunctionMap & inOperand11,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_getterMap & inOperand12,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_setterMap & inOperand13,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_instanceMethodMap & inOperand14,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_classMethodMap & inOperand15,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand16,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_subscriptMap & inOperand17,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_enumerationDescriptorList & inOperand18,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_typeFeatures & inOperand19,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_functionSignature & inOperand20,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand21,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand22,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_string & inOperand23,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_headerKind & inOperand24,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeDefinition extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GGS_unifiedTypeMap & inObject,
                                                                const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDefinition_2E_solved struct
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeDefinition mProperty_definition ;
  public: inline GGS_unifiedTypeDefinition readProperty_definition (void) const {
    return mProperty_definition ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDefinition (const GGS_unifiedTypeDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_definition = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeDefinition_2E_solved (const GGS_unifiedTypeDefinition & in_definition) ;

//--------------------------------- Copy constructor
  public: GGS_typeDefinition_2E_solved (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeDefinition_2E_solved & operator = (const GGS_typeDefinition_2E_solved & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDefinition_2E_solved init_21_ (const class GGS_unifiedTypeDefinition & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition_2E_solved extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeDefinition.solved? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeDefinition_2E_solved mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeDefinition_2E_solved_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeDefinition_2E_solved unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition_2E_solved_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry definition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_definition (const class GGS_unifiedTypeMapEntry & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry identifierRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_identifierRepresentation (const class GGS_unifiedTypeMapEntry & inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_unifiedTypeMapEntry & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_baseType (const class GGS_unifiedTypeMapEntry & inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const class GGS_unifiedTypeMapEntry inObject,
                                        class GGS_stringset & io_ioInclusions,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GGS_unifiedTypeMapEntry inObject,
                                            class GGS_stringset & io_ioInclusions,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_programListForGeneration final {
  public: DownEnumerator_programListForGeneration (const class GGS_programListForGeneration & inList) ;

  public: ~ DownEnumerator_programListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_programListForGeneration (const DownEnumerator_programListForGeneration &) = delete ;
  private: DownEnumerator_programListForGeneration & operator = (const DownEnumerator_programListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_programListForGeneration final {
  public: UpEnumerator_programListForGeneration (const class GGS_programListForGeneration & inList)  ;

  public: ~ UpEnumerator_programListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_programListForGeneration (const UpEnumerator_programListForGeneration &) = delete ;
  private: UpEnumerator_programListForGeneration & operator = (const UpEnumerator_programListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @programListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_programListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_programListForGeneration (void) = default ;

//--- Copy
  public: GGS_programListForGeneration (const GGS_programListForGeneration &) = default ;
  public: GGS_programListForGeneration & operator = (const GGS_programListForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_programListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_programListForGeneration subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_programListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programListForGeneration class_func_listWithValue (const class GGS_semanticDeclarationForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_programListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_semanticDeclarationForGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_programListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_programListForGeneration add_operation (const GGS_programListForGeneration & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticDeclarationForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticDeclarationForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticDeclarationForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_programListForGeneration ;
  friend class DownEnumerator_programListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticDeclarationForGeneration (const class cPtr_semanticDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationForGeneration_init (Compiler * inCompiler) ;


//--- Extension getter appendPrimitiveTypeDeclaration
  public: virtual class GGS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter appendTypeGenericImplementation
  public: virtual class GGS_string getter_appendTypeGenericImplementation (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GGS_string arg_inOutputDirectory,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GGS_string & arg_ioHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GGS_string arg_inProductDirectory,
           class GGS_stringset & arg_ioAllProductFileSet,
           class GGS_stringlist & arg_ioSwiftAppProductFileList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_semanticDeclarationForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GGS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_programListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GGS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_programListForGeneration_2E_element (const GGS_semanticDeclarationForGeneration & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_programListForGeneration_2E_element (const GGS_programListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_programListForGeneration_2E_element & operator = (const GGS_programListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration_2E_element init_21_ (const class GGS_semanticDeclarationForGeneration & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstantList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_localConstantList final {
  public: DownEnumerator_localConstantList (const class GGS_localConstantList & inList) ;

  public: ~ DownEnumerator_localConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mNoWarningIfUnused (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_localConstantList (const DownEnumerator_localConstantList &) = delete ;
  private: DownEnumerator_localConstantList & operator = (const DownEnumerator_localConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_localConstantList final {
  public: UpEnumerator_localConstantList (const class GGS_localConstantList & inList)  ;

  public: ~ UpEnumerator_localConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mNoWarningIfUnused (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_localConstantList (const UpEnumerator_localConstantList &) = delete ;
  private: UpEnumerator_localConstantList & operator = (const UpEnumerator_localConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @localConstantList list
//--------------------------------------------------------------------------------------------------

class GGS_localConstantList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_localConstantList_2E_element> mArray ;

//--- Default constructor
  public: GGS_localConstantList (void) ;

//--- Destructor
  public: virtual ~ GGS_localConstantList (void) = default ;

//--- Copy
  public: GGS_localConstantList (const GGS_localConstantList &) = default ;
  public: GGS_localConstantList & operator = (const GGS_localConstantList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_localConstantList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_localConstantList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_localConstantList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mType,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_bool & in_mNoWarningIfUnused,
                                                 const class GGS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localConstantList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localConstantList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localConstantList class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_string & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_localConstantList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_bool & inOperand2,
                                                    const class GGS_string & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_localConstantList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_localConstantList add_operation (const GGS_localConstantList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_bool constinArgument2,
                                               class GGS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_bool & outArgument2,
                                                class GGS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GGS_string constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNoWarningIfUnusedAtIndex (class GGS_bool constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_bool & outArgument2,
                                              class GGS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_bool & outArgument2,
                                             class GGS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mNoWarningIfUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localConstantList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localConstantList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localConstantList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_localConstantList ;
  friend class DownEnumerator_localConstantList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstantList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_localConstantList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_bool mProperty_mNoWarningIfUnused ;
  public: inline GGS_bool readProperty_mNoWarningIfUnused (void) const {
    return mProperty_mNoWarningIfUnused ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localConstantList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMNoWarningIfUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNoWarningIfUnused = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localConstantList_2E_element (const GGS_unifiedTypeMapEntry & in_mType,
                                            const GGS_lstring & in_mName,
                                            const GGS_bool & in_mNoWarningIfUnused,
                                            const GGS_string & in_mCppName) ;

//--------------------------------- Copy constructor
  public: GGS_localConstantList_2E_element (const GGS_localConstantList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localConstantList_2E_element & operator = (const GGS_localConstantList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localConstantList_2E_element init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_bool & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localConstantList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localInitializedVariableList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_localInitializedVariableList final {
  public: DownEnumerator_localInitializedVariableList (const class GGS_localInitializedVariableList & inList) ;

  public: ~ DownEnumerator_localInitializedVariableList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localInitializedVariableList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localInitializedVariableList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_localInitializedVariableList (const DownEnumerator_localInitializedVariableList &) = delete ;
  private: DownEnumerator_localInitializedVariableList & operator = (const DownEnumerator_localInitializedVariableList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_localInitializedVariableList final {
  public: UpEnumerator_localInitializedVariableList (const class GGS_localInitializedVariableList & inList)  ;

  public: ~ UpEnumerator_localInitializedVariableList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localInitializedVariableList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localInitializedVariableList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_localInitializedVariableList (const UpEnumerator_localInitializedVariableList &) = delete ;
  private: UpEnumerator_localInitializedVariableList & operator = (const UpEnumerator_localInitializedVariableList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @localInitializedVariableList list
//--------------------------------------------------------------------------------------------------

class GGS_localInitializedVariableList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_localInitializedVariableList_2E_element> mArray ;

//--- Default constructor
  public: GGS_localInitializedVariableList (void) ;

//--- Destructor
  public: virtual ~ GGS_localInitializedVariableList (void) = default ;

//--- Copy
  public: GGS_localInitializedVariableList (const GGS_localInitializedVariableList &) = default ;
  public: GGS_localInitializedVariableList & operator = (const GGS_localInitializedVariableList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_localInitializedVariableList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_localInitializedVariableList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mType,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localInitializedVariableList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localInitializedVariableList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localInitializedVariableList class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_localInitializedVariableList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_localInitializedVariableList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_localInitializedVariableList add_operation (const GGS_localInitializedVariableList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GGS_string constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localInitializedVariableList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localInitializedVariableList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localInitializedVariableList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_localInitializedVariableList ;
  friend class DownEnumerator_localInitializedVariableList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localInitializedVariableList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_localInitializedVariableList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localInitializedVariableList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localInitializedVariableList_2E_element (const GGS_unifiedTypeMapEntry & in_mType,
                                                       const GGS_lstring & in_mName,
                                                       const GGS_string & in_mCppName) ;

//--------------------------------- Copy constructor
  public: GGS_localInitializedVariableList_2E_element (const GGS_localInitializedVariableList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localInitializedVariableList_2E_element & operator = (const GGS_localInitializedVariableList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localInitializedVariableList_2E_element init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localInitializedVariableList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_correspondingEffectiveParameterString (const class GGS_formalArgumentPassingModeAST & inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControlAST_2E_fileprivateAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControlAST_2E_fileprivateAccess & operator = (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControlAST_2E_fileprivateAccess init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateAccess extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControlAST.fileprivateAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControlAST_2E_fileprivateAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControlAST_2E_fileprivateAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControlAST_2E_fileprivateAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControlAST_2E_fileprivateAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateAccess_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControlAST_2E_fileprivateSetAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControlAST_2E_fileprivateSetAccess & operator = (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControlAST.fileprivateSetAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControlAST_2E_fileprivateSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControlAST_2E_fileprivateSetAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@AccessControlAST accessControl' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl extensionGetter_accessControl (const class GGS_AccessControlAST & inObject,
                                                       const class GGS_unifiedTypeMapEntry & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum selfAvailability
//--------------------------------------------------------------------------------------------------

class GGS_selfAvailability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_selfAvailability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_available
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_available (class GGS_unifiedTypeMapEntry & out_type,
                                                                  class GGS_selfMutability & out_selfMutability) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAvailability extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfAvailability class_func_available (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_selfMutability & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_selfAvailability class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractAvailable (class GGS_unifiedTypeMapEntry & outArgument0,
                                                         class GGS_selfMutability & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_selfAvailability_2E_available_3F_ getter_getAvailable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAvailable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability ;

//--------------------------------------------------------------------------------------------------
//   enum selfMutability
//--------------------------------------------------------------------------------------------------

class GGS_selfMutability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_selfMutability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_propertiesAreMutableSelfIsNot,
    enum_selfAndPropertiesAreMutable,
    enum_initializer
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfMutability extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfMutability class_func_initializer (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_none (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_propertiesAreMutableSelfIsNot (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_selfAndPropertiesAreMutable (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfMutability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInitializer (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPropertiesAreMutableSelfIsNot (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfAndPropertiesAreMutable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMutability ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location sourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_sourceFile (const class GGS_location & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalDropInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalDropInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalDropInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalDropInstructionAST_2E_weak (const class GGS_lexicalDropInstructionAST & inSource) ;

  public: GGS_lexicalDropInstructionAST_2E_weak & operator = (const class GGS_lexicalDropInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalDropInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalDropInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalDropInstructionAST bang_lexicalDropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalDropInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalDropInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalDropInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalDropInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                            const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                     const class GGS_string constin_inScannerClassName,
                                                                     const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const class cPtr_lexicalInstructionAST * inObject,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalRuleCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyIndexMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyIndexMap final {

  public: DownEnumerator_propertyIndexMap (const class GGS_propertyIndexMap & inMap) ;

  public: ~ DownEnumerator_propertyIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;

  public: class GGS_propertyIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyIndexMap (const DownEnumerator_propertyIndexMap &) = delete ;
  private: DownEnumerator_propertyIndexMap & operator = (const DownEnumerator_propertyIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyIndexMap final {
  public: UpEnumerator_propertyIndexMap (const class GGS_propertyIndexMap & inMap)  ;

  public: ~ UpEnumerator_propertyIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_propertyIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyIndexMap (const UpEnumerator_propertyIndexMap &) = delete ;
  private: UpEnumerator_propertyIndexMap & operator = (const UpEnumerator_propertyIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertyIndexMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertyIndexMap (void) ;

//--- Handle copy
  public: GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) ;
  public: GGS_propertyIndexMap & operator = (const GGS_propertyIndexMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_propertyIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyIndexMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyIndexMap class_func_mapWithMapToOverride (const class GGS_propertyIndexMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeIndexForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                                    class GGS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mPropertyTypeIndexForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertyIndexMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyIndexMap ;
  friend class DownEnumerator_propertyIndexMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyIndexMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mPropertyTypeIndex ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mPropertyTypeIndex (void) const {
    return mProperty_mPropertyTypeIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyIndexMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMPropertyTypeIndex (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyIndexMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_unifiedTypeMapEntry & in_mPropertyTypeIndex) ;

//--------------------------------- Copy constructor
  public: GGS_propertyIndexMap_2E_element (const GGS_propertyIndexMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyIndexMap_2E_element & operator = (const GGS_propertyIndexMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyIndexMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyIndexMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyIndexMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyIndexMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyIndexMap_2E_element_3F_ (const GGS_propertyIndexMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyIndexMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyIndexMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalLabelMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonterminalLabelMap final {

  public: DownEnumerator_nonterminalLabelMap (const class GGS_nonterminalLabelMap & inMap) ;

  public: ~ DownEnumerator_nonterminalLabelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;

  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public: class GGS_nonterminalLabelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonterminalLabelMap (const DownEnumerator_nonterminalLabelMap &) = delete ;
  private: DownEnumerator_nonterminalLabelMap & operator = (const DownEnumerator_nonterminalLabelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonterminalLabelMap final {
  public: UpEnumerator_nonterminalLabelMap (const class GGS_nonterminalLabelMap & inMap)  ;

  public: ~ UpEnumerator_nonterminalLabelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_nonterminalLabelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonterminalLabelMap (const UpEnumerator_nonterminalLabelMap &) = delete ;
  private: UpEnumerator_nonterminalLabelMap & operator = (const UpEnumerator_nonterminalLabelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonterminalLabelMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_nonterminalLabelMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_nonterminalLabelMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_nonterminalLabelMap (void) ;

//--- Handle copy
  public: GGS_nonterminalLabelMap (const GGS_nonterminalLabelMap & inSource) ;
  public: GGS_nonterminalLabelMap & operator = (const GGS_nonterminalLabelMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_nonterminalLabelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalLabelMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalLabelMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalLabelMap class_func_mapWithMapToOverride (const class GGS_nonterminalLabelMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterListForGeneration constinArgument1,
                                                  class GGS_formalParameterSignature constinArgument2,
                                                  class GGS_location constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationForKey (class GGS_location constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForGenerationForKey (class GGS_formalParameterListForGeneration constinArgument0,
                                                                         class GGS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GGS_formalParameterSignature constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterListForGeneration & outArgument1,
                                                  class GGS_formalParameterSignature & outArgument2,
                                                  class GGS_location & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfArgumentLocationForKey (const class GGS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListForGeneration getter_mSignatureForGenerationForKey (const class GGS_string & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterSignature getter_mSignatureForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalLabelMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_nonterminalLabelMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonterminalLabelMap ;
  friend class DownEnumerator_nonterminalLabelMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalLabelMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalLabelMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GGS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GGS_formalParameterSignature mProperty_mSignature ;
  public: inline GGS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonterminalLabelMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GGS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalLabelMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                              const GGS_formalParameterSignature & in_mSignature,
                                              const GGS_location & in_mEndOfArgumentLocation) ;

//--------------------------------- Copy constructor
  public: GGS_nonterminalLabelMap_2E_element (const GGS_nonterminalLabelMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonterminalLabelMap_2E_element & operator = (const GGS_nonterminalLabelMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalLabelMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_formalParameterListForGeneration & inOperand1,
                                                                          const class GGS_formalParameterSignature & inOperand2,
                                                                          const class GGS_location & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalLabelMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonterminalLabelMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalLabelMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_nonterminalLabelMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_nonterminalLabelMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_nonterminalLabelMap_2E_element_3F_ (const GGS_nonterminalLabelMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_nonterminalLabelMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_nonterminalLabelMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalLabelMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonterminalMap final {

  public: DownEnumerator_nonterminalMap (const class GGS_nonterminalMap & inMap) ;

  public: ~ DownEnumerator_nonterminalMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_nonterminalLabelMap current_mLabelMap (LOCATION_ARGS) const ;

  public: class GGS_nonterminalMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonterminalMap (const DownEnumerator_nonterminalMap &) = delete ;
  private: DownEnumerator_nonterminalMap & operator = (const DownEnumerator_nonterminalMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonterminalMap final {
  public: UpEnumerator_nonterminalMap (const class GGS_nonterminalMap & inMap)  ;

  public: ~ UpEnumerator_nonterminalMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_nonterminalLabelMap current_mLabelMap (LOCATION_ARGS) const ;
  public: class GGS_nonterminalMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonterminalMap (const UpEnumerator_nonterminalMap &) = delete ;
  private: UpEnumerator_nonterminalMap & operator = (const UpEnumerator_nonterminalMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonterminalMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_nonterminalMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_nonterminalMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_nonterminalMap (void) ;

//--- Handle copy
  public: GGS_nonterminalMap (const GGS_nonterminalMap & inSource) ;
  public: GGS_nonterminalMap & operator = (const GGS_nonterminalMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_nonterminalMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalMap class_func_mapWithMapToOverride (const class GGS_nonterminalMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_nonterminalLabelMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelMapForKey (class GGS_nonterminalLabelMap constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_nonterminalLabelMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalLabelMap getter_mLabelMapForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_nonterminalMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonterminalMap ;
  friend class DownEnumerator_nonterminalMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_nonterminalLabelMap mProperty_mLabelMap ;
  public: inline GGS_nonterminalLabelMap readProperty_mLabelMap (void) const {
    return mProperty_mLabelMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonterminalMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelMap (const GGS_nonterminalLabelMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_nonterminalLabelMap & in_mLabelMap) ;

//--------------------------------- Copy constructor
  public: GGS_nonterminalMap_2E_element (const GGS_nonterminalMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonterminalMap_2E_element & operator = (const GGS_nonterminalMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_nonterminalLabelMap & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonterminalMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_nonterminalMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_nonterminalMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_nonterminalMap_2E_element_3F_ (const GGS_nonterminalMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_nonterminalMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_nonterminalMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ruleLabelImplementationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ruleLabelImplementationList final {
  public: DownEnumerator_ruleLabelImplementationList (const class GGS_ruleLabelImplementationList & inList) ;

  public: ~ DownEnumerator_ruleLabelImplementationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleLabelImplementationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleLabelImplementationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ruleLabelImplementationList (const DownEnumerator_ruleLabelImplementationList &) = delete ;
  private: DownEnumerator_ruleLabelImplementationList & operator = (const DownEnumerator_ruleLabelImplementationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ruleLabelImplementationList final {
  public: UpEnumerator_ruleLabelImplementationList (const class GGS_ruleLabelImplementationList & inList)  ;

  public: ~ UpEnumerator_ruleLabelImplementationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleLabelImplementationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleLabelImplementationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ruleLabelImplementationList (const UpEnumerator_ruleLabelImplementationList &) = delete ;
  private: UpEnumerator_ruleLabelImplementationList & operator = (const UpEnumerator_ruleLabelImplementationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ruleLabelImplementationList list
//--------------------------------------------------------------------------------------------------

class GGS_ruleLabelImplementationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ruleLabelImplementationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ruleLabelImplementationList (void) ;

//--- Destructor
  public: virtual ~ GGS_ruleLabelImplementationList (void) = default ;

//--- Copy
  public: GGS_ruleLabelImplementationList (const GGS_ruleLabelImplementationList &) = default ;
  public: GGS_ruleLabelImplementationList & operator = (const GGS_ruleLabelImplementationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_ruleLabelImplementationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ruleLabelImplementationList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLabelName,
                                                 const class GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                 const class GGS_formalParameterSignature & in_mSignature,
                                                 const class GGS_location & in_mEndOfArgumentLocation,
                                                 const class GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleLabelImplementationList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleLabelImplementationList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ruleLabelImplementationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_formalParameterListForGeneration & inOperand1,
                                                                                 const class GGS_formalParameterSignature & inOperand2,
                                                                                 const class GGS_location & inOperand3,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ruleLabelImplementationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_formalParameterListForGeneration & inOperand1,
                                                    const class GGS_formalParameterSignature & inOperand2,
                                                    const class GGS_location & inOperand3,
                                                    const class GGS_semanticInstructionListForGeneration & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ruleLabelImplementationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ruleLabelImplementationList add_operation (const GGS_ruleLabelImplementationList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_formalParameterListForGeneration constinArgument1,
                                               class GGS_formalParameterSignature constinArgument2,
                                               class GGS_location constinArgument3,
                                               class GGS_semanticInstructionListForGeneration constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_formalParameterListForGeneration constinArgument1,
                                                      class GGS_formalParameterSignature constinArgument2,
                                                      class GGS_location constinArgument3,
                                                      class GGS_semanticInstructionListForGeneration constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_formalParameterListForGeneration & outArgument1,
                                                 class GGS_formalParameterSignature & outArgument2,
                                                 class GGS_location & outArgument3,
                                                 class GGS_semanticInstructionListForGeneration & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_formalParameterListForGeneration & outArgument1,
                                                class GGS_formalParameterSignature & outArgument2,
                                                class GGS_location & outArgument3,
                                                class GGS_semanticInstructionListForGeneration & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_formalParameterListForGeneration & outArgument1,
                                                      class GGS_formalParameterSignature & outArgument2,
                                                      class GGS_location & outArgument3,
                                                      class GGS_semanticInstructionListForGeneration & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GGS_location constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForGenerationAtIndex (class GGS_semanticInstructionListForGeneration constinArgument0,
                                                                                class GGS_uint constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureAtIndex (class GGS_formalParameterSignature constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForGenerationAtIndex (class GGS_formalParameterListForGeneration constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_formalParameterListForGeneration & outArgument1,
                                              class GGS_formalParameterSignature & outArgument2,
                                              class GGS_location & outArgument3,
                                              class GGS_semanticInstructionListForGeneration & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_formalParameterListForGeneration & outArgument1,
                                             class GGS_formalParameterSignature & outArgument2,
                                             class GGS_location & outArgument3,
                                             class GGS_semanticInstructionListForGeneration & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfArgumentLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_mInstructionListForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLabelNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterSignature getter_mSignatureAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListForGeneration getter_mSignatureForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ruleLabelImplementationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ruleLabelImplementationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ruleLabelImplementationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ruleLabelImplementationList ;
  friend class DownEnumerator_ruleLabelImplementationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ruleLabelImplementationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ruleLabelImplementationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLabelName ;
  public: inline GGS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GGS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GGS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GGS_formalParameterSignature mProperty_mSignature ;
  public: inline GGS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GGS_semanticInstructionListForGeneration mProperty_mInstructionListForGeneration ;
  public: inline GGS_semanticInstructionListForGeneration readProperty_mInstructionListForGeneration (void) const {
    return mProperty_mInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ruleLabelImplementationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GGS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionListForGeneration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ruleLabelImplementationList_2E_element (const GGS_lstring & in_mLabelName,
                                                      const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                      const GGS_formalParameterSignature & in_mSignature,
                                                      const GGS_location & in_mEndOfArgumentLocation,
                                                      const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration) ;

//--------------------------------- Copy constructor
  public: GGS_ruleLabelImplementationList_2E_element (const GGS_ruleLabelImplementationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ruleLabelImplementationList_2E_element & operator = (const GGS_ruleLabelImplementationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleLabelImplementationList_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_formalParameterListForGeneration & inOperand1,
                                                                                      const class GGS_formalParameterSignature & inOperand2,
                                                                                      const class GGS_location & inOperand3,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleLabelImplementationList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ruleDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ruleDeclarationList final {
  public: DownEnumerator_ruleDeclarationList (const class GGS_ruleDeclarationList & inList) ;

  public: ~ DownEnumerator_ruleDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public: class GGS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ruleDeclarationList (const DownEnumerator_ruleDeclarationList &) = delete ;
  private: DownEnumerator_ruleDeclarationList & operator = (const DownEnumerator_ruleDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ruleDeclarationList final {
  public: UpEnumerator_ruleDeclarationList (const class GGS_ruleDeclarationList & inList)  ;

  public: ~ UpEnumerator_ruleDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public: class GGS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ruleDeclarationList (const UpEnumerator_ruleDeclarationList &) = delete ;
  private: UpEnumerator_ruleDeclarationList & operator = (const UpEnumerator_ruleDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ruleDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_ruleDeclarationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ruleDeclarationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ruleDeclarationList (void) ;

//--- Destructor
  public: virtual ~ GGS_ruleDeclarationList (void) = default ;

//--- Copy
  public: GGS_ruleDeclarationList (const GGS_ruleDeclarationList &) = default ;
  public: GGS_ruleDeclarationList & operator = (const GGS_ruleDeclarationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_ruleDeclarationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ruleDeclarationList subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mNonterminalName,
                                                 const class GGS_uint & in_mRuleIndex,
                                                 const class GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleDeclarationList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleDeclarationList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ruleDeclarationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                         const class GGS_uint & inOperand1,
                                                                         const class GGS_ruleLabelImplementationList & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ruleDeclarationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_uint & inOperand1,
                                                    const class GGS_ruleLabelImplementationList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ruleDeclarationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ruleDeclarationList add_operation (const GGS_ruleDeclarationList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_uint constinArgument1,
                                               class GGS_ruleLabelImplementationList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_ruleLabelImplementationList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_ruleLabelImplementationList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_uint & outArgument1,
                                                class GGS_ruleLabelImplementationList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_ruleLabelImplementationList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelImplementationListAtIndex (class GGS_ruleLabelImplementationList constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleIndexAtIndex (class GGS_uint constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_uint & outArgument1,
                                              class GGS_ruleLabelImplementationList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_uint & outArgument1,
                                             class GGS_ruleLabelImplementationList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ruleLabelImplementationList getter_mLabelImplementationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mNonterminalNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRuleIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ruleDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ruleDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ruleDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ruleDeclarationList ;
  friend class DownEnumerator_ruleDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ruleDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ruleDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mNonterminalName ;
  public: inline GGS_string readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GGS_uint mProperty_mRuleIndex ;
  public: inline GGS_uint readProperty_mRuleIndex (void) const {
    return mProperty_mRuleIndex ;
  }

  public: GGS_ruleLabelImplementationList mProperty_mLabelImplementationList ;
  public: inline GGS_ruleLabelImplementationList readProperty_mLabelImplementationList (void) const {
    return mProperty_mLabelImplementationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ruleDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMRuleIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleIndex = inValue ;
  }

  public: inline void setter_setMLabelImplementationList (const GGS_ruleLabelImplementationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelImplementationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ruleDeclarationList_2E_element (const GGS_string & in_mNonterminalName,
                                              const GGS_uint & in_mRuleIndex,
                                              const GGS_ruleLabelImplementationList & in_mLabelImplementationList) ;

//--------------------------------- Copy constructor
  public: GGS_ruleDeclarationList_2E_element (const GGS_ruleDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ruleDeclarationList_2E_element & operator = (const GGS_ruleDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleDeclarationList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      const class GGS_ruleLabelImplementationList & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleDeclarationList_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (class cPtr_abstractInputParameter * inObject,
                                                const class GGS_analysisContext constin_inAnalysisContext,
                                                class GGS_unifiedTypeMap & io_ioTypeMap,
                                                const class GGS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const class GGS_string constin_inLexicalAttributeName,
                                                class GGS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                class GGS_localVarManager & io_ioVariableMap,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckAssignementList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalCheckAssignementList final {
  public: DownEnumerator_terminalCheckAssignementList (const class GGS_terminalCheckAssignementList & inList) ;

  public: ~ DownEnumerator_terminalCheckAssignementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetVarCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSourceLexicalAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalCheckAssignementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_terminalCheckAssignementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalCheckAssignementList (const DownEnumerator_terminalCheckAssignementList &) = delete ;
  private: DownEnumerator_terminalCheckAssignementList & operator = (const DownEnumerator_terminalCheckAssignementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalCheckAssignementList final {
  public: UpEnumerator_terminalCheckAssignementList (const class GGS_terminalCheckAssignementList & inList)  ;

  public: ~ UpEnumerator_terminalCheckAssignementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetVarCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSourceLexicalAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalCheckAssignementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_terminalCheckAssignementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalCheckAssignementList (const UpEnumerator_terminalCheckAssignementList &) = delete ;
  private: UpEnumerator_terminalCheckAssignementList & operator = (const UpEnumerator_terminalCheckAssignementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @terminalCheckAssignementList list
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckAssignementList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_terminalCheckAssignementList_2E_element> mArray ;

//--- Default constructor
  public: GGS_terminalCheckAssignementList (void) ;

//--- Destructor
  public: virtual ~ GGS_terminalCheckAssignementList (void) = default ;

//--- Copy
  public: GGS_terminalCheckAssignementList (const GGS_terminalCheckAssignementList &) = default ;
  public: GGS_terminalCheckAssignementList & operator = (const GGS_terminalCheckAssignementList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_terminalCheckAssignementList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_terminalCheckAssignementList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_terminalCheckAssignementList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTypeName,
                                                 const class GGS_string & in_mTargetVarCppName,
                                                 const class GGS_string & in_mSourceLexicalAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalCheckAssignementList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalCheckAssignementList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalCheckAssignementList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_terminalCheckAssignementList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_terminalCheckAssignementList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_terminalCheckAssignementList add_operation (const GGS_terminalCheckAssignementList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceLexicalAttributeNameAtIndex (class GGS_string constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetVarCppNameAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSourceLexicalAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetVarCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalCheckAssignementList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalCheckAssignementList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalCheckAssignementList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalCheckAssignementList ;
  friend class DownEnumerator_terminalCheckAssignementList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @analysisContext struct
//--------------------------------------------------------------------------------------------------

class GGS_analysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticContext mProperty_semanticContext ;
  public: inline GGS_semanticContext readProperty_semanticContext (void) const {
    return mProperty_semanticContext ;
  }

  public: GGS_predefinedTypes mProperty_predefinedTypes ;
  public: inline GGS_predefinedTypes readProperty_predefinedTypes (void) const {
    return mProperty_predefinedTypes ;
  }

  public: GGS_string mProperty_selfObjectCppName ;
  public: inline GGS_string readProperty_selfObjectCppName (void) const {
    return mProperty_selfObjectCppName ;
  }

  public: GGS_selfAvailability mProperty_selfAvailability ;
  public: inline GGS_selfAvailability readProperty_selfAvailability (void) const {
    return mProperty_selfAvailability ;
  }

  public: GGS_string mProperty_selfObjectCppPrefixForAccessingProperty ;
  public: inline GGS_string readProperty_selfObjectCppPrefixForAccessingProperty (void) const {
    return mProperty_selfObjectCppPrefixForAccessingProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_analysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSemanticContext (const GGS_semanticContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_semanticContext = inValue ;
  }

  public: inline void setter_setPredefinedTypes (const GGS_predefinedTypes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_predefinedTypes = inValue ;
  }

  public: inline void setter_setSelfObjectCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppName = inValue ;
  }

  public: inline void setter_setSelfAvailability (const GGS_selfAvailability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfAvailability = inValue ;
  }

  public: inline void setter_setSelfObjectCppPrefixForAccessingProperty (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppPrefixForAccessingProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_analysisContext (const GGS_semanticContext & in_semanticContext,
                               const GGS_predefinedTypes & in_predefinedTypes,
                               const GGS_string & in_selfObjectCppName,
                               const GGS_selfAvailability & in_selfAvailability,
                               const GGS_string & in_selfObjectCppPrefixForAccessingProperty) ;

//--------------------------------- Copy constructor
  public: GGS_analysisContext (const GGS_analysisContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_analysisContext & operator = (const GGS_analysisContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_analysisContext init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (const class GGS_semanticContext & inOperand0,
                                                                                                                                       const class GGS_predefinedTypes & inOperand1,
                                                                                                                                       const class GGS_string & inOperand2,
                                                                                                                                       const class GGS_selfAvailability & inOperand3,
                                                                                                                                       const class GGS_string & inOperand4,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_analysisContext extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_analysisContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @openedOverrideList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_openedOverrideList final {
  public: DownEnumerator_openedOverrideList (const class GGS_openedOverrideList & inList) ;

  public: ~ DownEnumerator_openedOverrideList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_overrideKind current_mOverrideKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_openedOverrideList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_openedOverrideList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_openedOverrideList (const DownEnumerator_openedOverrideList &) = delete ;
  private: DownEnumerator_openedOverrideList & operator = (const DownEnumerator_openedOverrideList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_openedOverrideList final {
  public: UpEnumerator_openedOverrideList (const class GGS_openedOverrideList & inList)  ;

  public: ~ UpEnumerator_openedOverrideList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_overrideKind current_mOverrideKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_openedOverrideList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_openedOverrideList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_openedOverrideList (const UpEnumerator_openedOverrideList &) = delete ;
  private: UpEnumerator_openedOverrideList & operator = (const UpEnumerator_openedOverrideList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @openedOverrideList list
//--------------------------------------------------------------------------------------------------

class GGS_openedOverrideList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_openedOverrideList_2E_element> mArray ;

//--- Default constructor
  public: GGS_openedOverrideList (void) ;

//--- Destructor
  public: virtual ~ GGS_openedOverrideList (void) = default ;

//--- Copy
  public: GGS_openedOverrideList (const GGS_openedOverrideList &) = default ;
  public: GGS_openedOverrideList & operator = (const GGS_openedOverrideList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_openedOverrideList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_openedOverrideList subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_openedOverrideList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_overrideKind & in_mOverrideKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_openedOverrideList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_openedOverrideList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_openedOverrideList class_func_listWithValue (const class GGS_overrideKind & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_openedOverrideList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_overrideKind & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_openedOverrideList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_openedOverrideList add_operation (const GGS_openedOverrideList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_overrideKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_overrideKind constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_overrideKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_overrideKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_overrideKind & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverrideKindAtIndex (class GGS_overrideKind constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_overrideKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_overrideKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_overrideKind getter_mOverrideKindAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_openedOverrideList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_openedOverrideList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_openedOverrideList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_openedOverrideList ;
  friend class DownEnumerator_openedOverrideList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedOverrideList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVarMapListForLLVM list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_localVarMapListForLLVM final {
  public: DownEnumerator_localVarMapListForLLVM (const class GGS_localVarMapListForLLVM & inList) ;

  public: ~ DownEnumerator_localVarMapListForLLVM (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_scopeLocalVarMap current_mMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localVarMapListForLLVM_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localVarMapListForLLVM_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_localVarMapListForLLVM (const DownEnumerator_localVarMapListForLLVM &) = delete ;
  private: DownEnumerator_localVarMapListForLLVM & operator = (const DownEnumerator_localVarMapListForLLVM &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_localVarMapListForLLVM final {
  public: UpEnumerator_localVarMapListForLLVM (const class GGS_localVarMapListForLLVM & inList)  ;

  public: ~ UpEnumerator_localVarMapListForLLVM (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_scopeLocalVarMap current_mMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localVarMapListForLLVM_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localVarMapListForLLVM_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_localVarMapListForLLVM (const UpEnumerator_localVarMapListForLLVM &) = delete ;
  private: UpEnumerator_localVarMapListForLLVM & operator = (const UpEnumerator_localVarMapListForLLVM &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @localVarMapListForLLVM list
//--------------------------------------------------------------------------------------------------

class GGS_localVarMapListForLLVM : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_localVarMapListForLLVM_2E_element> mArray ;

//--- Default constructor
  public: GGS_localVarMapListForLLVM (void) ;

//--- Destructor
  public: virtual ~ GGS_localVarMapListForLLVM (void) = default ;

//--- Copy
  public: GGS_localVarMapListForLLVM (const GGS_localVarMapListForLLVM &) = default ;
  public: GGS_localVarMapListForLLVM & operator = (const GGS_localVarMapListForLLVM &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_localVarMapListForLLVM_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_localVarMapListForLLVM subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_localVarMapListForLLVM (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_scopeLocalVarMap & in_mMap
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarMapListForLLVM init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVarMapListForLLVM extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVarMapListForLLVM class_func_listWithValue (const class GGS_scopeLocalVarMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_localVarMapListForLLVM inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_scopeLocalVarMap & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_localVarMapListForLLVM_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_localVarMapListForLLVM add_operation (const GGS_localVarMapListForLLVM & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_scopeLocalVarMap constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_scopeLocalVarMap constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_scopeLocalVarMap & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_scopeLocalVarMap & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_scopeLocalVarMap & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapAtIndex (class GGS_scopeLocalVarMap constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_scopeLocalVarMap & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_scopeLocalVarMap & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_scopeLocalVarMap getter_mMapAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarMapListForLLVM getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarMapListForLLVM getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarMapListForLLVM getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_localVarMapListForLLVM ;
  friend class DownEnumerator_localVarMapListForLLVM ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeLocalVarMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_scopeLocalVarMap final {

  public: DownEnumerator_scopeLocalVarMap (const class GGS_scopeLocalVarMap & inMap) ;

  public: ~ DownEnumerator_scopeLocalVarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;

  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;

  public: class GGS_string current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;

  public: class GGS_localVariableAttributes current_mAttributes (LOCATION_ARGS) const ;

  public: class GGS_localVarValuation current_mState (LOCATION_ARGS) const ;

  public: class GGS_scopeLocalVarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_scopeLocalVarMap (const DownEnumerator_scopeLocalVarMap &) = delete ;
  private: DownEnumerator_scopeLocalVarMap & operator = (const DownEnumerator_scopeLocalVarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_scopeLocalVarMap final {
  public: UpEnumerator_scopeLocalVarMap (const class GGS_scopeLocalVarMap & inMap)  ;

  public: ~ UpEnumerator_scopeLocalVarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
  public: class GGS_localVariableAttributes current_mAttributes (LOCATION_ARGS) const ;
  public: class GGS_localVarValuation current_mState (LOCATION_ARGS) const ;
  public: class GGS_scopeLocalVarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_scopeLocalVarMap (const UpEnumerator_scopeLocalVarMap &) = delete ;
  private: UpEnumerator_scopeLocalVarMap & operator = (const UpEnumerator_scopeLocalVarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_scopeLocalVarMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_scopeLocalVarMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_scopeLocalVarMap (void) ;

//--- Handle copy
  public: GGS_scopeLocalVarMap (const GGS_scopeLocalVarMap & inSource) ;
  public: GGS_scopeLocalVarMap & operator = (const GGS_scopeLocalVarMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_scopeLocalVarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeLocalVarMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_scopeLocalVarMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_scopeLocalVarMap class_func_mapWithMapToOverride (const class GGS_scopeLocalVarMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry constinArgument1,
                                                  class GGS_string constinArgument2,
                                                  class GGS_string constinArgument3,
                                                  class GGS_localVariableAttributes constinArgument4,
                                                  class GGS_localVarValuation constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry & outArgument1,
                                                  class GGS_string & outArgument2,
                                                  class GGS_string & outArgument3,
                                                  class GGS_localVariableAttributes & outArgument4,
                                                  class GGS_localVarValuation & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributesForKey (class GGS_localVariableAttributes constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameForKey (class GGS_string constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameForCheckingFormalParameterUsingForKey (class GGS_string constinArgument0,
                                                                                      class GGS_string constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateForKey (class GGS_localVarValuation constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry & outArgument1,
                                                  class GGS_string & outArgument2,
                                                  class GGS_string & outArgument3,
                                                  class GGS_localVariableAttributes & outArgument4,
                                                  class GGS_localVarValuation & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVariableAttributes getter_mAttributesForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCppNameForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mNameForCheckingFormalParameterUsingForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localVarValuation getter_mStateForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_scopeLocalVarMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_scopeLocalVarMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_scopeLocalVarMap ;
  friend class DownEnumerator_scopeLocalVarMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @currentVarManager struct
//--------------------------------------------------------------------------------------------------

class GGS_currentVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_scopeLocalVarMap mProperty_mLocalVarMap ;
  public: inline GGS_scopeLocalVarMap readProperty_mLocalVarMap (void) const {
    return mProperty_mLocalVarMap ;
  }

  public: GGS_localVarMapListForLLVM mProperty_mSubMaps ;
  public: inline GGS_localVarMapListForLLVM readProperty_mSubMaps (void) const {
    return mProperty_mSubMaps ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_currentVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLocalVarMap (const GGS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocalVarMap = inValue ;
  }

  public: inline void setter_setMSubMaps (const GGS_localVarMapListForLLVM & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSubMaps = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_currentVarManager (const GGS_scopeLocalVarMap & in_mLocalVarMap,
                                 const GGS_localVarMapListForLLVM & in_mSubMaps) ;

//--------------------------------- Copy constructor
  public: GGS_currentVarManager (const GGS_currentVarManager & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_currentVarManager & operator = (const GGS_currentVarManager & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_currentVarManager init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_currentVarManager extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_currentVarManager ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVarManager struct
//--------------------------------------------------------------------------------------------------

class GGS_localVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_currentVarManager mProperty_mCurrentManager ;
  public: inline GGS_currentVarManager readProperty_mCurrentManager (void) const {
    return mProperty_mCurrentManager ;
  }

  public: GGS_openedOverrideList mProperty_mOverridenManagers ;
  public: inline GGS_openedOverrideList readProperty_mOverridenManagers (void) const {
    return mProperty_mOverridenManagers ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCurrentManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCurrentManager = inValue ;
  }

  public: inline void setter_setMOverridenManagers (const GGS_openedOverrideList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverridenManagers = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarManager (const GGS_currentVarManager & in_mCurrentManager,
                               const GGS_openedOverrideList & in_mOverridenManagers) ;

//--------------------------------- Copy constructor
  public: GGS_localVarManager (const GGS_localVarManager & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localVarManager & operator = (const GGS_localVarManager & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarManager init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVarManager extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarManager ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const class GGS_analysisContext constin_inAnalysisContext,
                                     class GGS_unifiedTypeMap & io_ioTypeMap,
                                     const class GGS_bool constin_inHasTranslateFeature,
                                     class GGS_localVarManager & io_ioVariableMap,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const class GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const class GGS_string constin_inAccessMethodName,
                                       class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                       class GGS_string & io_ioGeneratedCode,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE jsonScanner
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_jsonScanner : public cToken {
  public: BigSigned mLexicalAttribute_bigintValue ;
  public: utf32 mLexicalAttribute_charValue ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_jsonScanner (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_jsonScanner : public Lexique {
//--- Constructors
  public: Lexique_jsonScanner (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_jsonScanner (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_jsonScanner (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken__22_string_22_ = 1 ;
  public: static const int32_t kToken_integer = 2 ;
  public: static const int32_t kToken__5B_ = 3 ;
  public: static const int32_t kToken__5D_ = 4 ;
  public: static const int32_t kToken__7B_ = 5 ;
  public: static const int32_t kToken__7D_ = 6 ;
  public: static const int32_t kToken__3A_ = 7 ;
  public: static const int32_t kToken__2C_ = 8 ;
  public: static const int32_t kToken_false = 9 ;
  public: static const int32_t kToken_null = 10 ;
  public: static const int32_t kToken_true = 11 ;

//--- Key words table 'delimiterList'
  public: static int32_t search_into_delimiterList (const String & inSearchedString) ;

//--- Key words table 'reservedWordList'
  public: static int32_t search_into_reservedWordList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: BigSigned attributeValue_bigintValue (void) const ;
  public: utf32 attributeValue_charValue (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_jsonScanner & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 11 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_jsonScanner & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//   enum jsonValue
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_jsonValue (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_jsonNull,
    enum_jsonTrue,
    enum_jsonFalse,
    enum_jsonObject,
    enum_jsonArray,
    enum_jsonInteger,
    enum_jsonString
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_jsonObject (class GGS_jsonObjectValue & out_objectValue) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_jsonArray (class GGS_jsonArrayValue & out_arrayValue) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_jsonInteger (class GGS_bigint & out_integerValue) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_jsonString (class GGS_string & out_stringValue) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_jsonValue class_func_jsonArray (const class GGS_jsonArrayValue & inOperand0
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_jsonValue class_func_jsonFalse (LOCATION_ARGS) ;

  public: static class GGS_jsonValue class_func_jsonInteger (const class GGS_bigint & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_jsonValue class_func_jsonNull (LOCATION_ARGS) ;

  public: static class GGS_jsonValue class_func_jsonObject (const class GGS_jsonObjectValue & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_jsonValue class_func_jsonString (const class GGS_string & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_jsonValue class_func_jsonTrue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractJsonArray (class GGS_jsonArrayValue & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractJsonInteger (class GGS_bigint & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractJsonObject (class GGS_jsonObjectValue & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractJsonString (class GGS_string & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_jsonValue_2E_jsonArray_3F_ getter_getJsonArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonValue_2E_jsonInteger_3F_ getter_getJsonInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonValue_2E_jsonObject_3F_ getter_getJsonObject (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonValue_2E_jsonString_3F_ getter_getJsonString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isJsonArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isJsonFalse (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isJsonInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isJsonNull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isJsonObject (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isJsonString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isJsonTrue (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonArrayValue list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_jsonArrayValue final {
  public: DownEnumerator_jsonArrayValue (const class GGS_jsonArrayValue & inList) ;

  public: ~ DownEnumerator_jsonArrayValue (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_jsonValue current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_jsonArrayValue_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_jsonArrayValue_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_jsonArrayValue (const DownEnumerator_jsonArrayValue &) = delete ;
  private: DownEnumerator_jsonArrayValue & operator = (const DownEnumerator_jsonArrayValue &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_jsonArrayValue final {
  public: UpEnumerator_jsonArrayValue (const class GGS_jsonArrayValue & inList)  ;

  public: ~ UpEnumerator_jsonArrayValue (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_jsonValue current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_jsonArrayValue_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_jsonArrayValue_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_jsonArrayValue (const UpEnumerator_jsonArrayValue &) = delete ;
  private: UpEnumerator_jsonArrayValue & operator = (const UpEnumerator_jsonArrayValue &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @jsonArrayValue list
//--------------------------------------------------------------------------------------------------

class GGS_jsonArrayValue : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_jsonArrayValue_2E_element> mArray ;

//--- Default constructor
  public: GGS_jsonArrayValue (void) ;

//--- Destructor
  public: virtual ~ GGS_jsonArrayValue (void) = default ;

//--- Copy
  public: GGS_jsonArrayValue (const GGS_jsonArrayValue &) = default ;
  public: GGS_jsonArrayValue & operator = (const GGS_jsonArrayValue &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_jsonArrayValue_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_jsonArrayValue subList (const int32_t inStart,
                                       const int32_t inLength,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_jsonArrayValue (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_jsonValue & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonArrayValue init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonArrayValue extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_jsonArrayValue class_func_listWithValue (const class GGS_jsonValue & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_jsonArrayValue inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_jsonValue & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_jsonArrayValue_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_jsonArrayValue add_operation (const GGS_jsonArrayValue & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_jsonValue constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_jsonValue constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_jsonValue & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_jsonValue & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_jsonValue & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_jsonValue constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_jsonValue & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_jsonValue & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonValue getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonArrayValue getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonArrayValue getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonArrayValue getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_jsonArrayValue ;
  friend class DownEnumerator_jsonArrayValue ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonArrayValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonValue_2E_jsonArray struct
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonArray : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_jsonArrayValue mProperty_arrayValue ;
  public: inline GGS_jsonArrayValue readProperty_arrayValue (void) const {
    return mProperty_arrayValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonArray (void) ;

//--------------------------------- Property setters
  public: inline void setter_setArrayValue (const GGS_jsonArrayValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arrayValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_jsonValue_2E_jsonArray (const GGS_jsonArrayValue & in_arrayValue) ;

//--------------------------------- Copy constructor
  public: GGS_jsonValue_2E_jsonArray (const GGS_jsonValue_2E_jsonArray & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_jsonValue_2E_jsonArray & operator = (const GGS_jsonValue_2E_jsonArray & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonValue_2E_jsonArray init_21_ (const class GGS_jsonArrayValue & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonArray extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonArray ;

//--------------------------------------------------------------------------------------------------
// Phase 1: jsonValue.jsonArray? optional
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonArray_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_jsonValue_2E_jsonArray mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonArray_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_jsonValue_2E_jsonArray_3F_ (const GGS_jsonValue_2E_jsonArray & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_jsonValue_2E_jsonArray_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_jsonValue_2E_jsonArray unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonArray_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonArray_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonValue_2E_jsonInteger struct
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonInteger : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_integerValue ;
  public: inline GGS_bigint readProperty_integerValue (void) const {
    return mProperty_integerValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonInteger (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIntegerValue (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_integerValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_jsonValue_2E_jsonInteger (const GGS_bigint & in_integerValue) ;

//--------------------------------- Copy constructor
  public: GGS_jsonValue_2E_jsonInteger (const GGS_jsonValue_2E_jsonInteger & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_jsonValue_2E_jsonInteger & operator = (const GGS_jsonValue_2E_jsonInteger & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonValue_2E_jsonInteger init_21_ (const class GGS_bigint & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonInteger extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonInteger ;

//--------------------------------------------------------------------------------------------------
// Phase 1: jsonValue.jsonInteger? optional
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonInteger_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_jsonValue_2E_jsonInteger mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonInteger_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_jsonValue_2E_jsonInteger_3F_ (const GGS_jsonValue_2E_jsonInteger & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_jsonValue_2E_jsonInteger_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_jsonValue_2E_jsonInteger unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonInteger_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonInteger_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonObjectValue list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_jsonObjectValue final {
  public: DownEnumerator_jsonObjectValue (const class GGS_jsonObjectValue & inList) ;

  public: ~ DownEnumerator_jsonObjectValue (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mKey (LOCATION_ARGS) const ;
  public: class GGS_jsonValue current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_jsonObjectValue_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_jsonObjectValue_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_jsonObjectValue (const DownEnumerator_jsonObjectValue &) = delete ;
  private: DownEnumerator_jsonObjectValue & operator = (const DownEnumerator_jsonObjectValue &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_jsonObjectValue final {
  public: UpEnumerator_jsonObjectValue (const class GGS_jsonObjectValue & inList)  ;

  public: ~ UpEnumerator_jsonObjectValue (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mKey (LOCATION_ARGS) const ;
  public: class GGS_jsonValue current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_jsonObjectValue_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_jsonObjectValue_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_jsonObjectValue (const UpEnumerator_jsonObjectValue &) = delete ;
  private: UpEnumerator_jsonObjectValue & operator = (const UpEnumerator_jsonObjectValue &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @jsonObjectValue list
//--------------------------------------------------------------------------------------------------

class GGS_jsonObjectValue : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_jsonObjectValue_2E_element> mArray ;

//--- Default constructor
  public: GGS_jsonObjectValue (void) ;

//--- Destructor
  public: virtual ~ GGS_jsonObjectValue (void) = default ;

//--- Copy
  public: GGS_jsonObjectValue (const GGS_jsonObjectValue &) = default ;
  public: GGS_jsonObjectValue & operator = (const GGS_jsonObjectValue &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_jsonObjectValue_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_jsonObjectValue subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_jsonObjectValue (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mKey,
                                                 const class GGS_jsonValue & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonObjectValue init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonObjectValue extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_jsonObjectValue class_func_listWithValue (const class GGS_string & inOperand0,
                                                                     const class GGS_jsonValue & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_jsonObjectValue inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_jsonValue & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_jsonObjectValue_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_jsonObjectValue add_operation (const GGS_jsonObjectValue & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_jsonValue constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_jsonValue constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_jsonValue & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_jsonValue & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_jsonValue & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_jsonValue constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_jsonValue & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_jsonValue & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mKeyAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonValue getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonObjectValue getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonObjectValue getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_jsonObjectValue getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_jsonObjectValue ;
  friend class DownEnumerator_jsonObjectValue ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonObjectValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonValue_2E_jsonObject struct
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonObject : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_jsonObjectValue mProperty_objectValue ;
  public: inline GGS_jsonObjectValue readProperty_objectValue (void) const {
    return mProperty_objectValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonObject (void) ;

//--------------------------------- Property setters
  public: inline void setter_setObjectValue (const GGS_jsonObjectValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_objectValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_jsonValue_2E_jsonObject (const GGS_jsonObjectValue & in_objectValue) ;

//--------------------------------- Copy constructor
  public: GGS_jsonValue_2E_jsonObject (const GGS_jsonValue_2E_jsonObject & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_jsonValue_2E_jsonObject & operator = (const GGS_jsonValue_2E_jsonObject & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonValue_2E_jsonObject init_21_ (const class GGS_jsonObjectValue & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonObject extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonObject ;

//--------------------------------------------------------------------------------------------------
// Phase 1: jsonValue.jsonObject? optional
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonObject_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_jsonValue_2E_jsonObject mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonObject_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_jsonValue_2E_jsonObject_3F_ (const GGS_jsonValue_2E_jsonObject & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_jsonValue_2E_jsonObject_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_jsonValue_2E_jsonObject unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonObject_3F_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonObject_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonValue_2E_jsonString struct
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonString : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_stringValue ;
  public: inline GGS_string readProperty_stringValue (void) const {
    return mProperty_stringValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonString (void) ;

//--------------------------------- Property setters
  public: inline void setter_setStringValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_stringValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_jsonValue_2E_jsonString (const GGS_string & in_stringValue) ;

//--------------------------------- Copy constructor
  public: GGS_jsonValue_2E_jsonString (const GGS_jsonValue_2E_jsonString & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_jsonValue_2E_jsonString & operator = (const GGS_jsonValue_2E_jsonString & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonValue_2E_jsonString init_21_ (const class GGS_string & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonString extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonString ;

//--------------------------------------------------------------------------------------------------
// Phase 1: jsonValue.jsonString? optional
//--------------------------------------------------------------------------------------------------

class GGS_jsonValue_2E_jsonString_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_jsonValue_2E_jsonString mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_jsonValue_2E_jsonString_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_jsonValue_2E_jsonString_3F_ (const GGS_jsonValue_2E_jsonString & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_jsonValue_2E_jsonString_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_jsonValue_2E_jsonString unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonValue_2E_jsonString_3F_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonValue_2E_jsonString_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonObjectValue_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_jsonObjectValue_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mKey ;
  public: inline GGS_string readProperty_mKey (void) const {
    return mProperty_mKey ;
  }

  public: GGS_jsonValue mProperty_mValue ;
  public: inline GGS_jsonValue readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_jsonObjectValue_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_jsonValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_jsonObjectValue_2E_element (const GGS_string & in_mKey,
                                          const GGS_jsonValue & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_jsonObjectValue_2E_element (const GGS_jsonObjectValue_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_jsonObjectValue_2E_element & operator = (const GGS_jsonObjectValue_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonObjectValue_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                              const class GGS_jsonValue & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonObjectValue_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonObjectValue_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @jsonArrayValue_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_jsonArrayValue_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_jsonValue mProperty_mValue ;
  public: inline GGS_jsonValue readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_jsonArrayValue_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_jsonValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_jsonArrayValue_2E_element (const GGS_jsonValue & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_jsonArrayValue_2E_element (const GGS_jsonArrayValue_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_jsonArrayValue_2E_element & operator = (const GGS_jsonArrayValue_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_jsonArrayValue_2E_element init_21_ (const class GGS_jsonValue & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_jsonArrayValue_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jsonArrayValue_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'jsonSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_jsonSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_jsonSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_JSON_5F_text_ (class GGS_jsonValue & outArgument0,
                                            class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_JSON_5F_text_parse (class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_JSON_5F_text_indexing (class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_array_ (class GGS_jsonArrayValue & outArgument0,
                                     class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_array_parse (class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_array_indexing (class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_object_ (class GGS_jsonObjectValue & outArgument0,
                                      class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_object_parse (class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_object_indexing (class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_value_ (class GGS_jsonValue & outArgument0,
                                     class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_value_parse (class Lexique_jsonScanner * inLexique) = 0 ;

  protected: virtual void nt_value_indexing (class Lexique_jsonScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_jsonSyntax_JSON_5F_text_i0_ (GGS_jsonValue & outArgument0,
                                                    Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_JSON_5F_text_i0_parse (Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_JSON_5F_text_i0_indexing (Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_value_i1_ (GGS_jsonValue & outArgument0,
                                             Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_value_i1_parse (Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_value_i1_indexing (Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_object_i2_ (GGS_jsonObjectValue & outArgument0,
                                              Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_object_i2_parse (Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_object_i2_indexing (Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_array_i3_ (GGS_jsonArrayValue & outArgument0,
                                             Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_array_i3_parse (Lexique_jsonScanner * inLexique) ;

  protected: void rule_jsonSyntax_array_i3_indexing (Lexique_jsonScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_jsonSyntax_0 (Lexique_jsonScanner *) = 0 ;

  protected: virtual int32_t select_jsonSyntax_1 (Lexique_jsonScanner *) = 0 ;

  protected: virtual int32_t select_jsonSyntax_2 (Lexique_jsonScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForGeneration (const class cPtr_templateInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionForGeneration_2E_weak (const class GGS_templateInstructionForGeneration & inSource) ;

  public: GGS_templateInstructionForGeneration_2E_weak & operator = (const class GGS_templateInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionForGeneration bang_templateInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ;

