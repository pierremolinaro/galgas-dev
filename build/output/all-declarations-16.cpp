#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 45)) ;
  GGS_lstring var_lexiqueComponentName_2478 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 48)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_2568 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_2632 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_2695 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_2751 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_2810 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_2882 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_2957 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_3018 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_3065 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2568, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2632, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_2695, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_2751, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_2810, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_2957, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_3018, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_3018, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_2882, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_3065, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_2478, GGS_bool (false), var_templateDelimitorList_2568, var_templateReplacementList_2632, var_lexicalAttributeList_2695, var_lexicalStyleList_2751, var_terminalDeclarationList_2810, var_lexicalMessageDeclarationList_2882, var_lexicalListDeclarationList_2957, var_lexicalRuleList_3018, var_indexingListAST_3065, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 102)) ;
  GGS_lstring var_lexiqueComponentName_4518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 105)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_4608 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_4672 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_4735 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_4791 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_4850 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_4922 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_4997 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_5058 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_5105 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_4608, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_4672, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_4735, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_4791, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_4850, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_4997, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5058, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5058, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_4922, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_5105, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 138)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_4518, GGS_bool (true), var_templateDelimitorList_4608, var_templateReplacementList_4672, var_lexicalAttributeList_4735, var_lexicalStyleList_4791, var_terminalDeclarationList_4850, var_lexicalMessageDeclarationList_4922, var_lexicalListDeclarationList_4997, var_lexicalRuleList_5058, var_indexingListAST_5105, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 158)) ;
  GGS_lstring var_indexName_6526 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 160)) ;
  GGS_lstring var_indexComment_6605 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 161)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_6526, var_indexComment_6605  COMMA_SOURCE_FILE ("lexique-component.galgas3", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 158)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 169)) ;
  GGS_lstring var_messageName_6936 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 171)) ;
  GGS_lstring var_messageValue_6985 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 172)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_6936, var_messageValue_6985  COMMA_SOURCE_FILE ("lexique-component.galgas3", 173)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 171)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 172)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 180)) ;
  GGS_lstring var_listName_7310 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 181)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_7310, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 182)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 180)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 181)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 188)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_7645 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_7645, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 190)) ;
  GGS_lexicalInstructionListAST var_instructionList_7710 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_7710, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 196)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_7645, var_instructionList_7710, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 197)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 188)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 190)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 203)) ;
  GGS_lexicalInstructionAST var_instruction_8170 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_8170, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_8170  COMMA_SOURCE_FILE ("lexique-component.galgas3", 205)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 203)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 211)) ;
  GGS_lexicalExpressionAST var_whileExpression_8476 ;
  nt_lexical_5F_expression_ (var_whileExpression_8476, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 213)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_8535 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_8535, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_8476, var_whileInstructionList_8535  COMMA_SOURCE_FILE ("lexique-component.galgas3", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 211)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 213)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lchar var_character_8960 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 225)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_8960, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 225)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_9288 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 232)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_9288, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_9609 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 239)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 240)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_9609, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 240)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_9981 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 247)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_9981, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 251)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_10135 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 255)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_10302 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_10302, inCompiler) ;
        var_functionActualArgumentList_10135.addAssignOperation (var_arg_10302  COMMA_SOURCE_FILE ("lexique-component.galgas3", 257)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 259)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_9981, var_functionActualArgumentList_10135, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 247)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 251)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 255)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 259)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 276)) ;
      GGS_lexicalExpressionAST var_rightExpression_10945 ;
      nt_lexical_5F_factor_ (var_rightExpression_10945, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_10945, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 276)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_string_11238 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 285)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_11238, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 285)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 292)) ;
  GGS_lstring var_string_11496 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 294)) ;
  GGS_lstring var_errorMessage_11537 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 295)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_11496, var_errorMessage_11537, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 295)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_11815 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 302)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_11815, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 306)) ;
    GGS_lchar var_upperBound_11942 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 307)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_11815, var_upperBound_11942, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 302)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 306)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 307)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_12243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 315)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_12243, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 315)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 322)) ;
  GGS_lstring var_name_12564 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 323)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_12606 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      GGS_lstring var_selector_12675 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 327)) ;
      GGS_lstring var_sentAttribute_12708 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 328)) ;
      var_sentAttributeList_12606.addAssignOperation (var_selector_12675, var_sentAttribute_12708  COMMA_SOURCE_FILE ("lexique-component.galgas3", 329)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_theStyle_12799 ;
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 333)) ;
    var_theStyle_12799 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 334)) ;
  } break ;
  case 2: {
    var_theStyle_12799 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 336)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  GGS_lstring var_errorMessage_13007 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 340)) ;
  GGS_lexicalListEntryListAST var_entryList_13036 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_13036, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 345)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 347)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_12564, var_theStyle_12799, var_errorMessage_13007, var_sentAttributeList_12606, var_entryList_13036  COMMA_SOURCE_FILE ("lexique-component.galgas3", 348)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 322)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 323)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 327)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 328)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 333)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 334)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 340)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 345)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 347)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_entrySpelling_13474 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 354)) ;
  GGS_bool var_isTemplateEndMark_13496 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_13530 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 359)) ;
      var_isTemplateEndMark_13496 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 362)) ;
      var_nonAtomicSelection_13530 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_13729 ;
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 367)) ;
    var_terminalSpelling_13729 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 368)) ;
  } break ;
  case 2: {
    var_terminalSpelling_13729 = var_entrySpelling_13474 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_13474, var_terminalSpelling_13729, var_nonAtomicSelection_13530, var_isTemplateEndMark_13496  COMMA_SOURCE_FILE ("lexique-component.galgas3", 372)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 354)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 359)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 362)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 367)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 368)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_ (GGS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_typeName_14258 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 382)) ;
  GGS_lstring var_name_14298 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 383)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_14258, var_name_14298  COMMA_SOURCE_FILE ("lexique-component.galgas3", 384)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 382)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 383)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_name_14582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 390)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_14624 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 394)) ;
      GGS_lstring var_selector_14717 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas3", 395)) ;
      GGS_lstring var_sentAttribute_14760 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 396)) ;
      var_sentAttributeList_14624.addAssignOperation (var_selector_14717, var_sentAttribute_14760  COMMA_SOURCE_FILE ("lexique-component.galgas3", 397)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_theStyle_14851 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas3", 399)) ;
  GGS_bool var_nonAtomicSelection_14909 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_14944 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 404)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_14851.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 406)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 406)) ;
        }
      }
      var_theStyle_14851 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 408)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 410)) ;
      var_nonAtomicSelection_14909 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 413)) ;
      var_templateEndMark_14944 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  GGS_lstring var_errorMessage_15336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 417)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_14582, var_sentAttributeList_14624, var_errorMessage_15336, var_theStyle_14851, var_nonAtomicSelection_14909, var_templateEndMark_14944  COMMA_SOURCE_FILE ("lexique-component.galgas3", 418)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 390)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 394)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 396)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 404)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 408)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 410)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 413)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas3", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 417)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 430)) ;
  GGS_lstring var_styleIdentifier_15771 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 431)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_15771.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 432)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15771.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas3", 433)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_15771.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 435)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15771.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 436)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 438)) ;
  GGS_lstring var_comment_16211 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 439)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_15771, var_comment_16211  COMMA_SOURCE_FILE ("lexique-component.galgas3", 440)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 430)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 431)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 438)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 439)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i23_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_1987 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_2072 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 41)) ;
    GGS_lstring var_searchListName_2130 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 42)) ;
    var_lexicalSendSearchList_1987.addAssignOperation (var_attributeName_2072, var_searchListName_2130  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 43)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 44)) ;
    if (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_2293 ;
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_2364 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 50)) ;
    var_lexicalSendDefaultAction_2293 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_2364, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 53)) ;
    GGS_lstring var_defaultErrorMessageName_2527 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 54)) ;
    var_lexicalSendDefaultAction_2293 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_2527, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_1987, var_lexicalSendDefaultAction_2293, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 41)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 44)) ;
    if (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 54)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_actionName_2994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 62)) ;
  GGS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_3054 = GGS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 67)) ;
      GGS_location var_passingModeLocation_3128 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 68)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_3260 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_3260, inCompiler) ;
      var_actualArgumentList_3054.addAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_3128, var_arg_3260, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 70)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 72)) ;
      GGS_location var_passingModeLocation_3383 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 73)) ;
      GGS_lstring var_attributeName_3453 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 74)) ;
      GGS_lexicalAttributeInputOutputArgumentAST var_arg_3477 = GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_3383, var_attributeName_3453, inCompiler COMMA_HERE) ;
      var_actualArgumentList_3054.addAssignOperation (var_arg_3477  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 76)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstringlist var_errorMessageList_3623 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 81)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_3726 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 83)) ;
      var_errorMessageList_3623.addAssignOperation (var_errorMessageName_3726  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 84)) ;
      if (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 86)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 89)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_2994, var_actualArgumentList_3054, var_errorMessageList_3623, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 67)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 81)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 83)) ;
      if (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 86)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 36)) ;
  GGS_lstring var_tagName_1884 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_1884, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 37)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_1997 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 40)) ;
    GGS_lexicalExpressionAST var_selectExpression_2104 ;
    nt_lexical_5F_expression_ (var_selectExpression_2104, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 42)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_2168 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_2168, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_1997.addAssignOperation (var_selectExpression_2104, var_selectInstructionList_2168  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 48)) ;
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 51)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_2425 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_2425, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 57)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_1997, var_defaultInstructionList_2425, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 40)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 42)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 51)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i27_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_1887 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 36)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_1887, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 35)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 37)) ;
  GGS_lstring var_tagName_1927 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 39)) ;
  GGS_lstring var_terminalName_1970 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 40)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_1927, var_terminalName_1970, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 38)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_2029 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  GGS_location var_location_2067 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2029, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_2211 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_2211, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 50)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2029, var_lexicalWhileBranchList_2211, var_location_2067, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 36)) ;
  GGS_lstring var_terminalName_1886 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_1886, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 36)) ;
  GGS_lstring var_warningMessageName_1896 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_1896, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 36)) ;
  GGS_lstring var_errorMessageName_1890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_1890, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 39)) ;
  GGS_lstring var_lexiqueComponentName_2055 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 42)) ;
  GGS_lstring var_lexiqueSuperComponentName_2115 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 45)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_2210 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_2274 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2210, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2274, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_2055, var_lexiqueSuperComponentName_2115, var_templateDelimitorList_2210, var_templateReplacementList_2274, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i35_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 67)) ;
  GGS_lstring var_startString_2953 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 68)) ;
  GGS_bool var_nonAtomicSelection_2973 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_3008 = GGS_bool (false) ;
  GGS_bool var_preserved_3040 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 74)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_2973.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 76)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 76)) ;
        }
      }
      var_nonAtomicSelection_2973 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 80)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_3008.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 82)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 82)) ;
        }
      }
      var_templateEndMark_3008 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 86)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_3040.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 88)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 88)) ;
        }
      }
      var_preserved_3040 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 92)) ;
  GGS_lstring var_endString_3608 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 93)) ;
  ioArgument_ioTemplateDelimitorList.addAssignOperation (var_startString_2953, var_nonAtomicSelection_2973, var_templateEndMark_3008, var_preserved_3040, var_endString_3608  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 74)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 80)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 86)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i36_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 105)) ;
  GGS_lstring var_matchString_4010 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 106)) ;
  GGS_lstring var_replacementString_4039 ;
  GGS_lstring var_replacementFunction_4074 ;
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 110)) ;
    var_replacementString_4039 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 112)) ;
    var_replacementFunction_4074 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 115)) ;
    var_replacementString_4039 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 116)) ;
    var_replacementFunction_4074 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 117)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssignOperation (var_matchString_4010, var_replacementString_4039, var_replacementFunction_4074  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 106)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 112)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 116)) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 29)) ;
  GGS_lstring var_optionComponentName_1574 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 31)) ;
  GGS_commandLineOptionListAST var_options_1636 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_1636, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 37)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_1574, var_options_1636, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_2097 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 48)) ;
  GGS_lstring var_mOptionInternalName_2144 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 50)) ;
  GGS_lchar var_mOptionInvocationLetter_2197 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 52)) ;
  GGS_lstring var_mOptionInvocationString_2258 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 54)) ;
  GGS_lstring var_mOptionComment_2320 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 55)) ;
  GGS_lstring var_defaultValue_2343 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 56)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_2424 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2424 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 61)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2343 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 63)) ;
      var_optionDefaultValueKind_2424 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 64)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_2663 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 66)) ;
      var_defaultValue_2343 = GGS_lstring::init_21__21_ (var_v_2663.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas3", 67)), var_v_2663.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_2424 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 68)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_2097, var_mOptionInternalName_2144, var_mOptionInvocationLetter_2197, var_mOptionInvocationString_2258, var_mOptionComment_2320, var_defaultValue_2343, var_optionDefaultValueKind_2424  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 55)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 61)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 66)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 122)) ;
  GGS_lstring var_mGUIName_4676 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 124)) ;
  GGS_lstringlist var_importedOptionList_4714 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_4774 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_4831 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_4892 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 131)) ;
      GGS_lstring var_fileExtension_4978 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 134)) ;
      GGS_lstring var_indexingPathSuffix_5042 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 135)) ;
      var_projectExtensionList_4892.addAssignOperation (var_fileExtension_4978, var_indexingPathSuffix_5042  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 136)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4774, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4714, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4831, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 145)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_4676, var_importedOptionList_4714, var_simpleGlobalAttributes_4774, var_withLexiqueList_4831, var_projectExtensionList_4892  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 135)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 158)) ;
  GGS_lstring var_lexiqueReference_5748 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 159)) ;
  GGS_guiLabelListAST var_labels_5790 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_5838 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_5898 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 166)) ;
      GGS_uint var_displayStyle_5982 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5982 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 171)) ;
        var_displayStyle_5982 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_6121 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_6191 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 176)) ;
        GGS_uint var_displayFlags_6218 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6218 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 181)) ;
          var_displayFlags_6218 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 184)) ;
          GGS_lbigint var_leadingStrip_6411 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 185)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6411.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 186)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6411.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 187)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 189)) ;
          GGS_lbigint var_endingStrip_6588 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 190)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6588.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 191)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6588.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 192)) ;
            }
          }
          var_displayFlags_6218 = var_leadingStrip_6411.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)).operator_or (var_endingStrip_6588.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 194)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 195)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_6121.addAssignOperation (var_terminal_6191, var_displayFlags_6218  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 197)) ;
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 199)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5790.addAssignOperation (var_displayStyle_5982, var_terminalList_6121, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 201))  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 201)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_6993 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 203)) ;
      GGS_lstring var_name_7028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 204)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 205)) ;
      GGS_lstring var_value_7053 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 206)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_7138 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 208)) ;
        var_value_7053 = GGS_lstring::init_21__21_ (var_value_7053.readProperty_string ().add_operation (var_v_7138.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 209)), var_v_7138.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5898.addAssignOperation (var_key_6993, var_name_7028, var_value_7053  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 212)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_7315 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 215)) ;
      GGS_lstring var_value_7361 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 216)) ;
      var_simpleAttributes_5838.addAssignOperation (var_name_7315, var_value_7361  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 217)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 219)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_5748, var_labels_5790, var_simpleAttributes_5838, var_compoundAttributes_5898  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 220)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 166)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 171)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 176)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 181)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 184)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 185)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 189)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 190)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 195)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 199)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 204)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 205)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 208)) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 215)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 216)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 227)) ;
  GGS_lstring var_optionReference_7751 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 228)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_7751  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 228)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mKey_8032 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 236)) ;
  GGS_lstring var_mValue_8053 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 237)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_8126 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 239)) ;
    var_mValue_8053 = GGS_lstring::init_21__21_ (var_mValue_8053.readProperty_string ().add_operation (var_value_8126.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 240)), var_value_8126.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_8032, var_mValue_8053  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 243)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 239)) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 46)) ;
  GGS_lstring var_syntaxComponentName_2594 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 47)) ;
  GGS_lstring var_importedLexiqueReference_2656 ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_2656 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 53)) ;
    var_importedLexiqueReference_2656 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 55)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_2858 ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2858 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 62)) ;
    var_hasTranslateFeature_2858 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 65)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3035 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_3106 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3035, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3106, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 76)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_2594, var_importedLexiqueReference_2656, var_nonterminalDeclarationList_3035, var_ruleList_3106, var_hasTranslateFeature_2858  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 77)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 47)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 54)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 62)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 91)) ;
  GGS_lstring var_syntaxComponentName_3896 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 93)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3961 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_4032 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3961, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_4032, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 104)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_3896.readProperty_string (), var_syntaxComponentName_3896, var_nonterminalDeclarationList_3961, var_ruleList_4032, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 105)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 93)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 119)) ;
  GGS_lstring var_mNonterminalName_4909 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 120)) ;
  GGS_nonTerminalLabelListAST var_labels_4983 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_5052 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_5052, inCompiler) ;
  var_labels_4983.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 123)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_5052, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 123))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 126)) ;
      GGS_lstring var_labelName_5213 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 127)) ;
      GGS_formalParameterListAST var_formalParameters_5305 ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameters_5305, inCompiler) ;
      var_labels_4983.addAssignOperation (var_labelName_5213, var_formalParameters_5305, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 129))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_4909, var_labels_4983  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 119)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 120)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 127)) ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                const GGS_lstring constinArgument_inLabelName,
                                                                                                                GGS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  GGS_formalParameterListAST var_formalParameters_5952 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameters_5952, inCompiler) ;
  GGS_location var_endOfArguments_5977 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 143)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_6097 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_6097, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameters_5952, var_endOfArguments_5977, var_mSyntaxInstructionList_6097, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 150))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 143)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 157)) ;
  GGS_lstring var_mNonterminalName_6523 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 158)) ;
  GGS_lstring var_labelName_6572 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 159)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_6623 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_6572, var_mLabelList_6623, inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 164)) ;
      var_labelName_6572 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 165)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_6523, var_mLabelList_6623  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 167)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 157)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 158)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 164)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 165)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GGS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GGS_semanticInstructionAST var_instruction_7457 ;
        nt_semantic_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7457, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_7457  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 184)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_7589 ;
        nt_syntax_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7589, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_7589  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 187)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 191)) ;
        } break ;
        case 2: {
          GGS_string var_separator_7730 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 193)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_7730.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 194)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 194)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 195)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 195)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 191)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 26)) ;
  GGS_location var_instructionLocation_1506 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 27)) ;
  GGS_semanticExpressionAST var_sentExpression_1610 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sentExpression_1610, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_1506, var_sentExpression_1610, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 26)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mNonterminalName_1518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 26)) ;
  GGS_actualParameterListAST var_mActualParameterList_1637 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mActualParameterList_1637, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_1779 ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_1779 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 33)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_1779, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21_ (var_mNonterminalName_1518.readProperty_location (), var_mNonterminalName_1518, var_mActualParameterList_1637, var_grammarInstructionSyntaxDirectedTranslationResult_1779, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 26)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 33)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_1520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 26)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_1650 ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualInputParameterList_1650, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_1716 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1716, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1851 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1981 ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1851 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1981 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1851, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1981, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_1520.readProperty_location (), var_terminalName_1520, var_actualInputParameterList_1650, var_indexNameList_1716, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1851, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1981, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_3163 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 58)) ;
      GGS_lstring var_postfixName_3225 ;
      switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
        var_postfixName_3225 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas3", 61)) ;
      } break ;
      case 2: {
        var_postfixName_3225 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 63)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_3163, var_postfixName_3225  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 65)) ;
      if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 67)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 58)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 63)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 67)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 37)) ;
  GGS_location var_mSelectInstructionLocation_1996 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 38)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_2048 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_2180 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2180, inCompiler) ;
  var_mSelectBranchList_2048.addAssignOperation (var_il_2180, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 41))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 43)) ;
    GGS_syntaxInstructionList var_instructionList_2332 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2332, inCompiler) ;
    var_mSelectBranchList_2048.addAssignOperation (var_instructionList_2332, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 45))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 45)) ;
    if (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 48)) ;
  GGS_location var_endOf_5F_select_5F_instruction_2444 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 49)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_1996, var_mSelectBranchList_2048, var_endOf_5F_select_5F_instruction_2444, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 37)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 43)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 39)) ;
  GGS_location var_mRepeatInstructionLocation_2120 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 40)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_2244 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_2244, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_2277 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 42)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_2330 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 45)) ;
    GGS_syntaxInstructionList var_mInstructionList_2489 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_2489, inCompiler) ;
    var_mRepeatBranchList_2330.addAssignOperation (var_mInstructionList_2489, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 47))  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 50)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_2604 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 51)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_2120, var_mRepeatedInstructionList_2244, var_endOf_5F_repeated_5F_instructions_2277, var_mRepeatBranchList_2330, var_endOf_5F_repeat_5F_instruction_2604, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 39)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 50)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lbool var_hasIndexing_1956 ;
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1956 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 37)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_1956 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 39)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 42)) ;
  GGS_lstring var_mGrammarName_2159 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 43)) ;
  GGS_lstring var_mGrammarClass_2237 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 44)) ;
  GGS_bool var_hasTranslateFeature_2291 ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2291 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 50)) ;
    var_hasTranslateFeature_2291 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 53)) ;
  GGS_lstringlist var_syntaxComponents_2468 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 57)) ;
    GGS_lstring var_syntaxComponent_2550 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 58)) ;
    var_syntaxComponents_2468.addAssignOperation (var_syntaxComponent_2550  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 59)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mStartSymbol_2683 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 63)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_2727 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 65)), inCompiler COMMA_HERE), var_mLabelList_2727, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 68)) ;
      GGS_lstring var_labelName_2936 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, var_labelName_2936, var_mLabelList_2727, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_3080 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 76)) ;
      GGS_lstring var_nonterminalSymbolName_3194 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 77)) ;
      var_mUnusedNonterminalList_3080.addAssignOperation (var_nonterminalSymbolName_3194  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 78)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_1956, var_mGrammarName_2159, var_mGrammarClass_2237, var_syntaxComponents_2468, var_mStartSymbol_2683, var_mLabelList_2727, var_mUnusedNonterminalList_3080, var_hasTranslateFeature_2291, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 44)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 50)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 57)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 58)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 63)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 68)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 77)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                         const GGS_lstring constinArgument_inLabelName,
                                                                                                                                         GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GGS_stringset var_argumentNameSet_3949 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_mFormalParameterList_4003 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      GGS_lstring var_argumentName_4109 ;
      nt_label_5F_formal_5F_parameter_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentName_4109, var_mFormalParameterList_4003, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_3949.getter_hasKey (var_argumentName_4109.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 104)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_4109.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_4109.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 105)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 105)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 105)) ;
        }
      }
      var_argumentNameSet_3949.plusPlusAssignOperation (var_argumentName_4109.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameterList_4003, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 109))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      nt_label_5F_formal_5F_parameter_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_4786 ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_4786 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 121)) ;
    var_selector_4786 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 122)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 126)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_4981 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_4981, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 131)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 133)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_4786, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 136)), var_mTypeName_4981, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 121)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 126)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_5572 ;
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
    var_selector_5572 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 151)) ;
    var_selector_5572 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 152)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 154)) ;
  GGS_lstring var_mTypeName_5739 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_5739, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 158)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 160)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_5572, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 163)), var_mTypeName_5739, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 151)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 154)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 158)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_6354 ;
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_selector_6354 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 176)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 178)) ;
    var_selector_6354 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 179)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_6513 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_6513, inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 184)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 186)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_6354, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 189)), var_mTypeName_6513, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 176)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 178)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 184)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 186)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_lstring & outArgument_outArgumentName,
                                                                                                                                  GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_7129 ;
  switch (select_galgas_33_GrammarComponentSyntax_13 (inCompiler)) {
  case 1: {
    var_selector_7129 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 202)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 204)) ;
    var_selector_7129 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 205)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mTypeName_7286 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_7286, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 208)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_7129, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 211)), var_mTypeName_7286, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 209)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 202)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 204)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 208)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 38)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_2139 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2139, inCompiler) ;
  GGS_location var_endOfPrologue_2173 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 41)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_2139, var_endOfPrologue_2173  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 53)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_2718 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_prologueInstructionList_2718, inCompiler) ;
  GGS_location var_endOfPrologue_2750 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 56)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_2718, var_endOfPrologue_2750  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 53)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 68)) ;
  GGS_lstring var_mSourceFileExtension_3243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 70)) ;
  GGS_lstring var_mSourceFileHelp_3307 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 71)) ;
  GGS_lstring var_referenceGrammar_3366 ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3366 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas3", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 77)) ;
    var_referenceGrammar_3366 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 78)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_3540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 81)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_3540.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3540.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 83)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_3744 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 87)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_3744.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3744.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 89)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_3898 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3898 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 96)) ;
    var_isUnused_3898 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_4024 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 101)) ;
  GGS_semanticInstructionListAST var_mInstructionList_4151 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_4151, inCompiler) ;
  GGS_location var_endOfInstructionList_4176 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 104)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_3243, var_mSourceFileHelp_3307, var_mSourceFileVariableName_4024, var_isUnused_3898, var_referenceGrammar_3366, var_mInstructionList_4151, var_endOfInstructionList_4176  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 71)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 81)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 87)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 96)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 101)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 104)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 66)) ;
  nt_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 66)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_classFuncName_3108 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas3", 76)) ;
  GGS_location var_startOfExpression_3155 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas3", 78)) ;
  GGS_actualOutputArgumentList var_expressionList_3224 ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    var_expressionList_3224 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 83)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3224, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 85)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_3384 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas3", 87)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startOfExpression_3155, inCompiler COMMA_HERE), var_classFuncName_3108, var_expressionList_3224, var_startOfExpression_3155.getter_union (var_endOfExpression_3384, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas3", 92)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas3", 76)) ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 83)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                                const GGS_lstring constinArgument_inClassFunctionName,
                                                                                                                                GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_actualOutputArgumentList var_expressionList_4059 ;
  GGS_location var_startOfExpression_4082 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas3", 104)) ;
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
    var_expressionList_4059 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 108)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4059, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 110)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_4262 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas3", 112)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (constinArgument_inTypeName, constinArgument_inClassFunctionName, var_expressionList_4059, var_startOfExpression_4082.getter_union (var_endOfExpression_4262, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas3", 117)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 108)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 110)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_startLocation_2331 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 55)) ;
  GGS_collectionValueElementList var_expressionList_2406 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_2524 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2524, inCompiler) ;
      var_expressionList_2406.addAssignOperation (var_expression_2524, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 61))  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 61)) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startLocation_2331, inCompiler COMMA_HERE), var_expressionList_2406, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 66)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 55)) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                 GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 75)) ;
  GGS_collectionValueElementList var_expressionList_3076 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_3194 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_3194, inCompiler) ;
      var_expressionList_3076.addAssignOperation (var_expression_3194, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 81))  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 81)) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_3076, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 86)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 75)) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_2050 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas3", 42)) ;
  outArgument_outExpression = GGS_varInExpressionAST::init_21_ (var_identifier_2050, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_4874 ;
      switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        var_selector_4874 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 126)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 128)) ;
        var_selector_4874 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 129)) ;
      } break ;
      case 3: {
        var_selector_4874 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 131)) ;
      } break ;
      default:
        break ;
      }
      GGS_semanticExpressionAST var_expression_5103 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_5103, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (var_selector_4874, var_expression_5103, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 134))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 134)) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 136)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 126)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 128)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 136)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_selector_5556 ;
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      var_selector_5556 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 150)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 152)) ;
      var_selector_5556 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 153)) ;
    } break ;
    case 3: {
      var_selector_5556 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 155)) ;
    } break ;
    default:
      break ;
    }
    GGS_semanticExpressionAST var_expression_5767 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_5767, inCompiler) ;
    outArgument_outExpressionList.addAssignOperation (var_selector_5556, var_expression_5767, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 158))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 158)) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 150)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 152)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 74)) ;
  GGS_lstring var_optionComponentName_3203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 76)) ;
  GGS_lstring var_optionName_3287 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 78)) ;
  GGS_lstring var_getterName_3328 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 79)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (var_optionComponentName_3203, var_optionName_3287, var_getterName_3328, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 74)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 89)) ;
  GGS_lstring var_optionName_3705 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 91)) ;
  GGS_lstring var_getterName_3746 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 92)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 93)), inCompiler COMMA_HERE), var_optionName_3705, var_getterName_3746, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_2489 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas3", 52)) ;
  outArgument_outExpression = GGS_literalCharExpressionAST::init_21_ (var_literalChar_2489, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas3", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_2499 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas3", 52)) ;
  outArgument_outExpression = GGS_literalBigIntExpressionAST::init_21_ (var_literalInt_2499, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas3", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_stringlist var_literalStringList_2675 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_2732 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 60)) ;
    var_literalStringList_2675.addAssignOperation (var_literalString_2732.readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 61)) ;
    if (select_galgas_34_ExpressionSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_literalStringExpressionAST::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 64)), var_literalStringList_2675, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 60)) ;
    if (select_galgas_34_ExpressionSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i13_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 59)) ;
  GGS_lstring var_lexiqueName_2661 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 61)) ;
  GGS_lstring var_getterName_2703 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 62)) ;
  outArgument_outExpression = GGS_lexiqueIntrospectionExpressionAST::init_21__21_ (var_lexiqueName_2661, var_getterName_2703, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2594 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas3", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_2594, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas3", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas3", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_notExpressionAST::init_21__21_ (var_operatorLocation_2582, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas3", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2611 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas3", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_2611, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas3", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 92)) ;
  GGS_lstring var_filewrapperName_3743 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_3743, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
    case 1: {
      GGS_lstring var_filePath_3951 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 99)) ;
      outArgument_outExpression = GGS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_3743, var_filePath_3951, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_filewrapperTemplateName_4115 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 106)) ;
      GGS_actualOutputArgumentList var_expressionList_4232 ;
      nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4232, inCompiler) ;
      outArgument_outExpression = GGS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_3743, var_filewrapperTemplateName_4115, var_expressionList_4232, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 99)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 106)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_3797 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3797, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_3797, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 94)) ;
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_3958 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas3", 96)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_3797, var_classFuncName_3958, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_3797, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 94)) ;
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas3", 96)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i19_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                               GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                               GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_t_4595 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4595, inCompiler) ;
  GGS_lstring var_typeName_4605 = function_makeEmbeddedTypeLName (constinArgument_inTypeName, var_t_4595, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas3", 111)) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_4605, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 115)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_4821 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas3", 117)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_4605, var_classFuncName_4821, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_4605, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 115)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas3", 117)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 131)) ;
  GGS_location var_initLocation_5421 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 132)) ;
  GGS_actualOutputArgumentList var_expressionList_5502 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_5502, inCompiler) ;
  GGS_location var_endOfExpression_5525 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 135)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_initLocation_5421, inCompiler COMMA_HERE), var_expressionList_5502, var_endOfExpression_5525, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 131)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 149)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 149)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i22_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                  GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 158)) ;
  GGS_actualOutputArgumentList var_expressionList_6492 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_6492, inCompiler) ;
  GGS_location var_endOfExpression_6515 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 161)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_6492, var_endOfExpression_6515, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 158)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 173)) ;
  GGS_location var_endOfExpression_6910 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 174)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 175)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_endOfExpression_6910, inCompiler COMMA_HERE), GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE), var_endOfExpression_6910, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 173)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 175)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas3", 52)) ;
  outArgument_outExpression = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas3", 53)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas3", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5195 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5249 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5337 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5337, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionAST::init_21__21__21_ (var_operatorLocation_5195, var_leftOperand_5249, var_rightOperand_5337, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5468 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5523 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5611 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5611, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_5468, var_leftOperand_5523, var_rightOperand_5611, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5752 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5806 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5871 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5871, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionAST::init_21__21__21_ (var_operatorLocation_5752, var_leftOperand_5806, var_rightOperand_5871, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_5996 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6051 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6116 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6116, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_5996, var_leftOperand_6051, var_rightOperand_6116, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6251 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6307 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6372 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6372, inCompiler) ;
      outArgument_outExpression = GGS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_6251, var_leftOperand_6307, var_rightOperand_6372, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 121)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 127)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 133)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 139)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 145)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 66)) ;
  outArgument_outExpression = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 67)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 74)) ;
  outArgument_outExpression = GGS_falseExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 75)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2592 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas3", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_2592, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas3", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                          GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_endOfReceiverExpression_3921 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas3", 108)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas3", 109)) ;
    GGS_lstring var_typeName_3992 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 110)) ;
    outArgument_outExpression = GGS_testDynamicClassInExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_3921, GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas3", 114)), var_typeName_3992, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_endOfReceiverExpression_4177 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas3", 118)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas3", 119)) ;
    GGS_lstring var_typeName_4248 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 120)) ;
    outArgument_outExpression = GGS_castInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_4177, var_typeName_4248, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas3", 109)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 110)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas3", 119)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 120)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2596 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 56)) ;
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 58)) ;
  outArgument_outExpression = GGS_bangExpressionAST::init_21__21_ (var_operatorLocation_2596, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5710 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 135)) ;
      GGS_semanticExpressionAST var_leftOperand_5765 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5828 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_5828, inCompiler) ;
      outArgument_outExpression = GGS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5710, var_leftOperand_5765, var_rightOperand_5828, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5954 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 141)) ;
      GGS_semanticExpressionAST var_leftOperand_6009 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6072 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6072, inCompiler) ;
      outArgument_outExpression = GGS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5954, var_leftOperand_6009, var_rightOperand_6072, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_6199 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 146)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 147)) ;
      GGS_semanticExpressionAST var_leftOperand_6253 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6316 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6316, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionAST::init_21__21__21_ (var_operatorLocation_6199, var_leftOperand_6253, var_rightOperand_6316, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6436 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 153)) ;
      GGS_semanticExpressionAST var_leftOperand_6491 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6554 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6554, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6436, var_leftOperand_6491, var_rightOperand_6554, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6684 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 158)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 159)) ;
      GGS_semanticExpressionAST var_leftOperand_6738 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6801 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6801, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionAST::init_21__21__21_ (var_operatorLocation_6684, var_leftOperand_6738, var_rightOperand_6801, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_6921 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 164)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 165)) ;
      GGS_semanticExpressionAST var_leftOperand_6976 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7039 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_7039, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6921, var_leftOperand_6976, var_rightOperand_7039, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 135)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 141)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 147)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 153)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 159)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 165)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5187 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5241 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5314 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5314, inCompiler) ;
      outArgument_outExpression = GGS_orExpressionAST::init_21__21__21_ (var_operatorLocation_5187, var_leftOperand_5241, var_rightOperand_5314, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5433 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5488 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5561 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5561, inCompiler) ;
      outArgument_outExpression = GGS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_5433, var_leftOperand_5488, var_rightOperand_5561, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5685 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5739 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5812 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5812, inCompiler) ;
      outArgument_outExpression = GGS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_5685, var_leftOperand_5739, var_rightOperand_5812, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_5932 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_5988 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6061 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6061, inCompiler) ;
      outArgument_outExpression = GGS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_5932, var_leftOperand_5988, var_rightOperand_6061, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6189 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6245 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6318 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6318, inCompiler) ;
      outArgument_outExpression = GGS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_6189, var_leftOperand_6245, var_rightOperand_6318, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 121)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 127)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 133)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 139)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 145)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 83)) ;
      GGS_actualOutputArgumentList var_expressionList_3279 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3279, inCompiler) ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionAST::init_21__21__21_ (outArgument_outExpression, var_expressionList_3279, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 90)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 92)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 94)) ;
      GGS_lstring var_structFieldName_3476 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 95)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
        outArgument_outExpression = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_3476.readProperty_location (), outArgument_outExpression, var_structFieldName_3476, inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        GGS_lstring var_getterName_3705 = var_structFieldName_3476 ;
        GGS_location var_startLocation_3746 = GGS_location::class_func_next (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 104)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 105)) ;
        GGS_actualOutputArgumentList var_expressionList_3870 ;
        nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3870, inCompiler) ;
        GGS_location var_endLocation_3897 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 107)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 108)) ;
        outArgument_outExpression = GGS_getterCallExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_getterName_3705, var_expressionList_3870, var_startLocation_3746.getter_union (var_endLocation_3897, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 113)), inCompiler COMMA_HERE) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 83)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 92)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 95)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 105)) ;
        nt_output_5F_expression_5F_list_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 108)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 53)) ;
  GGS_lstring var_typeName_2513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 54)) ;
  outArgument_outExpression = GGS_literalTypeInExpressionAST::init_21_ (var_typeName_2513, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2106 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas3", 45)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_tildeExpressionAST::init_21__21_ (var_operatorLocation_2106, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas3", 45)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i36_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_2513 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas3", 53)) ;
  outArgument_outExpression = GGS_literalDoubleExpressionAST::init_21_ (var_literalDouble_2513, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_24 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5222 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5277 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5353 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5353, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5222, var_leftOperand_5277, GGS_comparison::class_func_equal (SOURCE_FILE ("expression-comparison.galgas3", 124)), var_rightOperand_5353, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5488 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5543 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5619 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5619, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5488, var_leftOperand_5543, GGS_comparison::class_func_notEqual (SOURCE_FILE ("expression-comparison.galgas3", 130)), var_rightOperand_5619, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5757 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5812 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5888 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5888, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5757, var_leftOperand_5812, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas3", 136)), var_rightOperand_5888, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6030 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6085 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6161 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6161, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6030, var_leftOperand_6085, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas3", 142)), var_rightOperand_6161, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6305 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6359 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6435 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6435, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6305, var_leftOperand_6359, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("expression-comparison.galgas3", 148)), var_rightOperand_6435, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_6576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 150)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 151)) ;
      GGS_semanticExpressionAST var_leftOperand_6630 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6706 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6706, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6576, var_leftOperand_6630, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("expression-comparison.galgas3", 154)), var_rightOperand_6706, inCompiler COMMA_HERE) ;
    } break ;
    case 8: {
      GGS_location var_operatorLocation_6845 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 156)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 157)) ;
      GGS_semanticExpressionAST var_leftOperand_6901 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6977 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6977, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6845, var_leftOperand_6901, GGS_comparison::class_func_sameInstance (SOURCE_FILE ("expression-comparison.galgas3", 160)), var_rightOperand_6977, inCompiler COMMA_HERE) ;
    } break ;
    case 9: {
      GGS_location var_operatorLocation_7119 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 162)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 163)) ;
      GGS_semanticExpressionAST var_leftOperand_7175 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7251 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_7251, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_7119, var_leftOperand_7175, GGS_comparison::class_func_differentInstances (SOURCE_FILE ("expression-comparison.galgas3", 166)), var_rightOperand_7251, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 121)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 127)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 133)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 139)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 145)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 151)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 157)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 163)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_3472 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 83)) ;
  GGS_actualOutputArgumentList var_expressionList_3592 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3592, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 85)) ;
  outArgument_outExpression = GGS_functionCallExpressionAST::init_21__21_ (var_functionName_3472, var_expressionList_3592, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 83)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 67)) ;
  GGS_semanticExpressionAST var_ifExpression_2945 ;
  nt_expression_ (ioArgument_ioDeclarations, var_ifExpression_2945, inCompiler) ;
  GGS_location var_operatorLocation_2966 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 70)) ;
  GGS_semanticExpressionAST var_thenExpression_3050 ;
  nt_expression_ (ioArgument_ioDeclarations, var_thenExpression_3050, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 72)) ;
  GGS_semanticExpressionAST var_elseExpression_3115 ;
  nt_expression_ (ioArgument_ioDeclarations, var_elseExpression_3115, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 74)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21_ (var_operatorLocation_2966, var_ifExpression_2945, var_thenExpression_3050, var_elseExpression_3115, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 67)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 70)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3520 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas3", 78)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 79)) ;
      GGS_semanticExpressionAST var_leftOperand_3574 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3671 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3671, inCompiler) ;
      outArgument_outExpression = GGS_andExpressionAST::init_21__21__21_ (var_operatorLocation_3520, var_leftOperand_3574, var_rightOperand_3671, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3791 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas3", 84)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 85)) ;
      GGS_semanticExpressionAST var_leftOperand_3846 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3943 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3943, inCompiler) ;
      outArgument_outExpression = GGS_andShortExpressionAST::init_21__21__21_ (var_operatorLocation_3791, var_leftOperand_3846, var_rightOperand_3943, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 79)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 85)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i41_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas3", 44)) ;
  outArgument_outExpression = GGS_nilExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-nil.galgas3", 45)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas3", 44)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GGS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 470)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_15138 ;
      GGS_formalArgumentPassingModeAST var_formalParameterPassingMode_15189 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_15138 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 477)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
          var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 479)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 481)) ;
          var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 482)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 484)) ;
          var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 485)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 488)) ;
        var_selector_15138 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 489)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
        case 1: {
          var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 491)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 493)) ;
          var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 494)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 496)) ;
          var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 497)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 500)) ;
        var_selector_15138 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 501)) ;
        var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 502)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 504)) ;
        var_selector_15138 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 505)) ;
        var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 506)) ;
      } break ;
      case 5: {
        var_selector_15138 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 508)) ;
        var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 509)) ;
      } break ;
      case 6: {
        var_selector_15138 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 511)) ;
        var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 512)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 514)) ;
        var_selector_15138 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 515)) ;
        var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 516)) ;
      } break ;
      case 8: {
        var_selector_15138 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 518)) ;
        var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 519)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 521)) ;
        var_selector_15138 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 522)) ;
        var_formalParameterPassingMode_15189 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 523)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_16655 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_16655, inCompiler) ;
      GGS_bool var_isUnused_16697 ;
      switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
      case 1: {
        var_isUnused_16697 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 530)) ;
        var_isUnused_16697 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterName_16851 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 533)) ;
      outArgument_outFormalParameterList.addAssignOperation (var_selector_15138, var_formalParameterPassingMode_15189, var_formalParameterTypeName_16655, var_formalParameterName_16851, var_isUnused_16697  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 534)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 541)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 544)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 470)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 477)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 481)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 484)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 488)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 493)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 496)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 500)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 504)) ;
      } break ;
      case 5: {
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 511)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 514)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 518)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 521)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 530)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 533)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 541)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 544)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                                 GGS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 553)) ;
  outArgument_outActualParameterList = GGS_actualParameterListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_ (ioArgument_ioDeclarations, outArgument_outActualParameterList, inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 560)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 563)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 553)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 560)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 563)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_18133 ;
  switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
  case 1: {
    var_selector_18133 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 574)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 576)) ;
    var_selector_18133 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 577)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 580)) ;
    GGS_lstringlist var_poisonedVarNameList_18284 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_18284, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputSingleJokerActualParameterAST::init_21__21_ (var_selector_18133, var_poisonedVarNameList_18284, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 582)) ;
  } break ;
  case 2: {
    GGS_lbigint var_count_18436 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 584)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 585)) ;
    GGS_uint var_n_18462 = var_count_18436.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 586)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_18133.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?")) ;
        inCompiler->emitSemanticError (var_selector_18133.readProperty_location (), GGS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 588)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_n_18462.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_count_18436.readProperty_location (), GGS_string ("the count value should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 591)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      if (var_n_18462.isValid ()) {
        uint32_t variant_18699 = var_n_18462.uintValue () ;
        bool loop_18699 = true ;
        while (loop_18699) {
          loop_18699 = GGS_bool (ComparisonKind::greaterThan, var_n_18462.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
          if (loop_18699) {
            loop_18699 = GGS_bool (ComparisonKind::greaterThan, var_n_18462.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_18699 && (0 == variant_18699)) {
            loop_18699 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 593)) ;
          }
          if (loop_18699) {
            variant_18699 -= 1 ;
            ioArgument_ioActualParameterList.addAssignOperation (GGS_inputJokerActualParameterAST::init_21__21_ (var_selector_18133.readProperty_location (), var_n_18462, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 595)) ;
            var_n_18462.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 596)) ;
          }
        }
      }
    }
  } break ;
  case 3: {
    GGS_lstring var_inputActualParameterName_18891 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 600)) ;
    GGS_lstringlist var_poisonedVarNameList_18947 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_18947, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualExistingVariableParameterAST::init_21__21__21_ (var_selector_18133, var_inputActualParameterName_18891, var_poisonedVarNameList_18947, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 602)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 608)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 609)) ;
    GGS_lstring var_inputActualParameterName_19219 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 610)) ;
    GGS_lstringlist var_poisonedVarNameList_19275 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_19275, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualSelfPropertyParameterAST::init_21__21__21_ (var_selector_18133, var_inputActualParameterName_19219, var_poisonedVarNameList_19275, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 612)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 618)) ;
    GGS_lstringlist var_poisonedVarNameList_19531 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_19531, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualSelfParameterAST::init_21__21__21_ (var_selector_18133, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 622)), var_poisonedVarNameList_19531, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 620)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 626)) ;
    GGS_lstring var_declarationTypeName_19755 ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
      var_declarationTypeName_19755 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 629)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_19755, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_19936 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 633)) ;
    GGS_lstringlist var_poisonedVarNameList_19992 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_19992, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_18133, var_declarationTypeName_19755, var_inputActualParameterName_19936, var_poisonedVarNameList_19992, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 635)) ;
  } break ;
  case 7: {
    GGS_lstring var_declarationTypeName_20301 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_20301, inCompiler) ;
    GGS_lstring var_inputActualParameterName_20345 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 643)) ;
    GGS_lstringlist var_poisonedVarNameList_20401 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_20401, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_18133, var_declarationTypeName_20301, var_inputActualParameterName_20345, var_poisonedVarNameList_20401, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 645)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 652)) ;
    GGS_lstring var_declarationTypeName_20680 ;
    switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
    case 1: {
      var_declarationTypeName_20680 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 655)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_20680, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_bool var_markedAsUnused_20853 ;
    switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
    case 1: {
      var_markedAsUnused_20853 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 663)) ;
      var_markedAsUnused_20853 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_21002 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 666)) ;
    GGS_lstringlist var_poisonedVarNameList_21058 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_21058, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualNewConstantParameterAST::init_21__21__21__21__21_ (var_selector_18133, var_declarationTypeName_20680, var_inputActualParameterName_21002, var_markedAsUnused_20853, var_poisonedVarNameList_21058, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 668)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 574)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 576)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 580)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 584)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 585)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 600)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 608)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 609)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 610)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 618)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 626)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 633)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 643)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 652)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 663)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 666)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_21700 ;
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    var_selector_21700 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 686)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 688)) ;
    var_selector_21700 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 689)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    GGS_lstring var_outputInputActualParameterName_21836 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 692)) ;
    GGS_lstringlist var_structAttributeList_21877 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 696)) ;
        GGS_lstring var_structAttributeName_21978 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 697)) ;
        var_structAttributeList_21877.addAssignOperation (var_structAttributeName_21978  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 698)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    ioArgument_ioActualParameterList.addAssignOperation (GGS_outputInputActualParameterAST::init_21__21__21_ (var_selector_21700, var_outputInputActualParameterName_21836, var_structAttributeList_21877, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 700)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_from COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 706)) ;
    GGS_semanticExpressionAST var_initializerCall_22282 ;
    nt_expression_ (ioArgument_ioDeclarations, var_initializerCall_22282, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_outputInputJokerParameterAST::init_21__21_ (var_selector_21700, var_initializerCall_22282, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 708)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 710)) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_outputInputSelfParameterAST::init_21_ (var_selector_21700, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 711)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 686)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 688)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 692)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 696)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 697)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_from COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 706)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 710)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_22883 ;
  switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
  case 1: {
    var_selector_22883 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 723)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 725)) ;
    var_selector_22883 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 726)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticExpressionAST var_e_23044 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_23044, inCompiler) ;
  GGS_location var_endOfExpressionLocation_23064 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 729)) ;
  ioArgument_ioActualParameterList.addAssignOperation (GGS_outputActualParameterAST::init_21__21__21_ (var_selector_22883, var_e_23044, var_endOfExpressionLocation_23064, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 730)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 723)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 725)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_23481 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 741)) ;
  GGS_semanticExpressionAST var_e_23562 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_23562, inCompiler) ;
  GGS_location var_endOfExpressionLocation_23582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 743)) ;
  ioArgument_ioActualParameterList.addAssignOperation (GGS_outputActualParameterAST::init_21__21__21_ (var_selector_23481, var_e_23562, var_endOfExpressionLocation_23582, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 744)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GGS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 758)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_24276 ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        var_selector_24276 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 764)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 766)) ;
        var_selector_24276 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 767)) ;
      } break ;
      case 3: {
        var_selector_24276 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 769)) ;
      } break ;
      default:
        break ;
      }
      GGS_bool var_isConstant_24457 ;
      switch (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 773)) ;
        var_isConstant_24457 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 776)) ;
        var_isConstant_24457 = GGS_bool (true) ;
      } break ;
      case 3: {
        var_isConstant_24457 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_24682 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_24682, inCompiler) ;
      GGS_bool var_isUnused_24724 ;
      switch (select_galgas_34_ParameterArgumentSyntax_21 (inCompiler)) {
      case 1: {
        var_isUnused_24724 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 786)) ;
        var_isUnused_24724 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterName_24878 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 789)) ;
      outArgument_outFormalInputParameterList.addAssignOperation (var_selector_24276, var_formalParameterTypeName_24682, var_formalParameterName_24878, var_isUnused_24724, var_isConstant_24457  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 790)) ;
      if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 797)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 758)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 764)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 766)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 773)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 776)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_21 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 786)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 789)) ;
      if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 797)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GGS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_indexing (Lexique_galgasScanner_34_ * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_ (GGS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 813)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 814)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_varName_25583 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 816)) ;
    outArgument_outPoisonedVarNameList.addAssignOperation (var_varName_25583  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 817)) ;
    if (select_galgas_34_ParameterArgumentSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 819)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 821)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 813)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 814)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 816)) ;
    if (select_galgas_34_ParameterArgumentSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 819)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 821)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticInstructionAST var_instruction_15831 ;
      nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15831, inCompiler) ;
      outArgument_outInstructionsList.addAssignOperation (var_instruction_15831  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 396)) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 399)) ;
        } break ;
        case 2: {
          GGS_string var_separator_15953 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 401)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_15953.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 402)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 402)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 403)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 403)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 410)) ;
    GGS_location var_instructionLocation_16221 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 411)) ;
    GGS_CommaSeparatedExpressionList var_testExpression_16315 ;
    nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_16315, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 413)) ;
    GGS_semanticInstructionListAST var_else_5F_instructionList_16399 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_16399, inCompiler) ;
    GGS_location var_endOf_5F_else_5F_branch_16430 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 415)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 416)) ;
    GGS_semanticInstructionListAST var_then_5F_instructionList_16533 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_16533, inCompiler) ;
    GGS_location var_endOf_5F_then_5F_branch_16564 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 418)) ;
    GGS_ifInstructionAST var_instruction_16609 = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_16221, var_testExpression_16315, var_then_5F_instructionList_16533, var_endOf_5F_then_5F_branch_16564, var_else_5F_instructionList_16399, var_endOf_5F_else_5F_branch_16430, inCompiler COMMA_HERE) ;
    outArgument_outInstructionsList.addAssignOperation (var_instruction_16609  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 427)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_indexing (inCompiler) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 399)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 410)) ;
    nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 413)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 416)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 436)) ;
  GGS_bool var_isOnce_17205 = GGS_bool (false) ;
  GGS_bool var_isUsefull_17228 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 441)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_17205.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 443)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 443)) ;
        }
      }
      var_isOnce_17205 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 447)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_17228.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 449)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 449)) ;
        }
      }
      var_isUsefull_17228 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_17564 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 453)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_17690 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_17690, inCompiler) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_isOnce_17205.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_17690.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 455)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_17564.readProperty_location (), GGS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 456)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 458)) ;
  GGS_lstring var_resultTypeName_17905 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_17905, inCompiler) ;
  GGS_lstring var_resultVariableName_17937 ;
  switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    var_resultVariableName_17937 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 462)) ;
  } break ;
  case 2: {
    var_resultVariableName_17937 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 464)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 466)) ;
  GGS_semanticInstructionListAST var_functionInstructionList_18158 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_18158, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 468)) ;
  GGS_location var_endOfFunctionInstructionList_18198 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 469)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_isOnce_17205.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_functionName_17564, var_resultTypeName_17905, var_resultVariableName_17937, var_functionInstructionList_18158, var_endOfFunctionInstructionList_18198, GGS_bool (false), var_isUsefull_17228, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 471)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GGS_bool (false), var_functionName_17564, var_formalInputParameterList_17690, var_resultTypeName_17905, var_isUsefull_17228, var_resultVariableName_17937, var_functionInstructionList_18158, var_endOfFunctionInstructionList_18198, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 482)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 436)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 441)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 447)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 453)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 458)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 462)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 466)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 468)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 499)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 500)) ;
  GGS_bool var_isOnce_19165 = GGS_bool (false) ;
  GGS_bool var_isUsefull_19188 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 505)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_19165.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 507)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 507)) ;
        }
      }
      var_isOnce_19165 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 511)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_19188.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 513)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 513)) ;
        }
      }
      var_isUsefull_19188 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_19524 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 517)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_19650 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_19650, inCompiler) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_isOnce_19165.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_19650.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 519)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_19524.readProperty_location (), GGS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 520)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 522)) ;
  GGS_lstring var_resultTypeName_19865 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_19865, inCompiler) ;
  GGS_lstring var_resultVariableName_19897 ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    var_resultVariableName_19897 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 526)) ;
  } break ;
  case 2: {
    var_resultVariableName_19897 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 528)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 530)) ;
  GGS_semanticInstructionListAST var_functionInstructionList_20118 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_20118, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 532)) ;
  GGS_location var_endOfFunctionInstructionList_20158 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 533)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_isOnce_19165.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_functionName_19524, var_resultTypeName_19865, var_resultVariableName_19897, var_functionInstructionList_20118, var_endOfFunctionInstructionList_20158, GGS_bool (true), var_isUsefull_19188, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 535)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GGS_bool (false), var_functionName_19524, var_formalInputParameterList_19650, var_resultTypeName_19865, var_isUsefull_19188, var_resultVariableName_19897, var_functionInstructionList_20118, var_endOfFunctionInstructionList_20158, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 546)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 499)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 500)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 505)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 511)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 517)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 522)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 526)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 530)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 532)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 565)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 566)) ;
  GGS_bool var_isUsefull_21287 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 570)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_21287.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 572)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 572)) ;
        }
      }
      var_isUsefull_21287 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_21489 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 576)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_21614 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_21614, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 578)) ;
  GGS_lstring var_resultTypeName_21692 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_21692, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externFunctionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc (GGS_bool (false), var_mActionName_21489, var_formalInputParameterList_21614, var_resultTypeName_21692, var_isUsefull_21287, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 580)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 565)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 566)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 570)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 576)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 578)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 600)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 601)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 603)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 604)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_lstring var_actualParameterTypeName_22873 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_22873, inCompiler) ;
    GGS_lstring var_actualParameterName_22921 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 607)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::init_21__21_ (var_actualParameterTypeName_22873, var_actualParameterName_22921, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 610)) ;
    GGS_lstring var_actualParameterTypeName_23142 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_23142, inCompiler) ;
    GGS_lstring var_actualParameterName_23190 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 612)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::init_21__21_ (var_actualParameterTypeName_23142, var_actualParameterName_23190, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_lstring var_actualParameterName_23370 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 615)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::init_21_ (var_actualParameterName_23370, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 618)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 600)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 601)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 603)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 607)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 610)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 612)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 615)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 618)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GGS_actualInputParameterListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 628)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 631)) ;
        GGS_lstring var_selector_23930 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 632)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 633)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_23930, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 634)) ;
      } break ;
      case 2: {
        GGS_lstring var_selector_24090 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 636)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 637)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_24090, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 638)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_24240 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 640)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 641)) ;
        GGS_lstring var_actualParameterTypeName_24288 ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_24288 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 644)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_24288, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_24504 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 648)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_24240, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_24288, var_actualParameterName_24504, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 649)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 653)) ;
        GGS_lstring var_selector_24719 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 654)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 655)) ;
        GGS_lstring var_actualParameterTypeName_24777 ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_24777 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 658)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_24777, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_24993 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 662)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_24719, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_24777, var_actualParameterName_24993, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 663)) ;
      } break ;
      case 5: {
        GGS_lstring var_selector_25208 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 667)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 668)) ;
        GGS_lstring var_actualParameterTypeName_25256 ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_25256 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 671)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_25256, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_25473 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 675)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_25208, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_25256, var_actualParameterName_25473, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 676)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 680)) ;
        GGS_lstring var_selector_25688 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 681)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 682)) ;
        GGS_lstring var_actualParameterTypeName_25746 ;
        switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_25746 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 685)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_25746, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_25963 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 689)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_25688, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_25746, var_actualParameterName_25963, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 690)) ;
      } break ;
      case 7: {
        GGS_lstring var_selector_26178 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 694)) ;
        GGS_lstring var_actualParameterName_26215 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 695)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_26178, GGS_inputParameterVariable::init_21_ (var_actualParameterName_26215, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 696)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 698)) ;
        GGS_lstring var_selector_26373 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 699)) ;
        GGS_lstring var_actualParameterName_26420 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 700)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_26373, GGS_inputParameterVariable::init_21_ (var_actualParameterName_26420, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 701)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 704)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 706)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 628)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 631)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 633)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 636)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 637)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 640)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 641)) ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 648)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 653)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 655)) ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 662)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 667)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 668)) ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 675)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 680)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 682)) ;
        switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 689)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 694)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 695)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 698)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 700)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 704)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 706)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 85)) ;
  GGS_location var_instructionLocation_3421 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas3", 86)) ;
  GGS_logListAST var_logList_3478 = GGS_logListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
    case 1: {
      GGS_lstring var_loggedVariableName_3542 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 90)) ;
      var_logList_3478.addAssignOperation (var_loggedVariableName_3542, GGS_varInExpressionAST::init_21_ (var_loggedVariableName_3542, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 91)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 94)) ;
      GGS_lstring var_propertyName_3705 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 95)) ;
      var_logList_3478.addAssignOperation (var_propertyName_3705, GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_propertyName_3705.readProperty_location (), GGS_selfInExpressionAST::init_21_ (var_propertyName_3705.readProperty_location (), inCompiler COMMA_HERE), var_propertyName_3705, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 96)) ;
    } break ;
    case 3: {
      GGS_lstring var_logMessage_3924 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 101)) ;
      GGS_semanticExpressionAST var_logExpression_3990 ;
      nt_expression_ (ioArgument_ioDeclarations, var_logExpression_3990, inCompiler) ;
      var_logList_3478.addAssignOperation (var_logMessage_3924, var_logExpression_3990  COMMA_SOURCE_FILE ("instruction-log.galgas3", 103)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_logInstructionAST::init_21__21_ (var_instructionLocation_3421, var_logList_3478, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 90)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 95)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 101)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 71)) ;
  GGS_lstring var_methodName_3052 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 72)) ;
  GGS_location var_instructionLocation_3071 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 73)) ;
  GGS_actualParameterListAST var_actualParameterList_3211 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_3211, inCompiler) ;
  outArgument_outInstruction = GGS_superMethodCallInstructionAST::init_21__21__21_ (var_instructionLocation_3071, var_methodName_3052, var_actualParameterList_3211, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 72)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_fixitListAST & outArgument_outFixitListAST,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GGS_fixitListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 134)) ;
    GGS_bool var_hasFixItRemove_5199 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 138)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_hasFixItRemove_5199.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 140)), GGS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas3", 140)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas3", 142))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 142)) ;
          var_hasFixItRemove_5199 = GGS_bool (true) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas3", 146)) ;
        GGS_location var_errorLocation_5520 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 147)) ;
        GGS_semanticExpressionAST var_expression_5619 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_5619, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItReplace (var_expression_5619, var_errorLocation_5520  COMMA_SOURCE_FILE ("instruction-error.galgas3", 149))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 149)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas3", 151)) ;
        GGS_location var_errorLocation_5771 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 152)) ;
        GGS_semanticExpressionAST var_expression_5870 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_5870, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertAfter (var_expression_5870, var_errorLocation_5771  COMMA_SOURCE_FILE ("instruction-error.galgas3", 154))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 154)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas3", 156)) ;
        GGS_location var_errorLocation_6027 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 157)) ;
        GGS_semanticExpressionAST var_expression_6126 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_6126, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertBefore (var_expression_6126, var_errorLocation_6027  COMMA_SOURCE_FILE ("instruction-error.galgas3", 159))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 159)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 162)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 134)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 138)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas3", 146)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas3", 151)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas3", 156)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 162)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 171)) ;
  GGS_location var_instructionLocation_6559 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 172)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 173)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_6666 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_6666, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 175)) ;
  GGS_semanticExpressionAST var_mErrorExpression_6756 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mErrorExpression_6756, inCompiler) ;
  GGS_lstringlist var_builtVariableList_6781 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 180)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_builtVariableName_6887 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 182)) ;
      var_builtVariableList_6781.addAssignOperation (var_builtVariableName_6887  COMMA_SOURCE_FILE ("instruction-error.galgas3", 183)) ;
      if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 185)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_fixitListAST var_fixitListAST_7048 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_7048, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 189)) ;
  outArgument_outInstruction = GGS_errorInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_6559, var_mReceiverExpression_6666, var_mErrorExpression_6756, var_builtVariableList_6781, var_fixitListAST_7048, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 171)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 173)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 175)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 180)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 182)) ;
      if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 185)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 189)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 106)) ;
  GGS_location var_instructionLocation_4484 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 108)) ;
  GGS_semanticExpressionAST var_expression_4592 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_4592, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_4484, var_expression_4592, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 108)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 120)) ;
  GGS_location var_instructionLocation_4987 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 122)) ;
  GGS_semanticExpressionAST var_expression_5095 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_5095, inCompiler) ;
  outArgument_outInstruction = GGS_selfMinusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_4987, var_expression_5095, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 122)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 134)) ;
  GGS_location var_instructionLocation_5491 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 136)) ;
  GGS_semanticExpressionAST var_expression_5599 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_5599, inCompiler) ;
  outArgument_outInstruction = GGS_selfMulEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_5491, var_expression_5599, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 136)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 148)) ;
  GGS_location var_instructionLocation_5993 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 150)) ;
  GGS_semanticExpressionAST var_expression_6101 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_6101, inCompiler) ;
  outArgument_outInstruction = GGS_selfDivEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_5993, var_expression_6101, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 150)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 191)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 192)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 191)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 192)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                              const GGS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_receiverName_7486 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 201)) ;
  GGS_location var_instructionLocation_7507 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 202)) ;
  GGS_lstringlist var_propertyList_7565 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 206)) ;
      GGS_lstring var_attributeName_7639 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 207)) ;
      var_propertyList_7565.addAssignOperation (var_attributeName_7639  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 208)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 212)) ;
    GGS_semanticExpressionAST var_expression_7792 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_7792, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, GGS_opAssignmentOperator::class_func_minusAssign (SOURCE_FILE ("instruction-concat.galgas3", 219)), var_expression_7792, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 223)) ;
    GGS_semanticExpressionAST var_expression_8092 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_8092, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, GGS_opAssignmentOperator::class_func_plusAssign (SOURCE_FILE ("instruction-concat.galgas3", 230)), var_expression_8092, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 234)) ;
    GGS_semanticExpressionAST var_expression_8392 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_8392, inCompiler) ;
    outArgument_outInstruction = GGS_plusPlusEqualElementInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, var_expression_8392, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 244)) ;
    GGS_semanticExpressionAST var_expression_8672 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_8672, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, GGS_opAssignmentOperator::class_func_mulAssign (SOURCE_FILE ("instruction-concat.galgas3", 251)), var_expression_8672, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 255)) ;
    GGS_semanticExpressionAST var_expression_8970 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_8970, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, GGS_opAssignmentOperator::class_func_andAssign (SOURCE_FILE ("instruction-concat.galgas3", 262)), var_expression_8970, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 266)) ;
    GGS_semanticExpressionAST var_expression_9268 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_9268, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, GGS_opAssignmentOperator::class_func_orAssign (SOURCE_FILE ("instruction-concat.galgas3", 273)), var_expression_9268, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 277)) ;
    GGS_semanticExpressionAST var_expression_9565 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_9565, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, GGS_opAssignmentOperator::class_func_xorAssign (SOURCE_FILE ("instruction-concat.galgas3", 284)), var_expression_9565, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 288)) ;
    GGS_semanticExpressionAST var_expression_9863 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_9863, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_7507, constinArgument_inHasSelfPrefix, var_receiverName_7486, var_propertyList_7565, GGS_opAssignmentOperator::class_func_divAssign (SOURCE_FILE ("instruction-concat.galgas3", 295)), var_expression_9863, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    GGS_actualParameterListAST var_actualParameterList_10181 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_10181, inCompiler) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inHasSelfPrefix.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_propertyList_7565.getter_count (SOURCE_FILE ("instruction-concat.galgas3", 301)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_7507, GGS_selfInExpressionAST::init_21_ (var_instructionLocation_7507, inCompiler COMMA_HERE), var_receiverName_7486, var_actualParameterList_10181, inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GGS_lstring var_methodName_10554 ;
          {
          var_propertyList_7565.setter_popLast (var_methodName_10554, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 309)) ;
          }
          GGS_semanticExpressionAST var_receiverExpression_10603 = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 310)), inCompiler COMMA_HERE) ;
          var_receiverExpression_10603 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_receiverName_7486.readProperty_location (), var_receiverExpression_10603, var_receiverName_7486, inCompiler COMMA_HERE) ;
          UpEnumerator_lstringlist enumerator_10803 (var_propertyList_7565) ;
          while (enumerator_10803.hasCurrentObject ()) {
            var_receiverExpression_10603 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_10803.current_mValue (HERE).readProperty_location (), var_receiverExpression_10603, enumerator_10803.current_mValue (HERE), inCompiler COMMA_HERE) ;
            enumerator_10803.gotoNextObject () ;
          }
          outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_7507, var_receiverExpression_10603, var_methodName_10554, var_actualParameterList_10181, inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_propertyList_7565.getter_count (SOURCE_FILE ("instruction-concat.galgas3", 322)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outInstruction = GGS_procCallInstructionAST::init_21__21__21_ (var_receiverName_7486.readProperty_location (), var_receiverName_7486, var_actualParameterList_10181, inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GGS_lstring var_methodName_11429 ;
        {
        var_propertyList_7565.setter_popLast (var_methodName_11429, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 329)) ;
        }
        GGS_semanticExpressionAST var_receiverExpression_11476 = GGS_varInExpressionAST::init_21_ (var_receiverName_7486, inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_11546 (var_propertyList_7565) ;
        while (enumerator_11546.hasCurrentObject ()) {
          var_receiverExpression_11476 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_11546.current_mValue (HERE).readProperty_location (), var_receiverExpression_11476, enumerator_11546.current_mValue (HERE), inCompiler COMMA_HERE) ;
          enumerator_11546.gotoNextObject () ;
        }
        outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_7507, var_receiverExpression_11476, var_methodName_11429, var_actualParameterList_10181, inCompiler COMMA_HERE) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 206)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 207)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 212)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 223)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 234)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 244)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 255)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 266)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 277)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 288)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 64)) ;
  GGS_location var_instructionLocation_3017 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas3", 65)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_3116 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_3116, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 67)) ;
  GGS_semanticExpressionAST var_mWarningExpression_3206 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mWarningExpression_3206, inCompiler) ;
  GGS_fixitListAST var_fixitListAST_3279 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_3279, inCompiler) ;
  outArgument_outInstruction = GGS_warningInstructionAST::init_21__21__21__21_ (var_instructionLocation_3017, var_mReceiverExpression_3116, var_mWarningExpression_3206, var_fixitListAST_3279, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 64)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 67)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    GGS_CommaSeparatedExpressionList & outArgument_outExpressionList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_CommaSeparatedExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      GGS_lstring var_varName_3507 ;
      GGS_bool var_isConstant_3533 ;
      switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 96)) ;
        var_varName_3507 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 97)) ;
        var_isConstant_3533 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 100)) ;
        var_isConstant_3533 = GGS_bool (true) ;
        switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
        case 1: {
          var_varName_3507 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 103)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 105)) ;
          var_varName_3507 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 106)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 109)) ;
      GGS_semanticExpressionAST var_expression_3888 ;
      nt_expression_5F_or_ (ioArgument_ioDeclarations, var_expression_3888, inCompiler) ;
      GGS_location var_endOfReceiverExpression_3911 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 111)) ;
      switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_3507, var_isConstant_3533, var_expression_3888, var_endOfReceiverExpression_3911, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 118))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 113))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 113)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 121)) ;
        GGS_lstring var_typeName_4273 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4273, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_3507, var_isConstant_3533, var_expression_3888, var_endOfReceiverExpression_3911, var_typeName_4273  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 123))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 123)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_4577 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_4577, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_regularExp (var_expression_4577, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 133))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 133))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 133)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 96)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 97)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 100)) ;
        switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 103)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 105)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 109)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 121)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 276)) ;
  GGS_location var_instructionLocation_12754 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 277)) ;
  GGS_lstring var_grammarComponentName_12822 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 278)) ;
  GGS_lstring var_labelName_12895 ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_labelName_12895 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 281)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 283)) ;
    var_labelName_12895 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 284)) ;
  } break ;
  default:
    break ;
  }
  GGS_actualParameterListAST var_actualParameterList_13108 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_13108, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_12754, var_actualParameterList_13108, var_grammarComponentName_12822, var_labelName_12895, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 276)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 278)) ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 283)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 284)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 298)) ;
  GGS_semanticExpressionAST var_sourceExpression_13891 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_13891, inCompiler) ;
  GGS_location var_endOfSourceExpression_13916 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 300)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_14076 ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_14076 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 306)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_14076, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_13891, var_endOfSourceExpression_13916, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_14076, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 298)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 306)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 328)) ;
  GGS_semanticExpressionAST var_sourceExpression_15287 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_15287, inCompiler) ;
  GGS_location var_endOfSourceExpression_15322 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 330)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 331)) ;
  GGS_semanticExpressionAST var_nameExpression_15422 ;
  nt_expression_ (ioArgument_ioDeclarations, var_nameExpression_15422, inCompiler) ;
  GGS_location var_endOfNameExpression_15455 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 333)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_15604 ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_15604 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 339)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_15604, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_15287, var_endOfSourceExpression_15322, var_nameExpression_15422, var_endOfNameExpression_15455, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_15604, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 328)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 331)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 339)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 89)) ;
  GGS_location var_instructionLocation_3950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 92)) ;
  GGS_semanticExpressionAST var_variantExpression_4073 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_4073, inCompiler) ;
  GGS_location var_endOfVariantExpression_4099 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 95)) ;
  GGS_semanticInstructionListAST var_firstInstructions_4237 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_4237, inCompiler) ;
  GGS_location var_endOfFirstInstructions_4271 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 100)) ;
  GGS_semanticExpressionAST var_loopExpression_4385 ;
  nt_expression_ (ioArgument_ioDeclarations, var_loopExpression_4385, inCompiler) ;
  GGS_location var_endOfLoopExpression_4408 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 103)) ;
  GGS_semanticInstructionListAST var_secondInstructions_4536 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_4536, inCompiler) ;
  GGS_location var_endOfSecondInstructions_4563 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 106)) ;
  GGS_location var_endOfLoopInstruction_4622 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 107)) ;
  outArgument_outInstruction = GGS_loopInstructionWithVariantAST::init_21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_3950, var_variantExpression_4073, var_endOfVariantExpression_4099, var_firstInstructions_4237, var_endOfFirstInstructions_4271, var_loopExpression_4385, var_endOfLoopExpression_4408, var_secondInstructions_4536, var_endOfSecondInstructions_4563, var_endOfLoopInstruction_4622, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 92)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 95)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 100)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 103)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_3724 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 85)) ;
  GGS_CommaSeparatedExpressionList var_testExpression_3816 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_3816, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 87)) ;
  GGS_semanticInstructionListAST var_then_5F_instructionList_3896 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_3896, inCompiler) ;
  GGS_location var_endOf_5F_then_5F_branchLocation_3925 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 89)) ;
  GGS_semanticInstructionListAST var_else_5F_instructionList_4004 ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_4004 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 94)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_4004, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 97)) ;
    GGS_semanticInstructionAST var_instruction_4233 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instruction_4233, inCompiler) ;
    GGS_semanticInstructionListAST temp_0 = GGS_semanticInstructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 99)) ;
    temp_0.plusPlusAssignOperation (GGS_semanticInstructionListAST_2E_element::init_21_ (var_instruction_4233, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas3", 99)) ;
    var_else_5F_instructionList_4004 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_3724, var_testExpression_3816, var_then_5F_instructionList_3896, var_endOf_5F_then_5F_branchLocation_3925, var_else_5F_instructionList_4004, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 107)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 87)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 94)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 97)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 115)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 115)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 116)) ;
  GGS_location var_instructionLocation_4363 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 117)) ;
  GGS_semanticExpressionAST var_switchExpression_4439 ;
  nt_expression_ (ioArgument_ioDeclarations, var_switchExpression_4439, inCompiler) ;
  GGS_location var_endOfSwitchExpression_4464 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 119)) ;
  GGS_switchBranchesAST var_switchBranches_4530 = GGS_switchBranchesAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 122)) ;
    GGS__5B_lstring_5D_ var_constantNameList_4644 ;
    GGS_switchExtractedValuesListAST var_associatedValuesExtraction_4704 ;
    nt_switch_5F_case_ (ioArgument_ioDeclarations, var_constantNameList_4644, var_associatedValuesExtraction_4704, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 127)) ;
    GGS_semanticInstructionListAST var_instructions_4797 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructions_4797, inCompiler) ;
    var_switchBranches_4530.addAssignOperation (var_constantNameList_4644, var_associatedValuesExtraction_4704, var_instructions_4797, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 129))  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 129)) ;
    if (select_galgas_34_InstructionsSyntax_35 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 132)) ;
  GGS_location var_endOfSwitchInstruction_4946 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 133)) ;
  outArgument_outInstruction = GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_4363, var_switchExpression_4439, var_endOfSwitchExpression_4464, var_switchBranches_4530, var_endOfSwitchInstruction_4946, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 116)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 122)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 127)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_35 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                                                  GGS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_5553 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 150)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_5553, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 151)) ;
    }
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 153)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS_switchExtractedValuesListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 158)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_5769 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 161)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 162)) ;
        UpEnumerator_range enumerator_5812 (GGS_range (GGS_uint (uint32_t (0U)), var_n_5769.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 163)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 163)))) ;
        while (enumerator_5812.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 164)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 164)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 164)) ;
          enumerator_5812.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 167)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 168)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 168)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 168)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_6035 ;
        switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6035, inCompiler) ;
        } break ;
        case 2: {
          var_typeName_6035 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 174)) ;
        } break ;
        default:
          break ;
        }
        GGS_bool var_constantMarkedAsUnused_6196 ;
        switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_6196 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 180)) ;
          var_constantMarkedAsUnused_6196 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_6406 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 183)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (var_typeName_6035, var_constantName_6406, var_constantMarkedAsUnused_6196  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 184)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_38 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 187)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 189)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 150)) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 153)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 158)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 161)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 162)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 167)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 180)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 183)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_38 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 187)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 189)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i27_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbigint var_count_9920 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 266)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 267)) ;
  GGS_uint var_n_9942 = var_count_9920.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 268)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_9942.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_9920.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas3", 270)) ;
    }
  }
  if (var_n_9942.isValid ()) {
    uint32_t variant_10043 = var_n_9942.uintValue () ;
    bool loop_10043 = true ;
    while (loop_10043) {
      loop_10043 = GGS_bool (ComparisonKind::greaterThan, var_n_9942.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_10043) {
        loop_10043 = GGS_bool (ComparisonKind::greaterThan, var_n_9942.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_10043 && (0 == variant_10043)) {
        loop_10043 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas3", 272)) ;
      }
      if (loop_10043) {
        variant_10043 -= 1 ;
        ioArgument_ioElementList.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 273)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 273))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 273)) ;
        var_n_9942.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 274)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 266)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 267)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_10438 ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_typeName_10438 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 284)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_10438, inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 289)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_10438, GGS_bool (true), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 290))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 290)) ;
  } break ;
  case 2: {
    GGS_bool var_isUnused_10644 ;
    switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
    case 1: {
      var_isUnused_10644 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 296)) ;
      var_isUnused_10644 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_constantName_10784 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 299)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_10438, var_isUnused_10644, var_constantName_10784  COMMA_SOURCE_FILE ("instruction-for.galgas3", 300)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 289)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 296)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 299)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 308)) ;
  GGS_forInstructionEnumeratedObjectElementListAST var_elementList_11170 = GGS_forInstructionEnumeratedObjectElementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (ioArgument_ioDeclarations, var_elementList_11170, inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 313)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_location var_location_11343 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 315)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 316)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 317)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_11448 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_11448, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionCstListInExpAST::init_21__21__21_ (var_elementList_11170, var_enumeratedExpression_11448, var_location_11343, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 308)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 313)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 316)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 317)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_11912 ;
  switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    var_typeName_11912 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 332)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_11912, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_enumerationVariable_12043 ;
  switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 338)) ;
    var_enumerationVariable_12043 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 339)) ;
  } break ;
  case 2: {
    var_enumerationVariable_12043 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 341)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 343)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_12246 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_12246, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionVarInExpAST::init_21__21__21__21_ (var_typeName_11912, var_enumerationVariable_12043, var_enumeratedExpression_12246, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 349)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 338)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 341)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 343)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 357)) ;
  GGS_location var_instructionLocation_12697 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 358)) ;
  GGS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_12742 = GGS_forInstructionEnumeratedObjectListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_bool var_ascending_12835 ;
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      var_ascending_12835 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 365)) ;
      var_ascending_12835 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_abstractEnumeratedCollectionAST var_enumeratedObject_13037 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (ioArgument_ioDeclarations, var_enumeratedObject_13037, inCompiler) ;
    var_mEnumeratedObjectList_12742.addAssignOperation (var_ascending_12835, var_enumeratedObject_13037  COMMA_SOURCE_FILE ("instruction-for.galgas3", 369)) ;
    if (select_galgas_34_InstructionsSyntax_48 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 371)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_semanticExpressionAST var_mWhileExpression_13173 ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    var_mWhileExpression_13173 = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 375)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 377)) ;
    nt_expression_ (ioArgument_ioDeclarations, var_mWhileExpression_13173, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_while_5F_expression_13355 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 380)) ;
  GGS_semanticInstructionListAST var_mBeforeInstructionList_13431 ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_13431 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 385)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBeforeInstructionList_13431, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_before_5F_branch_13641 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 388)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 389)) ;
  GGS_lstring var_indexVariableName_13704 ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
    var_indexVariableName_13704 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 392)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 394)) ;
    var_indexVariableName_13704 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 395)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 396)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticInstructionListAST var_mDoInstructionList_13918 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mDoInstructionList_13918, inCompiler) ;
  GGS_location var_endof_5F_do_5F_branch_13945 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 399)) ;
  GGS_semanticInstructionListAST var_mBetweenInstructionList_14014 ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_14014 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 404)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBetweenInstructionList_14014, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_between_5F_branch_14228 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 407)) ;
  GGS_semanticInstructionListAST var_mAfterInstructionList_14302 ;
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_14302 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 412)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mAfterInstructionList_14302, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_after_5F_branch_14508 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 415)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 416)) ;
  GGS_location var_endof_5F_foreach_5F_instruction_14562 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 417)) ;
  outArgument_outInstruction = GGS_forInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_12697, var_mEnumeratedObjectList_12742, var_indexVariableName_13704, var_mWhileExpression_13173, var_endof_5F_while_5F_expression_13355, var_mBeforeInstructionList_13431, var_endof_5F_before_5F_branch_13641, var_mBetweenInstructionList_14014, var_endof_5F_between_5F_branch_14228, var_mDoInstructionList_13918, var_endof_5F_do_5F_branch_13945, var_mAfterInstructionList_14302, var_endof_5F_after_5F_branch_14508, var_endof_5F_foreach_5F_instruction_14562, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 357)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 365)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_48 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 371)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 377)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 385)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 389)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 394)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 395)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 396)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 404)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 412)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 416)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_4499 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 119)) ;
  GGS_bool var_prefixedBySelf_4559 ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_4559 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 124)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 125)) ;
    var_prefixedBySelf_4559 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mReceiverName_4702 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 128)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    GGS_actualParameterListAST var_actualParameterList_4822 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_4822, inCompiler) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_prefixedBySelf_4559.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outInstruction = GGS_selfSetterCallInstructionAST::init_21__21__21_ (var_instructionLocation_4499, var_mReceiverName_4702, var_actualParameterList_4822, inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_instructionLocation_4499, GGS_string ("invalid setter call"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 138)) ;
      outArgument_outInstruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    GGS_lstringlist var_receiverStructProperties_5144 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 143)) ;
      GGS_lstring var_structProperty_5238 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 144)) ;
      var_receiverStructProperties_5144.addAssignOperation (var_structProperty_5238  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 145)) ;
      if (select_galgas_34_InstructionsSyntax_57 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_lstring var_setterName_5374 ;
    {
    var_receiverStructProperties_5144.setter_popLast (var_setterName_5374, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 148)) ;
    }
    GGS_actualParameterListAST var_actualParameterList_5481 ;
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_5481, inCompiler) ;
    outArgument_outInstruction = GGS_setterCallInstructionAST::init_21__21__21__21__21__21__21_ (var_instructionLocation_4499, var_prefixedBySelf_4559, var_mReceiverName_4702, var_receiverStructProperties_5144, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 155)), var_setterName_5374, var_actualParameterList_5481, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 119)) ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 124)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 125)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 128)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 143)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 144)) ;
      if (select_galgas_34_InstructionsSyntax_57 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 65)) ;
  GGS_location var_instructionLocation_2974 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 66)) ;
  GGS_semanticInstructionListAST var_firstInstructions_3093 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_3093, inCompiler) ;
  GGS_location var_endOfFirstInstructions_3127 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 70)) ;
  GGS_CommaSeparatedExpressionList var_loopExpression_3234 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_loopExpression_3234, inCompiler) ;
  GGS_location var_endOfLoopExpression_3257 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 73)) ;
  GGS_semanticInstructionListAST var_secondInstructions_3385 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_3385, inCompiler) ;
  GGS_location var_endOfSecondInstructions_3412 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 76)) ;
  GGS_location var_endOfLoopInstruction_3471 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 77)) ;
  outArgument_outInstruction = GGS_loopInstructionWithoutVariantAST::init_21__21__21__21__21__21__21__21_ (var_instructionLocation_2974, var_firstInstructions_3093, var_endOfFirstInstructions_3127, var_loopExpression_3234, var_endOfLoopExpression_3257, var_secondInstructions_3385, var_endOfSecondInstructions_3412, var_endOfLoopInstruction_3471, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 65)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 70)) ;
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 73)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 101)) ;
  GGS_lstring var_typeName_4284 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4284, inCompiler) ;
  GGS_lstring var_constantName_4315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_undefinedLocalConstantDeclarationAST::init_21__21__21_ (var_typeName_4284.readProperty_location (), var_typeName_4284, var_constantName_4315, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 111)) ;
    GGS_semanticExpressionAST var_sourceExpression_4557 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4557, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4284.readProperty_location (), GGS_bool (true), var_typeName_4284, var_constantName_4315, var_sourceExpression_4557, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 101)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 111)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 127)) ;
  GGS_lstring var_variableName_5074 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 129)) ;
  GGS_semanticExpressionAST var_sourceExpression_5157 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_5157, inCompiler) ;
  outArgument_outInstruction = GGS_localConstantDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_5074.readProperty_location (), var_variableName_5074, var_sourceExpression_5157, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 129)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 60)) ;
  GGS_location var_instructionLocation_2725 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 61)) ;
  GGS_lstringlist var_dropList_2783 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_variableName_2833 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 64)) ;
    var_dropList_2783.addAssignOperation (var_variableName_2833  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 65)) ;
    if (select_galgas_34_InstructionsSyntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_dropInstructionAST::init_21__21_ (var_instructionLocation_2725, var_dropList_2783, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 64)) ;
    if (select_galgas_34_InstructionsSyntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 93)) ;
  GGS_lstring var_variableName_3888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 95)) ;
  GGS_semanticExpressionAST var_sourceExpression_3971 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_3971, inCompiler) ;
  outArgument_outInstruction = GGS_localVariableDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_3888.readProperty_location (), var_variableName_3888, var_sourceExpression_3971, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 95)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 108)) ;
  GGS_lstring var_typeName_4439 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4439, inCompiler) ;
  GGS_lstring var_variableName_4470 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_localVariableDeclarationNoAssignmentAST::init_21__21__21_ (var_typeName_4439.readProperty_location (), var_typeName_4439, var_variableName_4470, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 114)) ;
    GGS_semanticExpressionAST var_sourceExpression_4684 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4684, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4439.readProperty_location (), GGS_bool (false), var_typeName_4439, var_variableName_4470, var_sourceExpression_4684, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 108)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 114)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 58)) ;
  GGS_location var_instructionLocation_2725 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 60)) ;
  GGS_semanticExpressionAST var_sourceExpression_2832 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_2832, inCompiler) ;
  outArgument_outInstruction = GGS_selfAssignmentInstructionAST::init_21__21_ (var_instructionLocation_2725, var_sourceExpression_2832, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 60)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2949 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 64)) ;
  GGS_lstring var_mTypeName_3012 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 66)) ;
  GGS_lstring var_mMethodName_3096 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 67)) ;
  GGS_actualParameterListAST var_actualParameterList_3201 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_3201, inCompiler) ;
  outArgument_outInstruction = GGS_typeMethodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2949, var_mTypeName_3012, var_mMethodName_3096, var_actualParameterList_3201, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 67)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 71)) ;
  GGS_location var_instructionLocation_2975 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 73)) ;
  GGS_actualOutputArgumentList var_actualParameterList_3071 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_actualParameterList_3071, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 75)) ;
  outArgument_outInstruction = GGS_superInitInstructionAST::init_21__21_ (var_instructionLocation_2975, var_actualParameterList_3071, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 73)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mTargetVariableName_3396 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 85)) ;
  GGS_lstring var_optionalProperty_3433 ;
  switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
    var_optionalProperty_3433 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 90)) ;
    GGS_actualOutputArgumentList var_outExpressionList_3628 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_outExpressionList_3628, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 94)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 95)), GGS_string ("not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 95)) ;
    var_optionalProperty_3433.drop () ; // Release error dropped variable
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 97)) ;
    GGS_lstring var_attributeName_3760 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 98)) ;
    var_optionalProperty_3433 = var_attributeName_3760 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 101)) ;
  GGS_semanticExpressionAST var_mSourceExpression_3891 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_3891, inCompiler) ;
  outArgument_outInstruction = GGS_assignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_3396.readProperty_location (), var_mTargetVariableName_3396, var_optionalProperty_3433, var_mSourceExpression_3891, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 85)) ;
  switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 90)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 94)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 97)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 98)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 101)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 116)) ;
  GGS_lstring var_mTargetVariableName_4370 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 117)) ;
  GGS_lstring var_optionalProperty_4407 ;
  switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
    var_optionalProperty_4407 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 120)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 122)) ;
    GGS_actualOutputArgumentList var_outExpressionList_4602 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_outExpressionList_4602, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 126)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 127)), GGS_string ("not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 127)) ;
    var_optionalProperty_4407.drop () ; // Release error dropped variable
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 129)) ;
    GGS_lstring var_attributeName_4734 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 130)) ;
    var_optionalProperty_4407 = var_attributeName_4734 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 133)) ;
  GGS_semanticExpressionAST var_mSourceExpression_4865 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_4865, inCompiler) ;
  outArgument_outInstruction = GGS_selfPropertyAssignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_4370.readProperty_location (), var_mTargetVariableName_4370, var_optionalProperty_4407, var_mSourceExpression_4865, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 117)) ;
  switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 122)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 129)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 130)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 133)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 67)) ;
  GGS_bool var_isUsefull_2964 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 71)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_2964.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 73)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 73)) ;
        }
      }
      var_isUsefull_2964 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_3175 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 77)) ;
  GGS_formalParameterListAST var_mFormalParameterList_3288 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_3288, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externProcedureDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (GGS_bool (false), GGS_bool (false), var_mActionName_3175, var_mFormalParameterList_3288, var_isUsefull_2964, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 71)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 77)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 102)) ;
  GGS_bool var_isUsefull_4094 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 106)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_4094.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 108)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 108)) ;
        }
      }
      var_isUsefull_4094 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_4297 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 112)) ;
  GGS_formalParameterListAST var_mFormalParameterList_4411 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_4411, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 114)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_4522 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRoutineInstructionList_4522, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 116)) ;
  GGS_location var_endOfInstructionList_4562 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 117)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (false), var_mRoutineName_4297, var_mFormalParameterList_4411, var_isUsefull_4094, var_mRoutineInstructionList_4522, var_endOfInstructionList_4562, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 118)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 112)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 114)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 133)) ;
  GGS_bool var_isUsefull_5088 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_65 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 137)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_5088.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 139)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 139)) ;
        }
      }
      var_isUsefull_5088 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_5291 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 143)) ;
  GGS_formalParameterListAST var_mFormalParameterList_5405 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_5405, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 145)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_5516 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRoutineInstructionList_5516, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 147)) ;
  GGS_location var_endOfInstructionList_5556 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 148)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (true), var_mRoutineName_5291, var_mFormalParameterList_5405, var_isUsefull_5088, var_mRoutineInstructionList_5516, var_endOfInstructionList_5556, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_65 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 137)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 143)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 145)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 147)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_ (ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 225)) ;
  GGS_lstring var_mFilewrapperName_9039 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 227)) ;
  GGS_lstring var_mFilewrapperPath_9125 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 228)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_9176 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_9176, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_9245 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_9245, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_9330 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_9330, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (false), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 235)), var_mFilewrapperName_9039, var_mFilewrapperPath_9125, var_filewrapperTextFileExtensionList_9176, var_filewrapperBinaryFileExtensionList_9245, var_filewrapperTemplateList_9330, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 225)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 228)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 246)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 247)) ;
  GGS_lstring var_mFilewrapperName_9933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 249)) ;
  GGS_lstring var_mFilewrapperPath_10019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 250)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_10070 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_10070, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_10139 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_10139, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_10224 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_10224, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 257)), var_mFilewrapperName_9933, var_mFilewrapperPath_10019, var_filewrapperTextFileExtensionList_10070, var_filewrapperBinaryFileExtensionList_10139, var_filewrapperTemplateList_10224, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 254)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 246)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 247)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 249)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 250)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 270)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_10904 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 274)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssignOperation (var_pathExtension_10904  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 275)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 277)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 270)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 274)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 277)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 287)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_11345 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 291)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssignOperation (var_pathExtension_11345  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 292)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 294)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 287)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 291)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 294)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 304)) ;
  outArgument_outFilewrapperTemplateList = GGS_filewrapperTemplateListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 308)) ;
      GGS_lstring var_mFilewrapperTemplateName_11846 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 309)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 310)) ;
      GGS_lstring var_mFilewrapperTemplatePath_11903 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 311)) ;
      GGS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_11975 = GGS_formalTemplateInputParameterListAST::init (inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 313)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GGS_lstring var_selector_12092 ;
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_selector_12092 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 319)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 321)) ;
            var_selector_12092 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 322)) ;
          } break ;
          case 3: {
            var_selector_12092 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 324)) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_typeName_12327 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_12327, inCompiler) ;
          GGS_bool var_isUnused_12356 ;
          switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
            var_isUnused_12356 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 331)) ;
            var_isUnused_12356 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_12515 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 334)) ;
          var_filewrapperTemplateFormalInputParameters_11975.addAssignOperation (var_selector_12092, var_typeName_12327, var_argumentName_12515, var_isUnused_12356  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 335)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 337)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 340)) ;
      outArgument_outFilewrapperTemplateList.addAssignOperation (var_mFilewrapperTemplateName_11846, var_mFilewrapperTemplatePath_11903, var_filewrapperTemplateFormalInputParameters_11975  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 341)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 346)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 304)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 308)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 309)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 310)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 311)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 313)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 321)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 324)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 331)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 334)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 337)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 340)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 346)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i6_ (GGS_AccessControlAST & outArgument_outAccessControl,
                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.ggs", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.ggs", 89)) ;
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.ggs", 90)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.ggs", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.ggs", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 96)) ;
      GGS_lstring var_value_3356 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 97)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::notEqual, var_value_3356.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_3356.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.ggs", 99)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 101)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.ggs", 102)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.ggs", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.ggs", 107)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 109)) ;
      GGS_lstring var_value_3672 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 110)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_value_3672.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_3672.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.ggs", 112)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 114)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.ggs", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.ggs", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.ggs", 120))  COMMA_SOURCE_FILE ("accessControl.ggs", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 122)) ;
      GGS_lstring var_value_4027 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 123)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.ggs", 124))  COMMA_SOURCE_FILE ("accessControl.ggs", 124)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, var_value_4027.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_4027.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.ggs", 126)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 128)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.ggs", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.ggs", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 96)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 101)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.ggs", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 109)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 110)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 114)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.ggs", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 128)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 136)) ;
  GGS_lstring var_typeName_5442 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5442, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 138)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      GGS_lstring var_t_5533 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_5533, inCompiler) ;
      var_typeName_5442 = function_makeEmbeddedTypeLName (var_typeName_5442, var_t_5533, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 142)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 143)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_5652 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 145)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_5762 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5762, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 147)) ;
  GGS_lstring var_returnedTypeName_5840 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5840, inCompiler) ;
  GGS_lstring var_resultVariableName_5874 ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_resultVariableName_5874 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 151)) ;
  } break ;
  case 2: {
    var_resultVariableName_5874 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 153)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 155)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_6095 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_6095, inCompiler) ;
  GGS_location var_endOfInstructionList_6136 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 158)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_5442, var_getterName_5652, var_formalInputParameterList_5762, var_returnedTypeName_5840, var_resultVariableName_5874, var_routineInstructionList_6095, var_endOfInstructionList_6136, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 136)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 138)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 143)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 145)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 147)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 151)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 155)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 158)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i8_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                        GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 175)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 176)) ;
  GGS_lstring var_getterName_6742 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 177)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_6852 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6852, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 179)) ;
  GGS_lstring var_returnedTypeName_6930 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_6930, inCompiler) ;
  GGS_lstring var_resultVariableName_6964 ;
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
    var_resultVariableName_6964 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 183)) ;
  } break ;
  case 2: {
    var_resultVariableName_6964 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 185)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 187)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_7185 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_7185, inCompiler) ;
  GGS_location var_endOfInstructionList_7226 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 189)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 190)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_6742, var_formalInputParameterList_6852, var_returnedTypeName_6930, var_resultVariableName_6964, var_routineInstructionList_7185, var_endOfInstructionList_7226, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 191)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 175)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 176)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 177)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 179)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 183)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 187)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 190)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 86)) ;
  GGS_lstring var_typeName_3727 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3727, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_17 (inCompiler) == 2) {
      GGS_lstring var_t_3818 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3818, inCompiler) ;
      var_typeName_3727 = function_makeEmbeddedTypeLName (var_typeName_3727, var_t_3818, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 92)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3937 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 95)) ;
  GGS_formalParameterListAST var_formalParameterList_4072 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4072, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_3727, var_methodName_3937, var_formalParameterList_4072, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 97)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 86)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_17 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 95)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i10_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 111)) ;
  GGS_lstring var_typeName_4569 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
      GGS_lstring var_t_4665 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4665, inCompiler) ;
      var_typeName_4569 = function_makeEmbeddedTypeLName (var_typeName_4569, var_t_4665, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 116)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_4784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 119)) ;
  GGS_formalParameterListAST var_formalParameterList_4920 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4920, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_4569, var_methodName_4784, var_formalParameterList_4920, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 121)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 119)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 102)) ;
  GGS_lstring var_typeName_4234 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4234, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_19 (inCompiler) == 2) {
      GGS_lstring var_t_4325 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4325, inCompiler) ;
      var_typeName_4234 = function_makeEmbeddedTypeLName (var_typeName_4234, var_t_4325, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas3", 108)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 109)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_4444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 111)) ;
  GGS_formalParameterListAST var_formalParameterList_4564 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4564, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 113)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4674 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4674, inCompiler) ;
  GGS_location var_endOfSetterLocation_4715 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 116)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_4234, var_setterName_4444, var_formalParameterList_4564, var_routineInstructionList_4674, var_endOfSetterLocation_4715, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 102)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_19 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 109)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 111)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 113)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i12_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 132)) ;
  GGS_lstring var_setterName_5284 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 133)) ;
  GGS_formalParameterListAST var_formalParameterList_5404 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_5404, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 135)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5514 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5514, inCompiler) ;
  GGS_location var_endOfSetterLocation_5555 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 138)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_setterName_5284, var_formalParameterList_5404, var_routineInstructionList_5514, var_endOfSetterLocation_5555, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 132)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 133)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 135)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 79)) ;
  GGS_lstring var_typeName_3263 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3263, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      GGS_lstring var_t_3354 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3354, inCompiler) ;
      var_typeName_3263 = function_makeEmbeddedTypeLName (var_typeName_3263, var_t_3354, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas3", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 88)) ;
  GGS_location var_initLocation_3461 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 89)) ;
  GGS_formalInputParameterListAST var_formalParameterList_3547 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3547, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 91)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3629 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3629, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 93)) ;
  GGS_location var_endOfMethodLocation_3668 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 94)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), GGS_lstring::init_21__21_ (var_typeName_3263.readProperty_string (), var_initLocation_3461, inCompiler COMMA_HERE), var_formalParameterList_3547, var_routineInstructionList_3629, var_endOfMethodLocation_3668, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 79)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 88)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 91)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i14_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 108)) ;
  GGS_location var_initLocation_4197 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 109)) ;
  GGS_formalInputParameterListAST var_formalParameterList_4283 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4283, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 111)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4365 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4365, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 113)) ;
  GGS_location var_endOfMethodLocation_4404 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), GGS_lstring::init_21__21_ (constinArgument_inTypeName.readProperty_string (), var_initLocation_4197, inCompiler COMMA_HERE), var_formalParameterList_4283, var_routineInstructionList_4365, var_endOfMethodLocation_4404, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 108)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 111)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 95)) ;
  GGS_lstring var_typeName_3826 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3826, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      GGS_lstring var_t_3917 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3917, inCompiler) ;
      var_typeName_3826 = function_makeEmbeddedTypeLName (var_typeName_3826, var_t_3917, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 101)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 102)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mGetterName_4027 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 104)) ;
  GGS_formalInputParameterListAST var_mFormalInputParameterList_4167 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_4167, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 106)) ;
  GGS_lstring var_returnedTypeName_4246 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4246, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_3826, var_mGetterName_4027, var_mFormalInputParameterList_4167, var_returnedTypeName_4246, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 95)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 102)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 104)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 106)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i16_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 122)) ;
  GGS_lstring var_mGetterName_4760 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 123)) ;
  GGS_formalInputParameterListAST var_mFormalInputParameterList_4900 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_4900, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 125)) ;
  GGS_lstring var_returnedTypeName_4979 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4979, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_mGetterName_4760, var_mFormalInputParameterList_4900, var_returnedTypeName_4979, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 127)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 122)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 123)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 125)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 112)) ;
  GGS_lstring var_typeName_4503 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4503, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_22 (inCompiler) == 2) {
      GGS_lstring var_t_4594 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4594, inCompiler) ;
      var_typeName_4503 = function_makeEmbeddedTypeLName (var_typeName_4503, var_t_4594, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas3", 118)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 119)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_4713 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 121)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_4815 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4815, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 123)) ;
  GGS_lstring var_returnedTypeName_4893 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4893, inCompiler) ;
  GGS_lstring var_resultVariableName_4927 ;
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    var_resultVariableName_4927 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 127)) ;
  } break ;
  case 2: {
    var_resultVariableName_4927 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 129)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 131)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5148 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5148, inCompiler) ;
  GGS_location var_endOfInstructionList_5189 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 134)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_4503, var_getterName_4713, var_formalInputParameterList_4815, var_returnedTypeName_4893, var_resultVariableName_4927, var_routineInstructionList_5148, var_endOfInstructionList_5189, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 112)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_22 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 119)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 121)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 123)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 127)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 131)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 151)) ;
  GGS_lstring var_typeName_5777 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      GGS_lstring var_t_5873 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_5873, inCompiler) ;
      var_typeName_5777 = function_makeEmbeddedTypeLName (var_typeName_5777, var_t_5873, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas3", 156)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 157)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_5992 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 159)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_6094 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6094, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 161)) ;
  GGS_lstring var_returnedTypeName_6172 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_6172, inCompiler) ;
  GGS_lstring var_resultVariableName_6206 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 163)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 164)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_6337 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_6337, inCompiler) ;
  GGS_location var_endOfInstructionList_6378 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 167)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_5777, var_getterName_5992, var_formalInputParameterList_6094, var_returnedTypeName_6172, var_resultVariableName_6206, var_routineInstructionList_6337, var_endOfInstructionList_6378, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 168)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 151)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 157)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 159)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 161)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 164)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 167)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 92)) ;
  GGS_lstring var_typeName_3785 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3785, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 94)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_25 (inCompiler) == 2) {
      GGS_lstring var_t_3876 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3876, inCompiler) ;
      var_typeName_3785 = function_makeEmbeddedTypeLName (var_typeName_3785, var_t_3876, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 98)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 99)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3995 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 101)) ;
  GGS_formalParameterListAST var_formalParameterList_4123 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4123, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 103)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4233 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4233, inCompiler) ;
  GGS_location var_endOfMethodLocation_4274 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 106)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3785, var_methodName_3995, var_formalParameterList_4123, var_routineInstructionList_4233, var_endOfMethodLocation_4274, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 92)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 94)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_25 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 99)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 101)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 103)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i20_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 122)) ;
  GGS_lstring var_methodName_4832 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 123)) ;
  GGS_formalParameterListAST var_formalParameterList_4960 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4960, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 125)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5070 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5070, inCompiler) ;
  GGS_location var_endOfMethodLocation_5111 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 128)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_4832, var_formalParameterList_4960, var_routineInstructionList_5070, var_endOfMethodLocation_5111, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 122)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 123)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 125)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 128)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 110)) ;
  GGS_lstring var_typeName_4466 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4466, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_26 (inCompiler) == 2) {
      GGS_lstring var_t_4557 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4557, inCompiler) ;
      var_typeName_4466 = function_makeEmbeddedTypeLName (var_typeName_4466, var_t_4557, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 116)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_4667 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 119)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_4814 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4814, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 121)) ;
  GGS_lstring var_returnedTypeName_4892 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4892, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_4466, var_getterName_4667, var_formalInputParameterList_4814, var_returnedTypeName_4892, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 110)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_26 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 119)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 121)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i22_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 138)) ;
  GGS_lstring var_getterName_5429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 139)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_5576 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5576, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 141)) ;
  GGS_lstring var_returnedTypeName_5654 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5654, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_5429, var_formalInputParameterList_5576, var_returnedTypeName_5654, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 138)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 139)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 141)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 54)) ;
  GGS_lstring var_typeName_2307 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2307, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 56)) ;
  GGS_equatableComparableExtension var_theExtension_2362 ;
  switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 59)) ;
    var_theExtension_2362 = GGS_equatableComparableExtension::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 62)) ;
    var_theExtension_2362 = GGS_equatableComparableExtension::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 63)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_2307, var_theExtension_2362, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 54)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 56)) ;
  switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 62)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 80)) ;
  GGS_lstring var_typeName_3342 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3342, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      GGS_lstring var_t_3433 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3433, inCompiler) ;
      var_typeName_3342 = function_makeEmbeddedTypeLName (var_typeName_3342, var_t_3433, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 86)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 87)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mMethodName_3552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 89)) ;
  GGS_formalParameterListAST var_formalParameterList_3681 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3681, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_3342, var_mMethodName_3552, var_formalParameterList_3681, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 91)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 80)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_28 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 87)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 89)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i25_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 104)) ;
  GGS_lstring var_methodName_4177 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 105)) ;
  GGS_formalParameterListAST var_formalParameterList_4305 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4305, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_4177, var_formalParameterList_4305, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 104)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 105)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 88)) ;
  GGS_lstring var_typeName_3606 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3606, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_29 (inCompiler) == 2) {
      GGS_lstring var_t_3697 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3697, inCompiler) ;
      var_typeName_3606 = function_makeEmbeddedTypeLName (var_typeName_3606, var_t_3697, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas3", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 95)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3816 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 97)) ;
  GGS_formalParameterListAST var_formalParameterList_3936 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3936, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 99)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4046 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4046, inCompiler) ;
  GGS_location var_endOfMethodLocation_4077 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 102)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3606, var_methodName_3816, var_formalParameterList_3936, var_routineInstructionList_4046, var_endOfMethodLocation_4077, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 88)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_29 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 95)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 97)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 99)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i27_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 117)) ;
  GGS_lstring var_methodName_4631 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 118)) ;
  GGS_formalParameterListAST var_formalParameterList_4751 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4751, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 120)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4861 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4861, inCompiler) ;
  GGS_location var_endOfMethodLocation_4892 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 123)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_4631, var_formalParameterList_4751, var_routineInstructionList_4861, var_endOfMethodLocation_4892, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 117)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 118)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 120)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 67)) ;
  GGS_lstring var_structTypeName_2639 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 68)) ;
  GGS_structComparison var_comparison_2706 ;
  switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    var_comparison_2706 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-struct.galgas3", 71)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 73)) ;
    var_comparison_2706 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas3", 74)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 76)) ;
    var_comparison_2706 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas3", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 79)) ;
  GGS_propertyInCollectionListAST var_propertyList_2920 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_2920, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_structTypeName_2639, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 87)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_structTypeName_2639, var_propertyList_2920, GGS_string::makeEmptyString (), var_comparison_2706, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 67)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 68)) ;
  switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 88)) ;
  GGS_lstring var_listTypeName_3460 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 89)) ;
  GGS_bool var_isUsefull_3534 = GGS_bool (false) ;
  GGS_bool var_isEquatable_3560 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 94)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isEquatable_3560.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 96)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 96)) ;
        }
      }
      var_isEquatable_3560 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 100)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_3534.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 102)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 102)) ;
        }
      }
      var_isUsefull_3534 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 106)) ;
  GGS_propertyInCollectionListAST var_propertyList_3936 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3936, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_listTypeName_3460, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (false), var_listTypeName_3460, var_propertyList_3936, var_isUsefull_3534, var_isEquatable_3560, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 88)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 100)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 106)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_5330 ;
  nt_acces_5F_control_ (var_accessControl_5330, inCompiler) ;
  GGS_propertyMutability var_mutability_5372 ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 142)) ;
    var_mutability_5372 = GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas3", 143)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 145)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_5330, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 146)) ;
    var_mutability_5372 = GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-property.galgas3", 147)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_5605 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_5605, inCompiler) ;
  GGS_lstring var_propertyName_5644 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 150)) ;
  GGS_bool var_selectorAttribute_5665 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 154)) ;
      var_selectorAttribute_5665 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_propertyInCollectionInitializationAST var_initialization_5820 ;
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    var_initialization_5820 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 159)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 161)) ;
    GGS_semanticExpressionAST var_expression_5933 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_5933, inCompiler) ;
    var_initialization_5820 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_5933  COMMA_SOURCE_FILE ("declaration-property.galgas3", 163)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssignOperation (var_mutability_5372, var_propertyTypeName_5605, var_propertyName_5644, var_accessControl_5330, var_selectorAttribute_5665, var_initialization_5820  COMMA_SOURCE_FILE ("declaration-property.galgas3", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 145)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 150)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 154)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 161)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_6505 ;
  nt_acces_5F_control_ (var_accessControl_6505, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 179)) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 181)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 183)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 184)), GGS_string ("a weak property is mutable, should be declared with 'var'"), fixItArray0  COMMA_SOURCE_FILE ("declaration-property.galgas3", 184)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_6706 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_6706, inCompiler) ;
  GGS_lstring var_propertyName_6745 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 187)) ;
  GGS_bool var_selectorAttribute_6766 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 191)) ;
      var_selectorAttribute_6766 = GGS_bool (true) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_propertyInCollectionInitializationAST var_initialization_6921 ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    var_initialization_6921 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 196)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 198)) ;
    GGS_semanticExpressionAST var_expression_7034 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_7034, inCompiler) ;
    var_initialization_6921 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_7034  COMMA_SOURCE_FILE ("declaration-property.galgas3", 200)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyWeakTypeName_7116 = function_makeWeakTypeLName (var_propertyTypeName_6706, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 202)) ;
  ioArgument_ioAttributeInCollectionList.addAssignOperation (GGS_propertyMutability::class_func_weakProperty (SOURCE_FILE ("declaration-property.galgas3", 208)), var_propertyWeakTypeName_7116, var_propertyName_6745, var_accessControl_6505, var_selectorAttribute_6766, var_initialization_6921  COMMA_SOURCE_FILE ("declaration-property.galgas3", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 179)) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 181)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 183)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 187)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 191)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 198)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 104)) ;
  GGS_lstring var_enumTypeName_3805 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 105)) ;
  GGS_structComparison var_comparison_3868 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas3", 106)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 109)) ;
      switch (var_comparison_3868.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_3868 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas3", 112)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 114)), GGS_string ("duplicated attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 114)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 116)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 116)) ;
        }
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 119)) ;
      switch (var_comparison_3868.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_3868 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas3", 122)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 124)), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 124)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 126)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 126)) ;
        }
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 129)) ;
  GGS_enumConstantList var_constantList_4508 = GGS_enumConstantList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 133)) ;
      GGS_lstring var_constantName_4585 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 134)) ;
      GGS__5B_associatedValue_5D_ var_associatedValueTypeList_4627 = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_HERE) ;
      switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 138)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GGS_bool var_weakQualifier_4726 ;
          switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
          case 1: {
            var_weakQualifier_4726 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 144)) ;
            var_weakQualifier_4726 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_associatedValueType_4920 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedValueType_4920, inCompiler) ;
          GGS_lstring var_associatedValueName_4968 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 148)) ;
          {
          var_associatedValueTypeList_4627.setter_append (GGS_associatedValue::init_21__21__21_ (var_weakQualifier_4726, var_associatedValueType_4920, var_associatedValueName_4968, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 149)) ;
          }
          if (select_galgas_34_DeclarationsSyntax_43 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 151)) ;
          }else{
            repeatFlag_6 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 153)) ;
      } break ;
      default:
        break ;
      }
      var_constantList_4508.addAssignOperation (var_constantName_4585, var_associatedValueTypeList_4627  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 155)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_enumTypeName_3805, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 159)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_constantList_4508.getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (var_enumTypeName_3805.readProperty_location (), GGS_string ("an enumerated type must define at least one case constant"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 161)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GGS_bool (false), var_enumTypeName_3805, var_constantList_4508, var_comparison_3868, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 163)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 104)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 109)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 129)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 134)) ;
      switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 138)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 144)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 148)) ;
          if (select_galgas_34_DeclarationsSyntax_43 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 151)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 153)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 63)) ;
  GGS_lstring var_graphTypeName_2640 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 65)) ;
  GGS_lstring var_associatedListTypeName_2731 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedListTypeName_2731, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 68)) ;
  GGS_graphInsertModifierList var_graphInsertModifierList_2778 = GGS_graphInsertModifierList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 72)) ;
      GGS_lstring var_insertName_2908 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 74)) ;
      GGS_lstring var_errorMessage_2972 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 75)) ;
      var_graphInsertModifierList_2778.addAssignOperation (var_insertName_2908, var_errorMessage_2972  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 76)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 78)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_graphTypeName_2640, var_associatedListTypeName_2731, var_graphInsertModifierList_2778, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 63)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 65)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 74)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GGS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 207)) ;
      GGS_lstring var_typeName_8335 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_8335, inCompiler) ;
      outArgument_outTypeName = function_makeEmbeddedTypeLName (outArgument_outTypeName, var_typeName_8335, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 209)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 211)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_t_8506 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_t_8506, inCompiler) ;
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_t_8506.readProperty_location (), GGS_string ("not handled yet"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 214)) ;
        if (select_galgas_34_DeclarationsSyntax_47 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 216)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 218)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 223)) ;
    GGS_lstring var_unwrappedTypeName_8655 = outArgument_outTypeName ;
    {
    extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, outArgument_outTypeName, var_unwrappedTypeName_8655, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 225)) ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 207)) ;
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 211)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_indexing (inCompiler) ;
        if (select_galgas_34_DeclarationsSyntax_47 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 216)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 218)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 223)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i35_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 233)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 233)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 240)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    GGS_lstring var_elementTypeName_9391 = outArgument_outTypeName ;
    outArgument_outTypeName = function_makeArrayTypeLName (var_elementTypeName_9391, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 244)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 245)).operator_not (SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 245)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 246)) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21__21__21_isUsefull_21_equatable (GGS_bool (false), outArgument_outTypeName, var_elementTypeName_9391, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 247)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 256)) ;
    GGS_lstring joker_9929 ; // Joker input parameter
    nt_type_5F_definition_ (ioArgument_ioDeclarations, joker_9929, inCompiler) ;
    joker_9929.drop () ; // Release temporary input variables (joker in source)
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 258)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 258)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 240)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 256)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_50 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 271)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 273)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 273)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_50 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 271)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 160)) ;
  GGS_lstring var_mapTypeName_6005 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 161)) ;
  GGS_bool var_isEquatable_6083 ;
  switch (select_galgas_34_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    var_isEquatable_6083 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 166)) ;
    var_isEquatable_6083 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 169)) ;
  GGS_propertyInCollectionListAST var_propertyList_6207 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertSetterListAST var_mInsertSetterList_6262 = GGS_insertSetterListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mSearchMethodList_6334 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mRemoveSetterList_6386 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_replaceMethodList_6438 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_6505 = GGS_insertOrReplaceDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_searchSubscriptListAST_6573 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_6207, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertSetterList_6262, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_ (var_mSearchMethodList_6334, inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_ (var_searchSubscriptListAST_6573, inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_ (var_mRemoveSetterList_6386, inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_ (var_replaceMethodList_6438, inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_6505, inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_ (var_mapTypeName_6005, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 195)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (GGS_bool (false), var_mapTypeName_6005, var_propertyList_6207, var_mInsertSetterList_6262, var_mSearchMethodList_6334, var_searchSubscriptListAST_6573, var_mRemoveSetterList_6386, var_replaceMethodList_6438, var_insertOrReplaceDeclarationListAST_6505, var_isEquatable_6083, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 160)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 161)) ;
  switch (select_galgas_34_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i39_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 213)) ;
  GGS_lstring var_methodName_7783 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 214)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 215)) ;
  GGS_lstring var_errorMessage_7843 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 216)) ;
  ioArgument_ioMapSearchMethodListAST.addAssignOperation (var_methodName_7783, var_errorMessage_7843  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 217)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 214)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 215)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 216)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i40_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchSubscriptListAST,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 223)) ;
  GGS_lstring var_methodName_8187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 225)) ;
  GGS_lstring var_errorMessage_8247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 226)) ;
  ioArgument_ioMapSearchSubscriptListAST.addAssignOperation (var_methodName_8187, var_errorMessage_8247  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 227)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 226)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i41_ (GGS_mapAccessorListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 233)) ;
  GGS_lstring var_mMethodName_8585 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 235)) ;
  GGS_lstring var_mErrorMessage_8646 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 236)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssignOperation (var_mMethodName_8585, var_mErrorMessage_8646  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 237)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i42_ (GGS_mapAccessorListAST & ioArgument_ioMapReplaceMethodListAST,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 243)) ;
  GGS_lstring var_mMethodName_8965 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 245)) ;
  GGS_lstring var_mErrorMessage_9026 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 246)) ;
  ioArgument_ioMapReplaceMethodListAST.addAssignOperation (var_mMethodName_8965, var_mErrorMessage_9026  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 247)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 243)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 246)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i43_ (GGS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 253)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssignOperation (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 254))  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 254)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 253)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i44_ (GGS_insertSetterListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 260)) ;
  GGS_lstring var_mMethodName_9648 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 261)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 262)) ;
  GGS_lstring var_mErrorMessage_9709 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 263)) ;
  GGS_lstring var_mShadowErrorMessage_9740 ;
  switch (select_galgas_34_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_9740 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 266)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 268)) ;
    var_mShadowErrorMessage_9740 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 269)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssignOperation (var_mMethodName_9648, var_mErrorMessage_9709, var_mShadowErrorMessage_9740  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 271)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 260)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 261)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 262)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 263)) ;
  switch (select_galgas_34_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 268)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 269)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 69)) ;
  GGS_lstring var_boolsetTypeName_2732 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 70)) ;
  GGS_bool var_isEquatable_2788 ;
  switch (select_galgas_34_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
    var_isEquatable_2788 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 75)) ;
    var_isEquatable_2788 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 78)) ;
  GGS_lstringlist var_slotList_2925 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 82)) ;
      GGS_lstring var_slotName_2998 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 83)) ;
      var_slotList_2925.addAssignOperation (var_slotName_2998  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 84)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_boolsetTypeName_2732, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 88)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_slotList_2925.getter_count (SOURCE_FILE ("declaration-type-boolset.galgas3", 89)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_boolsetTypeName_2732.readProperty_location (), GGS_string ("a boolset type must define at least one case constant"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 90)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_boolsetDeclarationAST::init_21_isPredefined_21__21__21_isEquatable (GGS_bool (false), var_boolsetTypeName_2732, var_slotList_2925, var_isEquatable_2788, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 92)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 69)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 70)) ;
  switch (select_galgas_34_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 82)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 83)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_bool var_isAbstract_3730 ;
  GGS_bool var_clonable_3755 ;
  GGS_bool var_finalClass_3778 ;
  switch (select_galgas_34_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
    var_isAbstract_3730 = GGS_bool (false) ;
    var_clonable_3755 = GGS_bool (false) ;
    var_finalClass_3778 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 117)) ;
    var_isAbstract_3730 = GGS_bool (true) ;
    var_clonable_3755 = GGS_bool (false) ;
    var_finalClass_3778 = GGS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 122)) ;
    var_isAbstract_3730 = GGS_bool (false) ;
    var_clonable_3755 = GGS_bool (false) ;
    var_finalClass_3778 = GGS_bool (true) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 127)) ;
    var_isAbstract_3730 = GGS_bool (false) ;
    var_clonable_3755 = GGS_bool (true) ;
    var_finalClass_3778 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 132)) ;
  GGS_lstring var_className_4205 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 133)) ;
  GGS_lstring var_superClassName_4257 ;
  switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    var_superClassName_4257 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas3", 136)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 138)) ;
    var_superClassName_4257 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 139)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_generateInSeparateFile_4451 ;
  switch (select_galgas_34_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_4451 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 145)) ;
    var_generateInSeparateFile_4451 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 148)) ;
  GGS_propertyInCollectionListAST var_propertyList_4676 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_59 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_4676, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_className_4205, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 157)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_isAbstract_3730, var_finalClass_3778, var_className_4205, var_superClassName_4257, var_generateInSeparateFile_4451, var_propertyList_4676, var_clonable_3755, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 158)) ;
  GGS_lstring temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_superClassName_4257.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = var_superClassName_4257 ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = function_makeWeakTypeLName (var_superClassName_4257, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 175)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_className_4205, function_makeWeakTypeLName (var_className_4205, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 172)), temp_1, var_generateInSeparateFile_4451, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 117)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 122)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 127)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 132)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 133)) ;
  switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 138)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 139)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 145)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_59 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 157)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i47_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 86)) ;
  GGS_lstring var_mDictTypeName_3421 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 88)) ;
  GGS_bool var_equatable_3501 ;
  switch (select_galgas_34_DeclarationsSyntax_60 (inCompiler)) {
  case 1: {
    var_equatable_3501 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 93)) ;
    var_equatable_3501 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 96)) ;
  GGS_lstring var_keyTypeName_3655 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_keyTypeName_3655, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 99)) ;
  GGS_propertyInCollectionListAST var_propertyList_3706 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_61 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3706, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_mDictTypeName_3421, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 107)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_dictDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_mDictTypeName_3421, var_keyTypeName_3655, var_propertyList_3706, var_equatable_3501, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 88)) ;
  switch (select_galgas_34_DeclarationsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 93)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 96)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_61 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 86)) ;
  GGS_lstring var_sortedListTypeName_3234 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 87)) ;
  GGS_bool var_isEquatable_3326 ;
  switch (select_galgas_34_DeclarationsSyntax_62 (inCompiler)) {
  case 1: {
    var_isEquatable_3326 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 92)) ;
    var_isEquatable_3326 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 95)) ;
  GGS_propertyInCollectionListAST var_attributeList_3479 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_63 (inCompiler) == 2) {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_attributeList_3479, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 102)) ;
  GGS_sortedListSortDescriptorListAST var_sortDescriptorList_3648 = GGS_sortedListSortDescriptorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_3648, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 107)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 109)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_sortedListDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_sortedListTypeName_3234, var_attributeList_3479, var_sortDescriptorList_3648, var_isEquatable_3326, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 110)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 87)) ;
  switch (select_galgas_34_DeclarationsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 92)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_63 (inCompiler) == 2) {
      nt_property_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 107)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i49_ (GGS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mSortedAttributeName_4244 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 122)) ;
  GGS_bool var_mAscending_4279 ;
  switch (select_galgas_34_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 125)) ;
    var_mAscending_4279 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 128)) ;
    var_mAscending_4279 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssignOperation (var_mSortedAttributeName_4244, var_mAscending_4279  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i49_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 122)) ;
  switch (select_galgas_34_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 128)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 165)) ;
  GGS_lstring var_externTypeName_6677 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 166)) ;
  GGS_string var_cppPredeclarationCode_6763 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_6763, inCompiler) ;
  GGS_string var_cppClassCode_6828 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_6828, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 169)) ;
  GGS_externTypeConstructorList var_externTypeConstructorList_6884 = GGS_externTypeConstructorList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeGetterList var_externTypeGetterList_6946 = GGS_externTypeGetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeSetterList var_externTypeSetterList_7003 = GGS_externTypeSetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeMethodList var_externTypeMethodList_7060 = GGS_externTypeMethodList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_66 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (ioArgument_ioDeclarations, var_externTypeConstructorList_6884, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (ioArgument_ioDeclarations, var_externTypeGetterList_6946, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (ioArgument_ioDeclarations, var_externTypeSetterList_7003, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (ioArgument_ioDeclarations, var_externTypeMethodList_7060, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 184)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_externTypeName_6677, var_cppPredeclarationCode_6763, var_cppClassCode_6828, var_externTypeConstructorList_6884, var_externTypeGetterList_6946, var_externTypeSetterList_7003, var_externTypeMethodList_7060, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 185)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 165)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 166)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_66 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 184)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i51_ (GGS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 200)) ;
  outArgument_outCppPredeclarationCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_67 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_8015 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 204)) ;
      outArgument_outCppPredeclarationCode.plusAssignOperation(var_cppPredeclarationCodeElement_8015.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 205)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i51_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 204)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i52_ (GGS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 213)) ;
  outArgument_outCppClassCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_68 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_8390 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 217)) ;
      outArgument_outCppClassCode.plusAssignOperation(var_cppPredeclarationCodeElement_8390.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 218)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 220)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i52_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 213)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 217)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 220)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i53_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 228)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_8825 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_71 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_8922 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 234)) ;
        GGS_lstring var_argumentTypeName_8981 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_8981, inCompiler) ;
        GGS_lstring var_argumentName_9026 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 236)) ;
        var_argumentTypeList_8825.addAssignOperation (var_selector_8922, var_argumentTypeName_8981, var_argumentName_9026  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 237)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 239)) ;
        GGS_lstring var_selector_9150 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 240)) ;
        GGS_lstring var_argumentTypeName_9219 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_9219, inCompiler) ;
        GGS_lstring var_argumentName_9264 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 242)) ;
        var_argumentTypeList_8825.addAssignOperation (var_selector_9150, var_argumentTypeName_9219, var_argumentName_9264  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 243)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_70 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 246)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 249)) ;
  ioArgument_ioExternTypeConstructorList.addAssignOperation (var_argumentTypeList_8825  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 250)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i53_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 228)) ;
  switch (select_galgas_34_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_71 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 234)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 236)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 239)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 242)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_70 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 246)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 249)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i54_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 257)) ;
  GGS_lstring var_getterName_9755 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 258)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_9807 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_72 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_9875 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 262)) ;
      GGS_lstring var_argumentTypeName_9930 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_9930, inCompiler) ;
      GGS_lstring var_argumentName_9980 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 264)) ;
      var_argumentTypeList_9807.addAssignOperation (var_selector_9875, var_argumentTypeName_9930, var_argumentName_9980  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 265)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 267)) ;
      GGS_lstring var_selector_10091 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 268)) ;
      GGS_lstring var_argumentTypeName_10156 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_10156, inCompiler) ;
      GGS_lstring var_argumentName_10206 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 270)) ;
      var_argumentTypeList_9807.addAssignOperation (var_selector_10091, var_argumentTypeName_10156, var_argumentName_10206  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 271)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 273)) ;
  GGS_lstring var_resultTypeName_10348 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_10348, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssignOperation (var_getterName_9755, var_resultTypeName_10348, var_argumentTypeList_9807  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 275)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i54_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 258)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_72 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 262)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 264)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 267)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 270)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 273)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i55_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 282)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 283)) ;
  GGS_lstring var_setterName_10750 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 284)) ;
  GGS_formalParameterListAST var_formalParameterList_10835 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_10835, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssignOperation (var_setterName_10750, var_formalParameterList_10835  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 286)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i55_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 282)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 283)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 284)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i56_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 293)) ;
  GGS_lstring var_methodName_11209 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 294)) ;
  GGS_formalParameterListAST var_formalParameterList_11294 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_11294, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssignOperation (var_methodName_11209, var_formalParameterList_11294, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 296))  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 296)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i56_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 294)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

