#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

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
// Phase 1: @headerCompositionMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_headerCompositionMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_headerCompositionMap (const class GGS_headerCompositionMap & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mInclusion (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_headerCompositionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_headerCompositionMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_headerCompositionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_headerCompositionMap (const GGS_headerCompositionMap & inSource) ;
  public: GGS_headerCompositionMap & operator = (const GGS_headerCompositionMap & inSource) ;
  
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

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_stringset & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_headerCompositionMap add_operation (const GGS_headerCompositionMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


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
  public: VIRTUAL_IN_DEBUG cMapElement_headerCompositionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GGS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_headerCompositionMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_headerCompositionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@headerCompositionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_headerCompositionMap : public cMapElement {
//--- Map attributes
  public: GGS_stringset mProperty_mInclusion ;
  public: GGS_string mProperty_mHeaderString ;

//--- Constructors
  public: cMapElement_headerCompositionMap (const GGS_headerCompositionMap_2E_element & inValue
                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_headerCompositionMap (const GGS_lstring & inKey,
                                            const GGS_stringset & in_mInclusion,
                                            const GGS_string & in_mHeaderString
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @headerCompositionMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_headerCompositionMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerCompositionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_stringset & in_mInclusion,
                                               const GGS_string & in_mHeaderString) ;

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
//
// Phase 1: headerCompositionMap.element? optional
//
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
// Phase 1: @headerRepartitionMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_headerRepartitionMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_headerRepartitionMap (const class GGS_headerRepartitionMap & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderFileName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_headerRepartitionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_headerRepartitionMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_headerRepartitionMap (const GGS_headerRepartitionMap & inSource) ;
  public: GGS_headerRepartitionMap & operator = (const GGS_headerRepartitionMap & inSource) ;
  
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

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_headerRepartitionMap add_operation (const GGS_headerRepartitionMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


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
  public: VIRTUAL_IN_DEBUG cMapElement_headerRepartitionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GGS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_headerRepartitionMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_headerRepartitionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@headerRepartitionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_headerRepartitionMap : public cMapElement {
//--- Map attributes
  public: GGS_string mProperty_mHeaderFileName ;

//--- Constructors
  public: cMapElement_headerRepartitionMap (const GGS_headerRepartitionMap_2E_element & inValue
                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_headerRepartitionMap (const GGS_lstring & inKey,
                                            const GGS_string & in_mHeaderFileName
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @headerRepartitionMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_headerRepartitionMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerRepartitionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_string & in_mHeaderFileName) ;

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
//
// Phase 1: headerRepartitionMap.element? optional
//
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
// Phase 1: @projectQualifiedFeatureMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_projectQualifiedFeatureMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_projectQualifiedFeatureMap (const class GGS_projectQualifiedFeatureMap & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_projectQualifiedFeatureMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectQualifiedFeatureMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_projectQualifiedFeatureMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap (void) ;

//--------------------------------- Handle copy
  public: GGS_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inSource) ;
  public: GGS_projectQualifiedFeatureMap & operator = (const GGS_projectQualifiedFeatureMap & inSource) ;
  
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

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_projectQualifiedFeatureMap add_operation (const GGS_projectQualifiedFeatureMap & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


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
  public: VIRTUAL_IN_DEBUG cMapElement_projectQualifiedFeatureMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                       const GGS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_projectQualifiedFeatureMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_projectQualifiedFeatureMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@projectQualifiedFeatureMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_projectQualifiedFeatureMap : public cMapElement {
//--- Map attributes
  public: GGS_lstring mProperty_mFeatureValue ;

//--- Constructors
  public: cMapElement_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_projectQualifiedFeatureMap (const GGS_lstring & inKey,
                                                  const GGS_lstring & in_mFeatureValue
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @projectQualifiedFeatureMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_projectQualifiedFeatureMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (const GGS_lstring & in_lkey,
                                                     const GGS_lstring & in_mFeatureValue) ;

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
//
// Phase 1: projectQualifiedFeatureMap.element? optional
//
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

class cEnumerator_XCodeGroupList final : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

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

//--------------------------------- List constructor used by listmap
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
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_XCodeGroupList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_stringlist & inOperand3
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

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_XCodeGroupList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_XCodeGroupList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeGroupList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_XCodeGroupList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_string & in_mGroupReference,
                                         const GGS_string & in_mGroupName,
                                         const GGS_string & in_mGroupPath,
                                         const GGS_stringlist & in_mChildrenRefs) ;

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

class cEnumerator_XCodeToolTargetList final : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

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

//--------------------------------- List constructor used by listmap
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
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_XCodeToolTargetList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
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

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_XCodeToolTargetList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_XCodeToolTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeToolTargetList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_XCodeToolTargetList_2E_element (void) ;

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

class cEnumerator_XCodeAppTargetList final : public cGenericAbstractEnumerator {
  public: cEnumerator_XCodeAppTargetList (const class GGS_XCodeAppTargetList & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

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

//--------------------------------- List constructor used by listmap
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
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_XCodeAppTargetList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
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

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_XCodeAppTargetList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_XCodeAppTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeAppTargetList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_XCodeAppTargetList_2E_element (void) ;

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

class cEnumerator_BuildFileList final : public cGenericAbstractEnumerator {
  public: cEnumerator_BuildFileList (const class GGS_BuildFileList & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

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

//--------------------------------- List constructor used by listmap
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
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_BuildFileList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_string & inOperand2
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

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_BuildFileList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_BuildFileList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_BuildFileList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_BuildFileList_2E_element (const GGS_string & in_mFileReference,
                                        const GGS_string & in_mFileName,
                                        const GGS_string & in_mBuildReference) ;

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

