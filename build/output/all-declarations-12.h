#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3OptionComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_OptionComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_ (class GALGAS_commandLineOptionListAST & ioArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_OptionComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_2 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GuiComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GuiComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                                 class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GALGAS_withLexiqueListAST & ioArgument0,
                                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GuiComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument0,
                                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument0,
                                                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_6 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3SyntaxComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_SyntaxComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_ (class GALGAS_syntaxInstructionAST & outArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GALGAS_syntaxRuleListAST & ioArgument0,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                       class GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GALGAS__32_lstringlist & outArgument0,
                                                                   class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                                                       C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (const GALGAS_lstring constinArgument0,
                                                                                    GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_syntaxRuleListAST & ioArgument0,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_17 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_18 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_19 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_20 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GrammarComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GrammarComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                   class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_ (class GALGAS_lstring & outArgument0,
                                                            class GALGAS_formalParameterListAST & ioArgument1,
                                                            class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument0,
                                                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProgramDeclarations' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProgramDeclarations (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProgramDeclarations_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProgramDeclarations_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_2 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ExpressionSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ExpressionSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_collection_5F_value_5F_element_ (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                 class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_ (class GALGAS_lstring & outArgument0,
                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                            class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GALGAS_semanticExpressionAST & outArgument0,
                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                  class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_term_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i6_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i7_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i11_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i12_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i12_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i12_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i13_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i13_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i13_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i14_ (GALGAS_semanticExpressionAST & outArgument0,
                                                             C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i14_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i14_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i15_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                   C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i15_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i15_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i16_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i17_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i18_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i18_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i19_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_optional_5F_type_i21_ (GALGAS_lstring & outArgument0,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_optional_5F_type_i21_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_optional_5F_type_i21_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i25_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i28_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i28_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i28_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i29_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i31_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i31_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i31_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i32_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i32_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i32_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i33_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i33_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i33_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i36_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ExpressionSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_12 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_13 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_14 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_15 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_16 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_17 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ParameterArgumentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ParameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GALGAS_actualParameterListAST & outArgument0,
                                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                                                   C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                          C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                                   C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_11 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4InstructionsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_InstructionsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GALGAS_actualParameterListAST & outArgument0,
                                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                             class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                              const class GALGAS_actualParameterListAST constinArgument1,
                                                              const class GALGAS_lstring constinArgument2,
                                                              const class GALGAS_lstring constinArgument3,
                                                              class GALGAS_semanticInstructionAST & outArgument4,
                                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_ (class GALGAS_ifExpressionList & outArgument0,
                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                         class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GALGAS_fixitListAST & outArgument0,
                                              class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                                            class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (const class GALGAS_bool constinArgument0,
                                                                                          class GALGAS_semanticInstructionAST & outArgument1,
                                                                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

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
  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i5_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i6_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i6_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i6_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_ (const GALGAS_bool constinArgument0,
                                                                                                                     GALGAS_semanticInstructionAST & outArgument1,
                                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i13_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i14_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                                       C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i14_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i14_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i16_ (GALGAS_fixitListAST & outArgument0,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i16_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i16_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i19_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i19_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i19_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i27_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i27_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i27_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_expression_i29_ (GALGAS_ifExpressionList & outArgument0,
                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_expression_i29_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_expression_i29_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i48_ (GALGAS_lstringlist & outArgument0,
                                                                         GALGAS_switchExtractedValuesListAST & outArgument1,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i48_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i48_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i54_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i54_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i54_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i55_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i55_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i55_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_InstructionsSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_12 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_13 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_14 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_15 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_16 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_17 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_18 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_19 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_20 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_21 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_22 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_23 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_24 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_25 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_26 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_27 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_28 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_29 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_30 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_31 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_32 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_33 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_34 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_35 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_36 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_37 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_38 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_39 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_40 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_41 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_42 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_43 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_44 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_45 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_46 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_47 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_48 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_49 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_50 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_51 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_52 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_53 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_54 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_55 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_56 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_57 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_58 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_59 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_60 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_61 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_62 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_63 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_64 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_65 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_66 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_67 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_68 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_69 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_70 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_71 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_72 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4DeclarationsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_DeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

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

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                      class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                     class GALGAS_galgasDeclarationAST & ioArgument1,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_ (class GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                     class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_galgasDeclarationAST & ioArgument0,
                                               class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                         C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument0,
                                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument0,
                                                                                        C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i7_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i8_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                     C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i10_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i11_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_ (GALGAS_string & outArgument0,
                                                                                              C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_ (GALGAS_string & outArgument0,
                                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i14_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                                                    C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i14_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i14_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i15_ (GALGAS_externTypeGetterList & ioArgument0,
                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i15_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i15_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i16_ (GALGAS_externTypeSetterList & ioArgument0,
                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i16_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i16_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i17_ (GALGAS_externTypeMethodList & ioArgument0,
                                                                               C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i17_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i17_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i18_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i20_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i23_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i23_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i23_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i24_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i24_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i24_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                                 C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i27_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i29_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i29_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i29_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i30_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i30_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i30_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i31_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i31_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i31_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i32_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i33_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i33_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i33_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i34_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i35_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i35_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i35_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i36_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i37_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i37_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i37_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i39_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i39_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i39_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i42_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i44_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_galgasDeclarationAST & ioArgument1,
                                                                                C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_1 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_2 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_3 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_4 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_5 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_6 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_7 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_8 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_9 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_10 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_11 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_12 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_13 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_14 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_15 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_16 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_17 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_18 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_19 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_20 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_21 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_22 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_23 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_24 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_25 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_26 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_27 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_28 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_29 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_30 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_31 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_32 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_33 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_34 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_35 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_36 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_37 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_38 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_39 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_40 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_41 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_42 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_43 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_44 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_45 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_46 (C_Lexique_galgasScanner *) = 0 ;


} ;

