#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4OptionComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_OptionComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__ (class GGS_commandLineOptionListAST & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GuiComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GuiComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GGS_guiSimpleAttributeListAST & ioArgument0,
                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GGS_withLexiqueListAST & ioArgument0,
                                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument0,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument0,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4SyntaxComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_SyntaxComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_actualInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                    class GGS_actualParameterListAST & outArgument1,
                                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxInstructionList & outArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_formalParameterListAST & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class GGS_nonterminalDeclarationListAST & ioArgument1,
                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS_semanticInstructionAST & outArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_syntaxInstructionAST & outArgument1,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxInstructionList & outArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxRuleListAST & ioArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       const class GGS_lstring constinArgument1,
                                                       class GGS_syntaxRuleLabelListAST & ioArgument2,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GGS__32_lstringlist & outArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_nonterminalDeclarationListAST & ioArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    const GGS_lstring constinArgument1,
                                                                                    GGS_syntaxRuleLabelListAST & ioArgument2,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxRuleListAST & ioArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxInstructionList & outArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GGS__32_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                           GGS_syntaxInstructionList & outArgument1,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                           GGS_syntaxInstructionList & outArgument1,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GrammarComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GrammarComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                   const class GGS_lstring constinArgument1,
                                                                   class GGS_nonTerminalLabelListAST & ioArgument2,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class GGS_formalParameterListAST & ioArgument2,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                 const GGS_lstring constinArgument1,
                                                                                                 GGS_nonTerminalLabelListAST & ioArgument2,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ProgramDeclarations' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ProgramDeclarations (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticInstructionListAST & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ProgramDeclarations_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_2 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap map
//--------------------------------------------------------------------------------------------------

#include "String-class.h"
#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_headerCompositionMap
//--------------------------------------------------------------------------------------------------

class MapFor_headerCompositionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_headerCompositionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerCompositionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_headerCompositionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerCompositionMap (const MapFor_headerCompositionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerCompositionMap & operator = (const MapFor_headerCompositionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_headerCompositionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_headerCompositionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_headerCompositionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_headerCompositionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_headerCompositionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*  protected: MapRootFor_headerCompositionMap getOverridenMap (void) const {
    MapRootFor_headerCompositionMap result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_headerCompositionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_headerCompositionMap final {
//--- Constructor
  public: DownEnumerator_headerCompositionMap (const class GGS_headerCompositionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_stringset current_mInclusion (LOCATION_ARGS) const ;

  public: class GGS_string current_mHeaderString (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_headerCompositionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_headerCompositionMap (const DownEnumerator_headerCompositionMap &) = delete ;
  private: DownEnumerator_headerCompositionMap & operator = (const DownEnumerator_headerCompositionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_headerCompositionMap final {
  public: UpEnumerator_headerCompositionMap (const class GGS_headerCompositionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mInclusion (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_headerCompositionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_headerCompositionMap (const UpEnumerator_headerCompositionMap &) = delete ;
  private: UpEnumerator_headerCompositionMap & operator = (const UpEnumerator_headerCompositionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap : public MapFor_headerCompositionMap {
//--------------------------------- Default constructor
  public: GGS_headerCompositionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_headerCompositionMap (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerCompositionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerCompositionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerCompositionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_headerCompositionMap class_func_mapWithMapToOverride (const class GGS_headerCompositionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringset constinArgument1,
                                                  class GGS_string constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHeaderStringForKey (class GGS_string constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInclusionForKey (class GGS_stringset constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringset & outArgument1,
                                                  class GGS_string & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mHeaderStringForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_mInclusionForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_headerCompositionMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_headerCompositionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_headerCompositionMap ;
  friend class DownEnumerator_headerCompositionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringset mProperty_mInclusion ;
  public: inline GGS_stringset readProperty_mInclusion (void) const {
    return mProperty_mInclusion ;
  }

  public: GGS_string mProperty_mHeaderString ;
  public: inline GGS_string readProperty_mHeaderString (void) const {
    return mProperty_mHeaderString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_headerCompositionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInclusion (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInclusion = inValue ;
  }

  public: inline void setter_setMHeaderString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerCompositionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_stringset & in_mInclusion,
                                               const GGS_string & in_mHeaderString) ;

//--------------------------------- Copy constructor
  public: GGS_headerCompositionMap_2E_element (const GGS_headerCompositionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_headerCompositionMap_2E_element & operator = (const GGS_headerCompositionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerCompositionMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_stringset & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerCompositionMap_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerCompositionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_stringset & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: headerCompositionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_headerCompositionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_headerCompositionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_headerCompositionMap_2E_element_3F_ (const GGS_headerCompositionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_headerCompositionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_headerCompositionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_headerCompositionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap map
//--------------------------------------------------------------------------------------------------

#include "String-class.h"
#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_headerRepartitionMap
//--------------------------------------------------------------------------------------------------

class MapFor_headerRepartitionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_headerRepartitionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerRepartitionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_headerRepartitionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerRepartitionMap (const MapFor_headerRepartitionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerRepartitionMap & operator = (const MapFor_headerRepartitionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_headerRepartitionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_headerRepartitionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_headerRepartitionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_headerRepartitionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_headerRepartitionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*  protected: MapRootFor_headerRepartitionMap getOverridenMap (void) const {
    MapRootFor_headerRepartitionMap result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_headerRepartitionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_headerRepartitionMap final {
//--- Constructor
  public: DownEnumerator_headerRepartitionMap (const class GGS_headerRepartitionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mHeaderFileName (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_headerRepartitionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_headerRepartitionMap (const DownEnumerator_headerRepartitionMap &) = delete ;
  private: DownEnumerator_headerRepartitionMap & operator = (const DownEnumerator_headerRepartitionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_headerRepartitionMap final {
  public: UpEnumerator_headerRepartitionMap (const class GGS_headerRepartitionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderFileName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_headerRepartitionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_headerRepartitionMap (const UpEnumerator_headerRepartitionMap &) = delete ;
  private: UpEnumerator_headerRepartitionMap & operator = (const UpEnumerator_headerRepartitionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap : public MapFor_headerRepartitionMap {
//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_headerRepartitionMap (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerRepartitionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerRepartitionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerRepartitionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_headerRepartitionMap class_func_mapWithMapToOverride (const class GGS_headerRepartitionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHeaderFileNameForKey (class GGS_string constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mHeaderFileNameForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_headerRepartitionMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_headerRepartitionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_headerRepartitionMap ;
  friend class DownEnumerator_headerRepartitionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mHeaderFileName ;
  public: inline GGS_string readProperty_mHeaderFileName (void) const {
    return mProperty_mHeaderFileName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMHeaderFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerRepartitionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_string & in_mHeaderFileName) ;

//--------------------------------- Copy constructor
  public: GGS_headerRepartitionMap_2E_element (const GGS_headerRepartitionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_headerRepartitionMap_2E_element & operator = (const GGS_headerRepartitionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerRepartitionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerRepartitionMap_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerRepartitionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: headerRepartitionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_headerRepartitionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_headerRepartitionMap_2E_element_3F_ (const GGS_headerRepartitionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_headerRepartitionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_headerRepartitionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_headerRepartitionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectQualifiedFeatureMap map
//--------------------------------------------------------------------------------------------------

#include "String-class.h"
#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

class MapFor_projectQualifiedFeatureMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_projectQualifiedFeatureMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_projectQualifiedFeatureMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_projectQualifiedFeatureMap (const MapFor_projectQualifiedFeatureMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_projectQualifiedFeatureMap & operator = (const MapFor_projectQualifiedFeatureMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_projectQualifiedFeatureMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_projectQualifiedFeatureMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_projectQualifiedFeatureMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_projectQualifiedFeatureMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_projectQualifiedFeatureMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*  protected: MapRootFor_projectQualifiedFeatureMap getOverridenMap (void) const {
    MapRootFor_projectQualifiedFeatureMap result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_projectQualifiedFeatureMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_projectQualifiedFeatureMap final {
//--- Constructor
  public: DownEnumerator_projectQualifiedFeatureMap (const class GGS_projectQualifiedFeatureMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_projectQualifiedFeatureMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_projectQualifiedFeatureMap (const DownEnumerator_projectQualifiedFeatureMap &) = delete ;
  private: DownEnumerator_projectQualifiedFeatureMap & operator = (const DownEnumerator_projectQualifiedFeatureMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_projectQualifiedFeatureMap final {
  public: UpEnumerator_projectQualifiedFeatureMap (const class GGS_projectQualifiedFeatureMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_projectQualifiedFeatureMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_projectQualifiedFeatureMap (const UpEnumerator_projectQualifiedFeatureMap &) = delete ;
  private: UpEnumerator_projectQualifiedFeatureMap & operator = (const UpEnumerator_projectQualifiedFeatureMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap : public MapFor_projectQualifiedFeatureMap {
//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_projectQualifiedFeatureMap (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectQualifiedFeatureMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectQualifiedFeatureMap extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_projectQualifiedFeatureMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_projectQualifiedFeatureMap class_func_mapWithMapToOverride (const class GGS_projectQualifiedFeatureMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureValueForKey (class GGS_lstring constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFeatureValueForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_projectQualifiedFeatureMap getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_projectQualifiedFeatureMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_projectQualifiedFeatureMap ;
  friend class DownEnumerator_projectQualifiedFeatureMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectQualifiedFeatureMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mFeatureValue ;
  public: inline GGS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (const GGS_lstring & in_lkey,
                                                     const GGS_lstring & in_mFeatureValue) ;

//--------------------------------- Copy constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_projectQualifiedFeatureMap_2E_element & operator = (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectQualifiedFeatureMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectQualifiedFeatureMap_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_projectQualifiedFeatureMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: projectQualifiedFeatureMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_projectQualifiedFeatureMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_projectQualifiedFeatureMap_2E_element_3F_ (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_projectQualifiedFeatureMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_projectQualifiedFeatureMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_projectQualifiedFeatureMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeGroupList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeGroupList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_XCodeGroupList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_XCodeGroupList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mGroupReference,
                                                 const class GGS_string & in_mGroupName,
                                                 const class GGS_string & in_mGroupPath,
                                                 const class GGS_stringlist & in_mChildrenRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeGroupList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_XCodeGroupList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_string & inOperand2,
                                                                    const class GGS_stringlist & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeGroupList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_stringlist & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeGroupList add_operation (const GGS_XCodeGroupList & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_stringlist constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_stringlist constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_stringlist & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_stringlist & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_stringlist & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMChildrenRefsAtIndex (class GGS_stringlist constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupPathAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupReferenceAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_stringlist & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_stringlist & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mChildrenRefsAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupPathAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeGroupList ;
  friend class DownEnumerator_XCodeGroupList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mGroupReference ;
  public: inline GGS_string readProperty_mGroupReference (void) const {
    return mProperty_mGroupReference ;
  }

  public: GGS_string mProperty_mGroupName ;
  public: inline GGS_string readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GGS_string mProperty_mGroupPath ;
  public: inline GGS_string readProperty_mGroupPath (void) const {
    return mProperty_mGroupPath ;
  }

  public: GGS_stringlist mProperty_mChildrenRefs ;
  public: inline GGS_stringlist readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeGroupList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupReference = inValue ;
  }

  public: inline void setter_setMGroupName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMGroupPath (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupPath = inValue ;
  }

  public: inline void setter_setMChildrenRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_string & in_mGroupReference,
                                         const GGS_string & in_mGroupName,
                                         const GGS_string & in_mGroupPath,
                                         const GGS_stringlist & in_mChildrenRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_XCodeGroupList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeGroupList_2E_element & operator = (const GGS_XCodeGroupList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList_2E_element init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_stringlist & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeGroupList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_stringlist & inOperand3,
                                                                     class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeToolTargetList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeToolTargetList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_XCodeToolTargetList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTargetRef,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mProductFileReference,
                                                 const class GGS_string & in_mProductFileName,
                                                 const class GGS_stringlist & in_mBuildPhaseRefList,
                                                 const class GGS_string & in_mBuildPhaseRef,
                                                 const class GGS_string & in_mBuildConfigurationListRef,
                                                 const class GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GGS_string & in_mBuildConfigurationRef,
                                                 const class GGS_stringlist & in_mFrameworksFileRefList,
                                                 const class GGS_string & in_mFrameworkBuildPhaseRef
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeToolTargetList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_XCodeToolTargetList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         const class GGS_stringlist & inOperand4,
                                                                         const class GGS_string & inOperand5,
                                                                         const class GGS_string & inOperand6,
                                                                         const class GGS_stringlist & inOperand7,
                                                                         const class GGS_string & inOperand8,
                                                                         const class GGS_stringlist & inOperand9,
                                                                         const class GGS_string & inOperand10
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeToolTargetList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_stringlist & inOperand4,
                                                    const class GGS_string & inOperand5,
                                                    const class GGS_string & inOperand6,
                                                    const class GGS_stringlist & inOperand7,
                                                    const class GGS_string & inOperand8,
                                                    const class GGS_stringlist & inOperand9,
                                                    const class GGS_string & inOperand10
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeToolTargetList add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_stringlist constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_string constinArgument6,
                                               class GGS_stringlist constinArgument7,
                                               class GGS_string constinArgument8,
                                               class GGS_stringlist constinArgument9,
                                               class GGS_string constinArgument10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_stringlist constinArgument4,
                                                      class GGS_string constinArgument5,
                                                      class GGS_string constinArgument6,
                                                      class GGS_stringlist constinArgument7,
                                                      class GGS_string constinArgument8,
                                                      class GGS_stringlist constinArgument9,
                                                      class GGS_string constinArgument10,
                                                      class GGS_uint constinArgument11,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_string & outArgument6,
                                                 class GGS_stringlist & outArgument7,
                                                 class GGS_string & outArgument8,
                                                 class GGS_stringlist & outArgument9,
                                                 class GGS_string & outArgument10,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_stringlist & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_string & outArgument6,
                                                class GGS_stringlist & outArgument7,
                                                class GGS_string & outArgument8,
                                                class GGS_stringlist & outArgument9,
                                                class GGS_string & outArgument10,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_stringlist & outArgument4,
                                                      class GGS_string & outArgument5,
                                                      class GGS_string & outArgument6,
                                                      class GGS_stringlist & outArgument7,
                                                      class GGS_string & outArgument8,
                                                      class GGS_stringlist & outArgument9,
                                                      class GGS_string & outArgument10,
                                                      class GGS_uint constinArgument11,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GGS_string constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GGS_stringlist constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_stringlist & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_string & outArgument6,
                                              class GGS_stringlist & outArgument7,
                                              class GGS_string & outArgument8,
                                              class GGS_stringlist & outArgument9,
                                              class GGS_string & outArgument10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_stringlist & outArgument4,
                                             class GGS_string & outArgument5,
                                             class GGS_string & outArgument6,
                                             class GGS_stringlist & outArgument7,
                                             class GGS_string & outArgument8,
                                             class GGS_stringlist & outArgument9,
                                             class GGS_string & outArgument10,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationListRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildPhaseRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mFrameworksFileRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetRefAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeToolTargetList ;
  friend class DownEnumerator_XCodeToolTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GGS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GGS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeToolTargetList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_string & in_mTargetRef,
                                              const GGS_string & in_mTargetName,
                                              const GGS_string & in_mProductFileReference,
                                              const GGS_string & in_mProductFileName,
                                              const GGS_stringlist & in_mBuildPhaseRefList,
                                              const GGS_string & in_mBuildPhaseRef,
                                              const GGS_string & in_mBuildConfigurationListRef,
                                              const GGS_stringlist & in_mBuildConfigurationSettingList,
                                              const GGS_string & in_mBuildConfigurationRef,
                                              const GGS_stringlist & in_mFrameworksFileRefList,
                                              const GGS_string & in_mFrameworkBuildPhaseRef) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeToolTargetList_2E_element & operator = (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList_2E_element init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
                                                                                                      const class GGS_string & inOperand3,
                                                                                                      const class GGS_stringlist & inOperand4,
                                                                                                      const class GGS_string & inOperand5,
                                                                                                      const class GGS_string & inOperand6,
                                                                                                      const class GGS_stringlist & inOperand7,
                                                                                                      const class GGS_string & inOperand8,
                                                                                                      const class GGS_stringlist & inOperand9,
                                                                                                      const class GGS_string & inOperand10,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeToolTargetList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_string & inOperand2,
                                                                          const class GGS_string & inOperand3,
                                                                          const class GGS_stringlist & inOperand4,
                                                                          const class GGS_string & inOperand5,
                                                                          const class GGS_string & inOperand6,
                                                                          const class GGS_stringlist & inOperand7,
                                                                          const class GGS_string & inOperand8,
                                                                          const class GGS_stringlist & inOperand9,
                                                                          const class GGS_string & inOperand10,
                                                                          class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTargetList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeAppTargetList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_XCodeAppTargetList (const class GGS_XCodeAppTargetList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GGS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeAppTargetList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeAppTargetList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_XCodeAppTargetList (const class GGS_XCodeAppTargetList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GGS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeAppTargetList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTargetList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_XCodeAppTargetList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTargetRef,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mProductFileReference,
                                                 const class GGS_string & in_mProductFileName,
                                                 const class GGS_stringlist & in_mBuildPhaseRefList,
                                                 const class GGS_string & in_mBuildPhaseRef,
                                                 const class GGS_string & in_mBuildConfigurationListRef,
                                                 const class GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GGS_string & in_mBuildConfigurationRef,
                                                 const class GGS_stringlist & in_mFrameworksFileRefList,
                                                 const class GGS_string & in_mFrameworkBuildPhaseRef,
                                                 const class GGS__32_stringlist & in_mDependentTargets,
                                                 const class GGS_string & in_mResourceBuildRef,
                                                 const class GGS_stringlist & in_mResourceFileBuildRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTargetList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeAppTargetList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeAppTargetList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_XCodeAppTargetList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        const class GGS_stringlist & inOperand4,
                                                                        const class GGS_string & inOperand5,
                                                                        const class GGS_string & inOperand6,
                                                                        const class GGS_stringlist & inOperand7,
                                                                        const class GGS_string & inOperand8,
                                                                        const class GGS_stringlist & inOperand9,
                                                                        const class GGS_string & inOperand10,
                                                                        const class GGS__32_stringlist & inOperand11,
                                                                        const class GGS_string & inOperand12,
                                                                        const class GGS_stringlist & inOperand13
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeAppTargetList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_stringlist & inOperand4,
                                                    const class GGS_string & inOperand5,
                                                    const class GGS_string & inOperand6,
                                                    const class GGS_stringlist & inOperand7,
                                                    const class GGS_string & inOperand8,
                                                    const class GGS_stringlist & inOperand9,
                                                    const class GGS_string & inOperand10,
                                                    const class GGS__32_stringlist & inOperand11,
                                                    const class GGS_string & inOperand12,
                                                    const class GGS_stringlist & inOperand13
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeAppTargetList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeAppTargetList add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_stringlist constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_string constinArgument6,
                                               class GGS_stringlist constinArgument7,
                                               class GGS_string constinArgument8,
                                               class GGS_stringlist constinArgument9,
                                               class GGS_string constinArgument10,
                                               class GGS__32_stringlist constinArgument11,
                                               class GGS_string constinArgument12,
                                               class GGS_stringlist constinArgument13,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_stringlist constinArgument4,
                                                      class GGS_string constinArgument5,
                                                      class GGS_string constinArgument6,
                                                      class GGS_stringlist constinArgument7,
                                                      class GGS_string constinArgument8,
                                                      class GGS_stringlist constinArgument9,
                                                      class GGS_string constinArgument10,
                                                      class GGS__32_stringlist constinArgument11,
                                                      class GGS_string constinArgument12,
                                                      class GGS_stringlist constinArgument13,
                                                      class GGS_uint constinArgument14,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_string & outArgument6,
                                                 class GGS_stringlist & outArgument7,
                                                 class GGS_string & outArgument8,
                                                 class GGS_stringlist & outArgument9,
                                                 class GGS_string & outArgument10,
                                                 class GGS__32_stringlist & outArgument11,
                                                 class GGS_string & outArgument12,
                                                 class GGS_stringlist & outArgument13,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_stringlist & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_string & outArgument6,
                                                class GGS_stringlist & outArgument7,
                                                class GGS_string & outArgument8,
                                                class GGS_stringlist & outArgument9,
                                                class GGS_string & outArgument10,
                                                class GGS__32_stringlist & outArgument11,
                                                class GGS_string & outArgument12,
                                                class GGS_stringlist & outArgument13,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_stringlist & outArgument4,
                                                      class GGS_string & outArgument5,
                                                      class GGS_string & outArgument6,
                                                      class GGS_stringlist & outArgument7,
                                                      class GGS_string & outArgument8,
                                                      class GGS_stringlist & outArgument9,
                                                      class GGS_string & outArgument10,
                                                      class GGS__32_stringlist & outArgument11,
                                                      class GGS_string & outArgument12,
                                                      class GGS_stringlist & outArgument13,
                                                      class GGS_uint constinArgument14,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GGS_string constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GGS_stringlist constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependentTargetsAtIndex (class GGS__32_stringlist constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceBuildRefAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceFileBuildRefsAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_stringlist & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_string & outArgument6,
                                              class GGS_stringlist & outArgument7,
                                              class GGS_string & outArgument8,
                                              class GGS_stringlist & outArgument9,
                                              class GGS_string & outArgument10,
                                              class GGS__32_stringlist & outArgument11,
                                              class GGS_string & outArgument12,
                                              class GGS_stringlist & outArgument13,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_stringlist & outArgument4,
                                             class GGS_string & outArgument5,
                                             class GGS_string & outArgument6,
                                             class GGS_stringlist & outArgument7,
                                             class GGS_string & outArgument8,
                                             class GGS_stringlist & outArgument9,
                                             class GGS_string & outArgument10,
                                             class GGS__32_stringlist & outArgument11,
                                             class GGS_string & outArgument12,
                                             class GGS_stringlist & outArgument13,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationListRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildPhaseRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_mDependentTargetsAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mFrameworksFileRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mResourceBuildRefAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mResourceFileBuildRefsAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetRefAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeAppTargetList ;
  friend class DownEnumerator_XCodeAppTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTargetList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTargetList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GGS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GGS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

  public: GGS__32_stringlist mProperty_mDependentTargets ;
  public: inline GGS__32_stringlist readProperty_mDependentTargets (void) const {
    return mProperty_mDependentTargets ;
  }

  public: GGS_string mProperty_mResourceBuildRef ;
  public: inline GGS_string readProperty_mResourceBuildRef (void) const {
    return mProperty_mResourceBuildRef ;
  }

  public: GGS_stringlist mProperty_mResourceFileBuildRefs ;
  public: inline GGS_stringlist readProperty_mResourceFileBuildRefs (void) const {
    return mProperty_mResourceFileBuildRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeAppTargetList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMDependentTargets (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependentTargets = inValue ;
  }

  public: inline void setter_setMResourceBuildRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceBuildRef = inValue ;
  }

  public: inline void setter_setMResourceFileBuildRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceFileBuildRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeAppTargetList_2E_element (const GGS_string & in_mTargetRef,
                                             const GGS_string & in_mTargetName,
                                             const GGS_string & in_mProductFileReference,
                                             const GGS_string & in_mProductFileName,
                                             const GGS_stringlist & in_mBuildPhaseRefList,
                                             const GGS_string & in_mBuildPhaseRef,
                                             const GGS_string & in_mBuildConfigurationListRef,
                                             const GGS_stringlist & in_mBuildConfigurationSettingList,
                                             const GGS_string & in_mBuildConfigurationRef,
                                             const GGS_stringlist & in_mFrameworksFileRefList,
                                             const GGS_string & in_mFrameworkBuildPhaseRef,
                                             const GGS__32_stringlist & in_mDependentTargets,
                                             const GGS_string & in_mResourceBuildRef,
                                             const GGS_stringlist & in_mResourceFileBuildRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeAppTargetList_2E_element (const GGS_XCodeAppTargetList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeAppTargetList_2E_element & operator = (const GGS_XCodeAppTargetList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTargetList_2E_element init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                 const class GGS_string & inOperand1,
                                                                                                                 const class GGS_string & inOperand2,
                                                                                                                 const class GGS_string & inOperand3,
                                                                                                                 const class GGS_stringlist & inOperand4,
                                                                                                                 const class GGS_string & inOperand5,
                                                                                                                 const class GGS_string & inOperand6,
                                                                                                                 const class GGS_stringlist & inOperand7,
                                                                                                                 const class GGS_string & inOperand8,
                                                                                                                 const class GGS_stringlist & inOperand9,
                                                                                                                 const class GGS_string & inOperand10,
                                                                                                                 const class GGS__32_stringlist & inOperand11,
                                                                                                                 const class GGS_string & inOperand12,
                                                                                                                 const class GGS_stringlist & inOperand13,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeAppTargetList_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeAppTargetList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         const class GGS_stringlist & inOperand4,
                                                                         const class GGS_string & inOperand5,
                                                                         const class GGS_string & inOperand6,
                                                                         const class GGS_stringlist & inOperand7,
                                                                         const class GGS_string & inOperand8,
                                                                         const class GGS_stringlist & inOperand9,
                                                                         const class GGS_string & inOperand10,
                                                                         const class GGS__32_stringlist & inOperand11,
                                                                         const class GGS_string & inOperand12,
                                                                         const class GGS_stringlist & inOperand13,
                                                                         class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFileList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_BuildFileList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_BuildFileList (const class GGS_BuildFileList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_BuildFileList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_BuildFileList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_BuildFileList (const class GGS_BuildFileList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_BuildFileList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFileList list
//--------------------------------------------------------------------------------------------------

class GGS_BuildFileList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_BuildFileList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_BuildFileList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mFileReference,
                                                 const class GGS_string & in_mFileName,
                                                 const class GGS_string & in_mBuildReference
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFileList init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_BuildFileList extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_BuildFileList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_BuildFileList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_string & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_BuildFileList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_BuildFileList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_BuildFileList add_operation (const GGS_BuildFileList & inOperand,
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

  public: VIRTUAL_IN_DEBUG void setter_setMBuildReferenceAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileReferenceAtIndex (class GGS_string constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_BuildFileList ;
  friend class DownEnumerator_BuildFileList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFileList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_BuildFileList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFileReference ;
  public: inline GGS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GGS_string mProperty_mFileName ;
  public: inline GGS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GGS_string mProperty_mBuildReference ;
  public: inline GGS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_BuildFileList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_BuildFileList_2E_element (const GGS_string & in_mFileReference,
                                        const GGS_string & in_mFileName,
                                        const GGS_string & in_mBuildReference) ;

//--------------------------------- Copy constructor
  public: GGS_BuildFileList_2E_element (const GGS_BuildFileList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_BuildFileList_2E_element & operator = (const GGS_BuildFileList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFileList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                const class GGS_string & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_BuildFileList_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_BuildFileList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_string & inOperand2,
                                                                    class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum xcodeProject
//--------------------------------------------------------------------------------------------------

class GGS_xcodeProject : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_xcodeProject (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_objcApp,
    enum_swiftApp
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
  public: static GGS_xcodeProject extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xcodeProject class_func_none (LOCATION_ARGS) ;

  public: static class GGS_xcodeProject class_func_objcApp (LOCATION_ARGS) ;

  public: static class GGS_xcodeProject class_func_swiftApp (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xcodeProject & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isObjcApp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSwiftApp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xcodeProject ;

