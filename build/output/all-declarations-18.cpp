#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 454)) ;
  GGS_lstring var_lexiqueComponentName_16770 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 457)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_16860 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_16924 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_16987 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_17043 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_17102 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_17174 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_17249 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_17310 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_17357 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_16860, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_16924, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_16987, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_17043, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_17102, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_17249, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_17310, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_17310, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_17174, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_17357, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_16770, GGS_bool (false), var_templateDelimitorList_16860, var_templateReplacementList_16924, var_lexicalAttributeList_16987, var_lexicalStyleList_17043, var_terminalDeclarationList_17102, var_lexicalMessageDeclarationList_17174, var_lexicalListDeclarationList_17249, var_lexicalRuleList_17310, var_indexingListAST_17357, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 491)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 454)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 457)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 454)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 457)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  GGS_lstring var_indexName_18724 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  GGS_lstring var_indexComment_18803 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_18724, var_indexComment_18803  COMMA_SOURCE_FILE ("lexique-component.galgas", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  GGS_lstring var_messageName_19135 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  GGS_lstring var_messageValue_19184 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_19135, var_messageValue_19184  COMMA_SOURCE_FILE ("lexique-component.galgas", 525)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  GGS_lstring var_listName_19504 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_19504, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 534)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 540)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_19834 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_19834, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  GGS_lexicalInstructionListAST var_instructionList_19899 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_19899, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_19834, var_instructionList_19899, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 549)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 540)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 540)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 555)) ;
  GGS_lexicalInstructionAST var_instruction_20359 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_20359, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_20359  COMMA_SOURCE_FILE ("lexique-component.galgas", 557)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 555)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 555)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  GGS_lexicalExpressionAST var_whileExpression_20665 ;
  nt_lexical_5F_expression_ (var_whileExpression_20665, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 565)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_20724 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_20724, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_20665, var_whileInstructionList_20724  COMMA_SOURCE_FILE ("lexique-component.galgas", 571)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 565)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 565)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lchar var_character_21149 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 577)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_21149, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 577)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 577)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_21477 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 584)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_21477, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 584)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 584)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_21798 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 591)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 592)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_21798, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 592)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 592)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_22170 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_22170, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 603)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_22324 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 607)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_22491 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_22491, inCompiler) ;
        var_functionActualArgumentList_22324.addAssignOperation (var_arg_22491  COMMA_SOURCE_FILE ("lexique-component.galgas", 609)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 611)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_22170, var_functionActualArgumentList_22324, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 603)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 607)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 611)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 603)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 607)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 611)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
      GGS_lexicalExpressionAST var_rightExpression_23134 ;
      nt_lexical_5F_factor_ (var_rightExpression_23134, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_23134, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
      nt_lexical_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_string_23427 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 637)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_23427, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 637)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 637)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  GGS_lstring var_string_23685 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  GGS_lstring var_errorMessage_23726 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 647)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_23685, var_errorMessage_23726, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 647)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 647)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_24004 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_24004, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    GGS_lchar var_upperBound_24131 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 659)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_24004, var_upperBound_24131, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 659)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 659)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_24432 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_24432, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  GGS_lstring var_name_24748 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_24790 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_24859 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      GGS_lstring var_sentAttribute_24892 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
      var_sentAttributeList_24790.addAssignOperation (var_selector_24859, var_sentAttribute_24892  COMMA_SOURCE_FILE ("lexique-component.galgas", 681)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      GGS_lstring var_selector_24988 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 684)) ;
      GGS_lstring var_sentAttribute_25031 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
      var_sentAttributeList_24790.addAssignOperation (var_selector_24988, var_sentAttribute_25031  COMMA_SOURCE_FILE ("lexique-component.galgas", 686)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_25122 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
    var_theStyle_25122 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 691)) ;
  } break ;
  case 2: {
    var_theStyle_25122 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 693)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  GGS_lstring var_errorMessage_25326 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 697)) ;
  GGS_lexicalListEntryListAST var_entryList_25355 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_25355, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_24748, var_theStyle_25122, var_errorMessage_25326, var_sentAttributeList_24790, var_entryList_25355  COMMA_SOURCE_FILE ("lexique-component.galgas", 705)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 691)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 697)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 691)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 697)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_entrySpelling_25793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
  GGS_bool var_isTemplateEndMark_25815 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_25849 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 716)) ;
      var_isTemplateEndMark_25815 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 719)) ;
      var_nonAtomicSelection_25849 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_26048 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
    var_terminalSpelling_26048 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 725)) ;
  } break ;
  case 2: {
    var_terminalSpelling_26048 = var_entrySpelling_25793 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_25793, var_terminalSpelling_26048, var_nonAtomicSelection_25849, var_isTemplateEndMark_25815  COMMA_SOURCE_FILE ("lexique-component.galgas", 729)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 716)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 719)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 725)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 716)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 719)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 725)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GGS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_26572 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  GGS_lstring var_name_26612 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_26572, var_name_26612  COMMA_SOURCE_FILE ("lexique-component.galgas", 741)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_name_26891 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_26933 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_27030 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      GGS_lstring var_sentAttribute_27063 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
      var_sentAttributeList_26933.addAssignOperation (var_selector_27030, var_sentAttribute_27063  COMMA_SOURCE_FILE ("lexique-component.galgas", 753)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      GGS_lstring var_selector_27159 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
      GGS_lstring var_sentAttribute_27202 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
      var_sentAttributeList_26933.addAssignOperation (var_selector_27159, var_sentAttribute_27202  COMMA_SOURCE_FILE ("lexique-component.galgas", 758)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_27293 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas", 760)) ;
  GGS_bool var_nonAtomicSelection_27351 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_27386 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 765)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_27293.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 767)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 767)) ;
        }
      }
      var_theStyle_27293 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 771)) ;
      var_nonAtomicSelection_27351 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 774)) ;
      var_templateEndMark_27386 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  GGS_lstring var_errorMessage_27772 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_26891, var_sentAttributeList_26933, var_errorMessage_27772, var_theStyle_27293, var_nonAtomicSelection_27351, var_templateEndMark_27386  COMMA_SOURCE_FILE ("lexique-component.galgas", 779)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 765)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 771)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 774)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 765)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 771)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 774)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  GGS_lstring var_styleIdentifier_28202 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 792)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_28202.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28202.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas", 794)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_28202.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas", 796)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28202.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 797)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  GGS_lstring var_comment_28638 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_28202, var_comment_28638  COMMA_SOURCE_FILE ("lexique-component.galgas", 801)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 792)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 792)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  GGS_lstring var_tagName_2538 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  GGS_lstring var_terminalName_2581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 58)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_2538, var_terminalName_2581, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  GGS_lstring var_tagName_2427 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_2427, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  GGS_lstring var_warningMessageName_2469 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_2469, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_actionName_4441 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 107)) ;
  GGS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_4501 = GGS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      GGS_location var_passingModeLocation_4575 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 113)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_4707 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_4707, inCompiler) ;
      var_actualArgumentList_4501.addAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_4575, var_arg_4707, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 115)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
      GGS_location var_passingModeLocation_4830 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 118)) ;
      GGS_lstring var_attributeName_4900 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 119)) ;
      GGS_lexicalAttributeInputOutputArgumentAST var_arg_4924 = GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_4830, var_attributeName_4900, inCompiler COMMA_HERE) ;
      var_actualArgumentList_4501.addAssignOperation (var_arg_4924  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstringlist var_errorMessageList_5070 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_5173 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
      var_errorMessageList_5070.addAssignOperation (var_errorMessageName_5173  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 129)) ;
      if (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 134)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_4441, var_actualArgumentList_4501, var_errorMessageList_5070, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
      if (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
      if (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  GGS_lstring var_lexiqueComponentName_4915 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  GGS_lstring var_lexiqueSuperComponentName_4975 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 140)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_5070 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_5134 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_5070, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_5134, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_4915, var_lexiqueSuperComponentName_4975, var_templateDelimitorList_5070, var_templateReplacementList_5134, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 150)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i27_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  GGS_lstring var_startString_5798 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 163)) ;
  GGS_bool var_nonAtomicSelection_5818 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_5853 = GGS_bool (false) ;
  GGS_bool var_preserved_5885 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 169)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_5818.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 171)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 171)) ;
        }
      }
      var_nonAtomicSelection_5818 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 175)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_5853.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 177)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 177)) ;
        }
      }
      var_templateEndMark_5853 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 181)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_5885.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 183)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 183)) ;
        }
      }
      var_preserved_5885 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  GGS_lstring var_endString_6447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 188)) ;
  ioArgument_ioTemplateDelimitorList.addAssignOperation (var_startString_5798, var_nonAtomicSelection_5818, var_templateEndMark_5853, var_preserved_5885, var_endString_6447  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 189)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 169)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 175)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 188)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 169)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 175)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i28_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  GGS_lstring var_matchString_6857 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 201)) ;
  GGS_lstring var_replacementString_6886 ;
  GGS_lstring var_replacementFunction_6921 ;
  switch (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    var_replacementString_6886 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
    var_replacementFunction_6921 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
    var_replacementString_6886 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 211)) ;
    var_replacementFunction_6921 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 212)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssignOperation (var_matchString_6857, var_replacementString_6886, var_replacementFunction_6921  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 214)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 201)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 201)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  GGS_lstring var_terminalName_2443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_2443, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 75)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_3158 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78)) ;
    GGS_lexicalExpressionAST var_selectExpression_3265 ;
    nt_lexical_5F_expression_ (var_selectExpression_3265, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 80)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_3329 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_3329, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_3158.addAssignOperation (var_selectExpression_3265, var_selectInstructionList_3329  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 86)) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 89)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_3586 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_3586, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 95)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_3158, var_defaultInstructionList_3586, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
        nt_lexical_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 89)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 89)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  GGS_lstring var_errorMessageName_2455 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_2455, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 69)) ;
  GGS_location var_location_2933 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 70)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_2994 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2994, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_3142 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_3142, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 81)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2994, var_lexicalWhileBranchList_3142, var_location_2933, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_parse (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_3243 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_3335 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    GGS_lstring var_searchListName_3393 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 79)) ;
    var_lexicalSendSearchList_3243.addAssignOperation (var_attributeName_3335, var_searchListName_3393  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 80)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_3563 ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_3634 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 87)) ;
    var_lexicalSendDefaultAction_3563 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_3634, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
    GGS_lstring var_defaultErrorMessageName_3797 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 91)) ;
    var_lexicalSendDefaultAction_3563 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_3797, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_3243, var_lexicalSendDefaultAction_3563, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 50)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i35_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_2440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 51)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_2440, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 51)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 93)) ;
  GGS_lstring var_optionComponentName_3483 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
  GGS_commandLineOptionListAST var_options_3545 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_3545, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_3483, var_options_3545, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_4006 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
  GGS_lstring var_mOptionInternalName_4053 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 114)) ;
  GGS_lchar var_mOptionInvocationLetter_4106 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 116)) ;
  GGS_lstring var_mOptionInvocationString_4167 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  GGS_lstring var_mOptionComment_4229 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  GGS_lstring var_defaultValue_4252 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 120)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_4333 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_4333 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_4252 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
      var_optionDefaultValueKind_4333 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 128)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_4626 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
      var_defaultValue_4252 = GGS_lstring::init_21__21_ (var_v_4626.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 131)), var_v_4626.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_4333 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 132)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_4006, var_mOptionInternalName_4053, var_mOptionInvocationLetter_4106, var_mOptionInvocationString_4167, var_mOptionComment_4229, var_defaultValue_4252, var_optionDefaultValueKind_4333  COMMA_SOURCE_FILE ("optionCompilation.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
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

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  GGS_lstring var_mGUIName_8726 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 259)) ;
  GGS_lstringlist var_importedOptionList_8764 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_8824 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_8881 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_8942 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      GGS_lstring var_fileExtension_9028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      GGS_lstring var_indexingPathSuffix_9092 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
      var_projectExtensionList_8942.addAssignOperation (var_fileExtension_9028, var_indexingPathSuffix_9092  COMMA_SOURCE_FILE ("guiCompilation.galgas", 271)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_8824, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_8764, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_8881, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_8726, var_importedOptionList_8764, var_simpleGlobalAttributes_8824, var_withLexiqueList_8881, var_projectExtensionList_8942  COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  GGS_lstring var_lexiqueReference_9796 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  GGS_guiLabelListAST var_labels_9838 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_9886 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_9946 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 301)) ;
      GGS_uint var_displayStyle_10030 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_10030 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)) ;
        var_displayStyle_10030 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_10169 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_10239 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 311)) ;
        GGS_uint var_displayFlags_10266 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_10266 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 316)) ;
          var_displayFlags_10266 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          GGS_lbigint var_leadingStrip_10459 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_10459.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_10459.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 322)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          GGS_lbigint var_endingStrip_10634 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_10634.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 326)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_10634.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 327)) ;
            }
          }
          var_displayFlags_10266 = var_leadingStrip_10459.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)).operator_or (var_endingStrip_10634.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_10169.addAssignOperation (var_terminal_10239, var_displayFlags_10266  COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_9838.addAssignOperation (var_displayStyle_10030, var_terminalList_10169, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_11037 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      GGS_lstring var_name_11072 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)) ;
      GGS_lstring var_value_11097 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 341)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_11182 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)) ;
        var_value_11097 = GGS_lstring::init_21__21_ (var_value_11097.readProperty_string ().add_operation (var_v_11182.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 344)), var_v_11182.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_9946.addAssignOperation (var_key_11037, var_name_11072, var_value_11097  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_11359 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      GGS_lstring var_value_11405 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
      var_simpleAttributes_9886.addAssignOperation (var_name_11359, var_value_11405  COMMA_SOURCE_FILE ("guiCompilation.galgas", 352)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_9796, var_labels_9838, var_simpleAttributes_9886, var_compoundAttributes_9946  COMMA_SOURCE_FILE ("guiCompilation.galgas", 355)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 301)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 311)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 316)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 301)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 311)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 316)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  GGS_lstring var_optionReference_11793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_11793  COMMA_SOURCE_FILE ("guiCompilation.galgas", 364)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mKey_12072 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
  GGS_lstring var_mValue_12093 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 372)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_12166 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)) ;
    var_mValue_12093 = GGS_lstring::init_21__21_ (var_mValue_12093.readProperty_string ().add_operation (var_value_12166.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 375)), var_value_12166.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_12072, var_mValue_12093  COMMA_SOURCE_FILE ("guiCompilation.galgas", 378)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 248)) ;
  GGS_lstring var_syntaxComponentName_10300 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
  GGS_lstring var_importedLexiqueReference_10362 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_10362 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 253)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 255)) ;
    var_importedLexiqueReference_10362 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 256)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 257)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_10564 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10564 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 264)) ;
    var_hasTranslateFeature_10564 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 267)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_10741 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_10812 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_10741, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_10812, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_10300, var_importedLexiqueReference_10362, var_nonterminalDeclarationList_10741, var_ruleList_10812, var_hasTranslateFeature_10564  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 279)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 255)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 256)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 257)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 264)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 255)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 256)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 257)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 264)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 293)) ;
  GGS_lstring var_syntaxComponentName_11596 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 295)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11661 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_11732 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_11661, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_11732, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_11596.readProperty_string (), var_syntaxComponentName_11596, var_nonterminalDeclarationList_11661, var_ruleList_11732, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 307)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 295)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 295)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 326)) ;
  GGS_lstring var_mNonterminalName_12772 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 327)) ;
  GGS_nonTerminalLabelListAST var_labels_12846 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_12933 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_12933, inCompiler) ;
  var_labels_12846.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_12933, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 333)) ;
      GGS_lstring var_labelName_13094 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 334)) ;
      GGS_formalParameterListAST var_formalParameters_13180 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_13180, inCompiler) ;
      var_labels_12846.addAssignOperation (var_labelName_13094, var_formalParameters_13180, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 336))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 336)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_12772, var_labels_12846  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 338)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 326)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 327)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 333)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 334)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 326)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 327)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 333)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 334)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                const GGS_lstring constinArgument_inLabelName,
                                                                                                                GGS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_formalParameterListAST var_mFormalParameters_13794 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_13794, inCompiler) ;
  GGS_location var_endOfArguments_13820 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 348)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_13935 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_13935, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameters_13794, var_endOfArguments_13820, var_mSyntaxInstructionList_13935, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 356))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 351)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 357)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 357)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 357)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 364)) ;
  GGS_lstring var_mNonterminalName_14395 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 365)) ;
  GGS_lstring var_labelName_14444 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 366)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_14495 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_14444, var_mLabelList_14495, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 371)) ;
      var_labelName_14444 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 372)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_14395, var_mLabelList_14495  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 374)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 364)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 365)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 371)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 372)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 364)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 365)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 371)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 372)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GGS_semanticInstructionAST var_instruction_15314 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15314, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15314  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 391)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_15441 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15441, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15441  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 394)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 398)) ;
        } break ;
        case 2: {
          GGS_string var_separator_15582 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 400)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_15582.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 402)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 402)) ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_parse (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 398)) ;
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
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 398)) ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  GGS_location var_instructionLocation_2242 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 48)) ;
  GGS_semanticExpressionAST var_sentExpression_2341 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sentExpression_2341, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_2242, var_sentExpression_2341, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  GGS_location var_mRepeatInstructionLocation_3371 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 74)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_3489 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_3489, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_3522 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 76)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_3575 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    GGS_syntaxInstructionList var_mInstructionList_3729 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_3729, inCompiler) ;
    var_mRepeatBranchList_3575.addAssignOperation (var_mInstructionList_3729, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 81))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 81)) ;
    if (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_3844 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 85)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_3371, var_mRepeatedInstructionList_3489, var_endOf_5F_repeated_5F_instructions_3522, var_mRepeatBranchList_3575, var_endOf_5F_repeat_5F_instruction_3844, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  GGS_location var_mSelectInstructionLocation_3144 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 70)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_3196 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_3323 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3323, inCompiler) ;
  var_mSelectBranchList_3196.addAssignOperation (var_il_3323, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 73))  COMMA_SOURCE_FILE ("instruction-select.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    GGS_syntaxInstructionList var_instructionList_3470 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3470, inCompiler) ;
    var_mSelectBranchList_3196.addAssignOperation (var_instructionList_3470, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 77))  COMMA_SOURCE_FILE ("instruction-select.galgas", 77)) ;
    if (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
  GGS_location var_endOf_5F_select_5F_instruction_3582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 81)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_3144, var_mSelectBranchList_3196, var_endOf_5F_select_5F_instruction_3582, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_3963 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 84)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_4059 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_4059, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_4125 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_4125, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4260 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4390 ;
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4260 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4390 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 94)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4260, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4390, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_3963.readProperty_location (), var_terminalName_3963, var_actualInputParameterList_4059, var_indexNameList_4125, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4260, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4390, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 84)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 94)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 84)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 94)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_5580 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
      GGS_lstring var_postfixName_5642 ;
      switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
      case 1: {
        var_postfixName_5642 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 120)) ;
      } break ;
      case 2: {
        var_postfixName_5642 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_5580, var_postfixName_5642  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 124)) ;
      if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 126)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 126)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 126)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mLabelName_3078 ;
  switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
    var_mLabelName_3078 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 69)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
    var_mLabelName_3078 = GGS_lstring::init_21__21_ (GGS_string ("parse"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 72)), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 74)) ;
    var_mLabelName_3078 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mNonterminalName_3349 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 77)) ;
  GGS_actualParameterListAST var_mActualParameterList_3482 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_mActualParameterList_3482, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_3624 ;
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_3624 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 84)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_3624, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21__21_ (var_mNonterminalName_3349.readProperty_location (), var_mNonterminalName_3349, var_mLabelName_3078, var_mActualParameterList_3482, var_grammarInstructionSyntaxDirectedTranslationResult_3624, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 74)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 77)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 84)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 74)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 77)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 84)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbool var_hasIndexing_8292 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_8292 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 238)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_8292 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 243)) ;
  GGS_lstring var_mGrammarName_8495 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 244)) ;
  GGS_lstring var_mGrammarClass_8573 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 245)) ;
  GGS_bool var_hasTranslateFeature_8627 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_8627 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
    var_hasTranslateFeature_8627 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
  GGS_lstringlist var_syntaxComponents_8804 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
    GGS_lstring var_syntaxComponent_8886 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
    var_syntaxComponents_8804.addAssignOperation (var_syntaxComponent_8886  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 260)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_startSymbol_9018 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_9061 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)), inCompiler COMMA_HERE), var_mLabelList_9061, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      GGS_lstring var_labelName_9265 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_9265, var_mLabelList_9061, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_9404 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 277)) ;
      GGS_lstring var_nonterminalSymbolName_9518 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
      var_mUnusedNonterminalList_9404.addAssignOperation (var_nonterminalSymbolName_9518  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 279)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 282)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_8292, var_mGrammarName_8495, var_mGrammarClass_8573, var_syntaxComponents_8804, var_startSymbol_9018, var_mLabelList_9061, var_mUnusedNonterminalList_9404, var_hasTranslateFeature_8627, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 283)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 243)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 245)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 277)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 282)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 243)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 245)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 277)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 282)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_stringset var_argumentNameSet_10257 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_formalParameterList_10311 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_argumentName_10431 ;
      nt_label_5F_formal_5F_parameter_ (ioArgument_ioDeclarations, var_argumentName_10431, var_formalParameterList_10311, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_10257.getter_hasKey (var_argumentName_10431.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 307)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_10431.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_10431.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)) ;
        }
      }
      var_argumentNameSet_10257.plusPlusAssignOperation (var_argumentName_10431.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 310)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 315)) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameterList_10311, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 316))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 316)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 315)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 315)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_11144 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  GGS_lstring var_mTypeName_11216 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11216, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 329)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 331)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11144, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 334)), var_mTypeName_11216, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 332)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 329)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 331)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 329)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 331)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  GGS_lstring var_selector_11787 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 346)) ;
  GGS_lstring var_mTypeName_11859 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11859, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 350)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 352)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11787, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 355)), var_mTypeName_11859, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 353)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 350)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 352)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 350)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_12440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 367)) ;
  GGS_lstring var_mTypeName_12512 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_12512, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 371)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 373)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_12440, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 376)), var_mTypeName_12512, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 374)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 367)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 371)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 373)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 367)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 371)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 373)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 387)) ;
  GGS_lstring var_selector_13087 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 388)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 389)) ;
  GGS_lstring var_mTypeName_13169 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13169, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 393)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 395)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13087, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 398)), var_mTypeName_13169, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 396)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 387)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 389)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 393)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 395)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 387)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 389)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 393)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 395)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_13781 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 409)) ;
  GGS_lstring var_mTypeName_13843 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13843, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 413)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 415)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13781, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 418)), var_mTypeName_13843, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 416)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 409)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 413)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 415)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 409)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 413)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 415)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  GGS_lstring var_selector_14444 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 430)) ;
  GGS_lstring var_mTypeName_14516 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_14516, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 434)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 436)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_14444, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 439)), var_mTypeName_14516, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 437)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 434)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 436)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 434)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 436)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_15122 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)) ;
  GGS_lstring var_mTypeName_15184 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15184, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 452)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15122, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 455)), var_mTypeName_15184, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 453)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 452)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 452)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 466)) ;
  GGS_lstring var_selector_15742 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 467)) ;
  GGS_lstring var_mTypeName_15814 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15814, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 469)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15742, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 472)), var_mTypeName_15814, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 470)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 466)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 469)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 466)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 469)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 135)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5344 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5344, inCompiler) ;
  GGS_location var_endOfPrologue_5376 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_5344, var_endOfPrologue_5376  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 135)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 135)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 150)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5909 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5909, inCompiler) ;
  GGS_location var_endOfPrologue_5941 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_5909, var_endOfPrologue_5941  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 154)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 150)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 150)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 165)) ;
  GGS_lstring var_mSourceFileExtension_6427 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  GGS_lstring var_mSourceFileHelp_6497 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  GGS_lstring var_referenceGrammar_6556 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6556 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    var_referenceGrammar_6556 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_6730 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_6730.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_6730.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_6936 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_6936.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_6936.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 186)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_7088 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7088 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
    var_isUnused_7088 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_7214 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  GGS_semanticInstructionListAST var_mInstructionList_7336 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_7336, inCompiler) ;
  GGS_location var_endOfInstructionList_7361 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_6427, var_mSourceFileHelp_6497, var_mSourceFileVariableName_7214, var_isUnused_7088, var_referenceGrammar_6556, var_mInstructionList_7336, var_endOfInstructionList_7361  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 202)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeInputOutputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST::GGS_lexicalAttributeInputOutputArgumentAST (void) :
GGS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST::
init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
              const GGS_lstring & in_mAttributeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputOutputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputOutputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputOutputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mAttributeName, inCompiler) ;
  const GGS_lexicalAttributeInputOutputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::
lexicalAttributeInputOutputArgumentAST_init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
                                                     const GGS_lstring & in_mAttributeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST::GGS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GGS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeInputOutputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputOutputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                                          const GGS_lstring & in_mAttributeName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation, inCompiler COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputOutputArgumentAST:") ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mAttributeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputOutputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputOutputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  const GGS_lexicalAttributeInputOutputArgumentAST * p = (const GGS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineCallInstructionAST::objectCompare (const GGS_lexicalRoutineCallInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST::GGS_lexicalRoutineCallInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST::
init_21__21__21_ (const GGS_lstring & in_mRoutineName,
                  const GGS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                  const GGS_lstringlist & in_mErrorMessageList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRoutineCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRoutineCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRoutineCallInstructionAST_init_21__21__21_ (in_mRoutineName, in_mActualArgumentList, in_mErrorMessageList, inCompiler) ;
  const GGS_lexicalRoutineCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::
lexicalRoutineCallInstructionAST_init_21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                   const GGS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                   const GGS_lstringlist & in_mErrorMessageList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST::GGS_lexicalRoutineCallInstructionAST (const cPtr_lexicalRoutineCallInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalRoutineCallInstructionAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallInstructionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalRoutineCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lexicalRoutineCallInstructionAST::readProperty_mErrorMessageList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mErrorMessageList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (const GGS_lstring & in_mRoutineName,
                                                                              const GGS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                              const GGS_lstringlist & in_mErrorMessageList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalRoutineCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

void cPtr_lexicalRoutineCallInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRoutineCallInstructionAST:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRoutineCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRoutineCallInstructionAST (mProperty_mRoutineName, mProperty_mActualArgumentList, mProperty_mErrorMessageList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRoutineCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mErrorMessageList.printNonNullClassInstanceProperties ("mErrorMessageList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ("lexicalRoutineCallInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST result ;
  const GGS_lexicalRoutineCallInstructionAST * p = (const GGS_lexicalRoutineCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST::objectCompare (const GGS_templateLexiqueComponentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mLexiqueComponentName,
                                      const GGS_lstring & in_mLexiqueSuperComponentName,
                                      const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                      const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateLexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList, inCompiler) ;
  const GGS_templateLexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::
templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mLexiqueComponentName,
                                                                  const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                  const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                  const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (const cPtr_templateLexiqueComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueSuperComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueSuperComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateDelimitorListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateReplacementListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mLexiqueComponentName,
                                                                    const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                    const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

void cPtr_templateLexiqueComponentAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueSuperComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLexiqueComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mLexiqueSuperComponentName, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueSuperComponentName.printNonNullClassInstanceProperties ("mLexiqueSuperComponentName") ;
    mProperty_mTemplateDelimitorList.printNonNullClassInstanceProperties ("mTemplateDelimitorList") ;
    mProperty_mTemplateReplacementList.printNonNullClassInstanceProperties ("mTemplateReplacementList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLexiqueComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ("templateLexiqueComponentAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLexiqueComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST result ;
  const GGS_templateLexiqueComponentAST * p = (const GGS_templateLexiqueComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap unsolvedEntryList'
//--------------------------------------------------------------------------------------------------

GGS_lstringlist extensionGetter_unsolvedEntryList (const GGS_unifiedTypeMap & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist result_result ; // Returned variable
  result_result = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  const GGS_unifiedTypeMap temp_0 = inObject ;
  UpEnumerator_unifiedTypeMap enumerator_1851 (temp_0) ;
  while (enumerator_1851.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_1851.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 37)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.addAssignOperation (enumerator_1851.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 38)) ;
      }
    }
    enumerator_1851.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass::objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::
init_21_ (const GGS_typeDefinition & in_mDefinition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_unifiedTypeMapElementClass * object = nullptr ;
  macroMyNew (object, cPtr_unifiedTypeMapElementClass (inCompiler COMMA_THERE)) ;
  object->unifiedTypeMapElementClass_init_21_ (in_mDefinition, inCompiler) ;
  const GGS_unifiedTypeMapElementClass result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unifiedTypeMapElementClass::
unifiedTypeMapElementClass_init_21_ (const GGS_typeDefinition & in_mDefinition,
                                     Compiler * /* inCompiler */) {
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass::setProperty_mDefinition (const GGS_typeDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GGS_typeDefinition & in_mDefinition,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mDefinition () {
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unifiedTypeMapElementClass::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

void cPtr_unifiedTypeMapElementClass::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@unifiedTypeMapElementClass:") ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unifiedTypeMapElementClass::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unifiedTypeMapElementClass::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mDefinition.printNonNullClassInstanceProperties ("mDefinition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapElementClass generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass result ;
  const GGS_unifiedTypeMapElementClass * p = (const GGS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition cPtr_unifiedTypeMapElementClass::getter_definition (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  const GGS_unifiedTypeMapElementClass temp_0 = this ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GGS_typeDefinition::Enumeration::invalid:
    break ;
  case GGS_typeDefinition::Enumeration::enum_unsolved:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 167)), GGS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 167)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeDefinition::Enumeration::enum_solved:
    {
      GGS_unifiedTypeDefinition extractedValue_6469_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_6469_definition_0) ;
      result_result = extractedValue_6469_definition_0 ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result ;
  if (nullptr != inObject) {
    result = inObject->getter_definition (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (cPtr_semanticInstructionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_analysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     GGS_localVarManager & io_ioVariableMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_analyzeSemanticInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionListForGeneration, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControlAST checkCompatibilityWithLet'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompatibilityWithLet (const GGS_AccessControlAST inObject,
                                                const GGS_location constinArgument_inLocation,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControlAST::Enumeration::invalid:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedSetAccess:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'protected(set)' and 'let' are incompatible"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 155)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateSetAccess:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'private(set)' and 'let' are incompatible"), fixItArray2  COMMA_SOURCE_FILE ("accessControl.galgas", 158)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_5217__0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_5217__0) ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'private(set)' and 'let' are incompatible"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 161)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
// @lexicalDropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalDropInstructionAST::objectCompare (const GGS_lexicalDropInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST::GGS_lexicalDropInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST::
init_21_ (const GGS_lstring & in_mTerminalName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalDropInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalDropInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalDropInstructionAST_init_21_ (in_mTerminalName, inCompiler) ;
  const GGS_lexicalDropInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::
lexicalDropInstructionAST_init_21_ (const GGS_lstring & in_mTerminalName,
                                    Compiler * /* inCompiler */) {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST::GGS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalDropInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalDropInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalDropInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (const GGS_lstring & in_mTerminalName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName () {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalDropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

void cPtr_lexicalDropInstructionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalDropInstructionAST:") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalDropInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalDropInstructionAST (mProperty_mTerminalName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalDropInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalDropInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ("lexicalDropInstructionAST",
                                                                              & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalDropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalDropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalDropInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST result ;
  const GGS_lexicalDropInstructionAST * p = (const GGS_lexicalDropInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalDropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_jsonGrammar [] = {
// At index 0 : <JSON_text>, in file 'jsonSyntax.ggs', line 188
  TOP_DOWN_NONTERMINAL (1) // <value>
, TOP_DOWN_END_PRODUCTION ()
// At index 2 : <value>, in file 'jsonSyntax.ggs', line 194
, TOP_DOWN_NONTERMINAL (4) // <select_jsonSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 4 : <object>, in file 'jsonSyntax.ggs', line 221
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__7B_) // ${$
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (1) // <value>
, TOP_DOWN_NONTERMINAL (5) // <select_jsonSyntax_1>
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
// At index 11 : <array>, in file 'jsonSyntax.ggs', line 237
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__5B_) // $[$
, TOP_DOWN_NONTERMINAL (1) // <value>
, TOP_DOWN_NONTERMINAL (6) // <select_jsonSyntax_2>
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__5D_) // $]$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 16 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken_false) // $false$
, TOP_DOWN_END_PRODUCTION ()
// At index 18 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken_null) // $null$
, TOP_DOWN_END_PRODUCTION ()
// At index 20 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken_true) // $true$
, TOP_DOWN_END_PRODUCTION ()
// At index 22 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
, TOP_DOWN_NONTERMINAL (2) // <object>
, TOP_DOWN_END_PRODUCTION ()
// At index 24 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
, TOP_DOWN_NONTERMINAL (3) // <array>
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken_integer) // $integer$
, TOP_DOWN_END_PRODUCTION ()
// At index 28 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_END_PRODUCTION ()
// At index 30 : <select_jsonSyntax_1>, in file 'jsonSyntax.ggs', line 224
, TOP_DOWN_END_PRODUCTION ()
// At index 31 : <select_jsonSyntax_1>, in file 'jsonSyntax.ggs', line 224
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (1) // <value>
, TOP_DOWN_NONTERMINAL (5) // <select_jsonSyntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 37 : <select_jsonSyntax_2>, in file 'jsonSyntax.ggs', line 240
, TOP_DOWN_END_PRODUCTION ()
// At index 38 : <select_jsonSyntax_2>, in file 'jsonSyntax.ggs', line 240
, TOP_DOWN_TERMINAL (Lexique_jsonScanner::kToken__2C_) // $,$
, TOP_DOWN_NONTERMINAL (1) // <value>
, TOP_DOWN_NONTERMINAL (6) // <select_jsonSyntax_2>
, TOP_DOWN_END_PRODUCTION ()
// At index 42 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <JSON_text>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_jsonGrammar [16] = {
 {"<JSON_text>", "jsonSyntax", 0}, // at index 0
 {"<value>", "jsonSyntax", 2}, // at index 1
 {"<object>", "jsonSyntax", 4}, // at index 2
 {"<array>", "jsonSyntax", 11}, // at index 3
 {"<select_jsonSyntax_0>", "jsonSyntax", 16}, // at index 4
 {"<select_jsonSyntax_0>", "jsonSyntax", 18}, // at index 5
 {"<select_jsonSyntax_0>", "jsonSyntax", 20}, // at index 6
 {"<select_jsonSyntax_0>", "jsonSyntax", 22}, // at index 7
 {"<select_jsonSyntax_0>", "jsonSyntax", 24}, // at index 8
 {"<select_jsonSyntax_0>", "jsonSyntax", 26}, // at index 9
 {"<select_jsonSyntax_0>", "jsonSyntax", 28}, // at index 10
 {"<select_jsonSyntax_1>", "jsonSyntax", 30}, // at index 11
 {"<select_jsonSyntax_1>", "jsonSyntax", 31}, // at index 12
 {"<select_jsonSyntax_2>", "jsonSyntax", 37}, // at index 13
 {"<select_jsonSyntax_2>", "jsonSyntax", 38}, // at index 14
 {"<>", "", 42} // at index 15
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_jsonGrammar [16] = {
0, // index 0 : <JSON_text>, in file 'jsonSyntax.ggs', line 188
2, // index 1 : <value>, in file 'jsonSyntax.ggs', line 194
4, // index 2 : <object>, in file 'jsonSyntax.ggs', line 221
11, // index 3 : <array>, in file 'jsonSyntax.ggs', line 237
16, // index 4 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
18, // index 5 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
20, // index 6 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
22, // index 7 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
24, // index 8 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
26, // index 9 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
28, // index 10 : <select_jsonSyntax_0>, in file 'jsonSyntax.ggs', line 195
30, // index 11 : <select_jsonSyntax_1>, in file 'jsonSyntax.ggs', line 224
31, // index 12 : <select_jsonSyntax_1>, in file 'jsonSyntax.ggs', line 224
37, // index 13 : <select_jsonSyntax_2>, in file 'jsonSyntax.ggs', line 240
38, // index 14 : <select_jsonSyntax_2>, in file 'jsonSyntax.ggs', line 240
42 // index 15 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_jsonGrammar [9] = {
0, // at 0 : <JSON_text>
1, // at 1 : <value>
2, // at 2 : <object>
3, // at 3 : <array>
4, // at 4 : <select_jsonSyntax_0>
11, // at 5 : <select_jsonSyntax_1>
13, // at 6 : <select_jsonSyntax_2>
15, // at 7 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_jsonGrammar [] = {
// At index 0 : <JSON_text> only one production, no choice
  -1,
// At index 1 : <value> only one production, no choice
  -1,
// At index 2 : <object> only one production, no choice
  -1,
// At index 3 : <array> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 4 : <select_jsonSyntax_0>
Lexique_jsonScanner::kToken_false, -1, // Choice 1
Lexique_jsonScanner::kToken_null, -1, // Choice 2
Lexique_jsonScanner::kToken_true, -1, // Choice 3
Lexique_jsonScanner::kToken__7B_, -1, // Choice 4
Lexique_jsonScanner::kToken__5B_, -1, // Choice 5
Lexique_jsonScanner::kToken_integer, -1, // Choice 6
Lexique_jsonScanner::kToken__22_string_22_, -1, // Choice 7
  -1,
// At index 19 : <select_jsonSyntax_1>
Lexique_jsonScanner::kToken__7D_, -1, // Choice 1
Lexique_jsonScanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 24 : <select_jsonSyntax_2>
Lexique_jsonScanner::kToken__5D_, -1, // Choice 1
Lexique_jsonScanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 29 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_jsonGrammar [9] = {
0, // at 0 : <JSON_text>
1, // at 1 : <value>
2, // at 2 : <object>
3, // at 3 : <array>
4, // at 4 : <select_jsonSyntax_0>
19, // at 5 : <select_jsonSyntax_1>
24, // at 6 : <select_jsonSyntax_2>
29, // at 7 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                            'JSON_text' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_jsonGrammar::nt_JSON_5F_text_parse (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_JSON_5F_text_i0_parse(inLexique) ;
}

void cGrammar_jsonGrammar::nt_JSON_5F_text_indexing (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_JSON_5F_text_i0_indexing(inLexique) ;
}

void cGrammar_jsonGrammar::nt_JSON_5F_text_ (GGS_jsonValue & parameter_1,
                                Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_JSON_5F_text_i0_(parameter_1, inLexique) ;
}

void cGrammar_jsonGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_jsonScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_jsonScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_jsonGrammar, gProductionNames_jsonGrammar, gProductionIndexes_jsonGrammar,
                                                    gFirstProductionIndexes_jsonGrammar, gDecision_jsonGrammar, gDecisionIndexes_jsonGrammar, 42) ;
    if (ok) {
      cGrammar_jsonGrammar grammar ;
      grammar.nt_JSON_5F_text_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_jsonGrammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_jsonScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_jsonScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_jsonGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_jsonScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_jsonScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_jsonGrammar, gProductionNames_jsonGrammar, gProductionIndexes_jsonGrammar,
                                    gFirstProductionIndexes_jsonGrammar, gDecision_jsonGrammar, gDecisionIndexes_jsonGrammar, 42) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_jsonGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_jsonValue &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_jsonScanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_jsonScanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_jsonGrammar, gProductionNames_jsonGrammar, gProductionIndexes_jsonGrammar,
                                                      gFirstProductionIndexes_jsonGrammar, gDecision_jsonGrammar, gDecisionIndexes_jsonGrammar, 42) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_jsonGrammar grammar ;
        grammar.nt_JSON_5F_text_ (parameter_1, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_jsonGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_jsonValue &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_jsonScanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_jsonScanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_jsonGrammar, gProductionNames_jsonGrammar, gProductionIndexes_jsonGrammar,
                                                    gFirstProductionIndexes_jsonGrammar, gDecision_jsonGrammar, gDecisionIndexes_jsonGrammar, 42) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_jsonGrammar grammar ;
      grammar.nt_JSON_5F_text_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                              'value' non terminal implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_jsonGrammar::nt_value_parse (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_value_i1_parse(inLexique) ;
}

void cGrammar_jsonGrammar::nt_value_indexing (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_value_i1_indexing(inLexique) ;
}

void cGrammar_jsonGrammar::nt_value_ (GGS_jsonValue & parameter_1,
                                Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_value_i1_(parameter_1, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              'object' non terminal implementation                                
//
//--------------------------------------------------------------------------------------------------

void cGrammar_jsonGrammar::nt_object_parse (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_object_i2_parse(inLexique) ;
}

void cGrammar_jsonGrammar::nt_object_indexing (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_object_i2_indexing(inLexique) ;
}

void cGrammar_jsonGrammar::nt_object_ (GGS_jsonObjectValue & parameter_1,
                                Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_object_i2_(parameter_1, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              'array' non terminal implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_jsonGrammar::nt_array_parse (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_array_i3_parse(inLexique) ;
}

void cGrammar_jsonGrammar::nt_array_indexing (Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_array_i3_indexing(inLexique) ;
}

void cGrammar_jsonGrammar::nt_array_ (GGS_jsonArrayValue & parameter_1,
                                Lexique_jsonScanner * inLexique) {
  rule_jsonSyntax_array_i3_(parameter_1, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_jsonSyntax_0' added non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_jsonGrammar::select_jsonSyntax_0 (Lexique_jsonScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_jsonSyntax_1' added non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_jsonGrammar::select_jsonSyntax_1 (Lexique_jsonScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_jsonSyntax_2' added non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_jsonGrammar::select_jsonSyntax_2 (Lexique_jsonScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (cPtr_semanticExpressionForGeneration * inObject,
                                             GGS_string & io_ioGeneratedCode,
                                             GGS_stringset & io_ioInclusionSet,
                                             GGS_uint & io_ioTemporaryVariableIndex,
                                             GGS_stringset & io_ioUnusedVariableCppNameSet,
                                             GGS_string & out_outCppExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    inObject->method_generateExpression (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @castInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionForGeneration::objectCompare (const GGS_castInExpressionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_string & in_mTypeName,
                          const GGS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->castInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, in_mCastType, inCompiler) ;
  const GGS_castInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::
castInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GGS_string & in_mTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_castInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_castInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_string & in_mTypeName,
                                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

void cPtr_castInExpressionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @castInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_castInExpressionForGeneration result ;
  const GGS_castInExpressionForGeneration * p = (const GGS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterForGeneration::objectCompare (const GGS_outputActualParameterForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
              const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputActualParameterForGeneration_init_21__21_ (in_mFormalArgumentType, in_mOutputActualParameterExpression, inCompiler) ;
  const GGS_outputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::
outputActualParameterForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                  const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration result ;
  const GGS_outputActualParameterForGeneration * p = (const GGS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterForGeneration::objectCompare (const GGS_outputInputActualParameterForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration::GGS_outputInputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                      const GGS_string & in_mOutputInputVariableCppName,
                      const GGS_lstringlist & in_mStructAttributeList,
                      const GGS_unifiedTypeMapEntryList & in_mTypeList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_outputInputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputInputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputInputActualParameterForGeneration_init_21__21__21__21_ (in_mFormalArgumentType, in_mOutputInputVariableCppName, in_mStructAttributeList, in_mTypeList, inCompiler) ;
  const GGS_outputInputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::
outputInputActualParameterForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                              const GGS_string & in_mOutputInputVariableCppName,
                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                              const GGS_unifiedTypeMapEntryList & in_mTypeList,
                                                              Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputInputVariableCppName = in_mOutputInputVariableCppName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mTypeList = in_mTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration::GGS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_outputInputActualParameterForGeneration::readProperty_mOutputInputVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mOutputInputVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_outputInputActualParameterForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_outputInputActualParameterForGeneration::readProperty_mTypeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntryList () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputInputVariableCppName (),
mProperty_mStructAttributeList (),
mProperty_mTypeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                            const GGS_string & in_mOutputInputVariableCppName,
                                                                                            const GGS_lstringlist & in_mStructAttributeList,
                                                                                            const GGS_unifiedTypeMapEntryList & in_mTypeList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mOutputInputVariableCppName (),
mProperty_mStructAttributeList (),
mProperty_mTypeList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputInputVariableCppName = in_mOutputInputVariableCppName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mTypeList = in_mTypeList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputInputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

void cPtr_outputInputActualParameterForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputInputVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputInputVariableCppName, mProperty_mStructAttributeList, mProperty_mTypeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputInputVariableCppName.printNonNullClassInstanceProperties ("mOutputInputVariableCppName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mTypeList.printNonNullClassInstanceProperties ("mTypeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ("outputInputActualParameterForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration result ;
  const GGS_outputInputActualParameterForGeneration * p = (const GGS_outputInputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualParameterForGeneration::objectCompare (const GGS_inputActualParameterForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration::GGS_inputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                  const GGS_string & in_mInputActualCppName,
                  const GGS__32_stringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_inputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->inputActualParameterForGeneration_init_21__21__21_ (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::
inputActualParameterForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                    const GGS_string & in_mInputActualCppName,
                                                    const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration::GGS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_inputActualParameterForGeneration::readProperty_mInputActualCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mInputActualCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_inputActualParameterForGeneration::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_stringlist () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                const GGS_string & in_mInputActualCppName,
                                                                                const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

void cPtr_inputActualParameterForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInputActualCppName.printNonNullClassInstanceProperties ("mInputActualCppName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ("inputActualParameterForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inputActualParameterForGeneration result ;
  const GGS_inputActualParameterForGeneration * p = (const GGS_inputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionPrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionPrototypeDeclarationForGeneration::objectCompare (const GGS_functionPrototypeDeclarationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration::GGS_functionPrototypeDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                 const GGS_string & in_implementationCppFileName,
                                                                 const GGS_string & in_mFunctionName,
                                                                 const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionPrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, inCompiler) ;
  const GGS_functionPrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::
functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                                           const GGS_string & in_mFunctionName,
                                                                                                           const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                           const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration::GGS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionPrototypeDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_functionPrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_functionPrototypeDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionPrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                                const GGS_string & in_implementationCppFileName,
                                                                                                const GGS_string & in_mFunctionName,
                                                                                                const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

void cPtr_functionPrototypeDeclarationForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionPrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionPrototypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionPrototypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration result ;
  const GGS_functionPrototypeDeclarationForGeneration * p = (const GGS_functionPrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionPrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionPrototypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_functionPrototypeDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak & GGS_functionPrototypeDeclarationForGeneration_2E_weak::operator = (const GGS_functionPrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (const GGS_functionPrototypeDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionPrototypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::bang_functionPrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPrototypeDeclarationForGeneration) ;
      result = GGS_functionPrototypeDeclarationForGeneration ((cPtr_functionPrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionPrototypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ("functionPrototypeDeclarationForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionPrototypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionPrototypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionPrototypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  const GGS_functionPrototypeDeclarationForGeneration_2E_weak * p = (const GGS_functionPrototypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionPrototypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionImplementationForGeneration::objectCompare (const GGS_functionImplementationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration::GGS_functionImplementationForGeneration (void) :
GGS_functionPrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_string & in_mFunctionName,
                                                                         const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                         const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                         const GGS_string & in_mResultVariableCppName,
                                                                         const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_functionImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GGS_functionImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::
functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                                             const GGS_string & in_mFunctionName,
                                                                                                             const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                             const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                             const GGS_string & in_mResultVariableCppName,
                                                                                                             const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                             Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration::GGS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GGS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionImplementationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_functionImplementationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GGS_bool & in_generateHeader,
                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                    const GGS_string & in_mFunctionName,
                                                                                    const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                    const GGS_string & in_mResultVariableCppName,
                                                                                    const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

void cPtr_functionImplementationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@functionImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionImplementationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionImplementationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration result ;
  const GGS_functionImplementationForGeneration * p = (const GGS_functionImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionImplementationForGeneration_2E_weak::objectCompare (const GGS_functionImplementationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (void) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak & GGS_functionImplementationForGeneration_2E_weak::operator = (const GGS_functionImplementationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (const GGS_functionImplementationForGeneration & inSource) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::bang_functionImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionImplementationForGeneration) ;
      result = GGS_functionImplementationForGeneration ((cPtr_functionImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ("functionImplementationForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionImplementationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionImplementationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  const GGS_functionImplementationForGeneration_2E_weak * p = (const GGS_functionImplementationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionImplementationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationForGeneration::objectCompare (const GGS_onceFunctionDeclarationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration::GGS_onceFunctionDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                     const GGS_string & in_implementationCppFileName,
                                                                     const GGS_string & in_mFunctionName,
                                                                     const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                     const GGS_string & in_mResultVariableCppName,
                                                                     const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GGS_onceFunctionDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::
onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_string & in_mFunctionName,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                          const GGS_string & in_mResultVariableCppName,
                                                                                                          const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration::GGS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_onceFunctionDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_onceFunctionDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_onceFunctionDeclarationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_onceFunctionDeclarationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_string & in_mFunctionName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                      const GGS_string & in_mResultVariableCppName,
                                                                                      const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

void cPtr_onceFunctionDeclarationForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration result ;
  const GGS_onceFunctionDeclarationForGeneration * p = (const GGS_onceFunctionDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationForGeneration_2E_weak::objectCompare (const GGS_onceFunctionDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak & GGS_onceFunctionDeclarationForGeneration_2E_weak::operator = (const GGS_onceFunctionDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (const GGS_onceFunctionDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_onceFunctionDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::bang_onceFunctionDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationForGeneration) ;
      result = GGS_onceFunctionDeclarationForGeneration ((cPtr_onceFunctionDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ("onceFunctionDeclarationForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  const GGS_onceFunctionDeclarationForGeneration_2E_weak * p = (const GGS_onceFunctionDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationForGeneration::objectCompare (const GGS_filewrapperDeclarationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration::GGS_filewrapperDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_string & in_mFilewrapperName,
                                                                         const GGS_string & in_mFilewrapperAbsolutePath,
                                                                         const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                         const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                         const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFilewrapperName, in_mFilewrapperAbsolutePath, in_mFilewrapperFileMap, in_mFilewrapperDirectoryMap, in_mFilewrapperTemplateListForGeneration, inCompiler) ;
  const GGS_filewrapperDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::
filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                                             const GGS_string & in_mFilewrapperName,
                                                                                                             const GGS_string & in_mFilewrapperAbsolutePath,
                                                                                                             const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                                             const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                                             const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                                             Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperAbsolutePath = in_mFilewrapperAbsolutePath ;
  mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  mProperty_mFilewrapperTemplateListForGeneration = in_mFilewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration::GGS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperFileMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_wrapperFileMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperFileMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperDirectoryMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_wrapperDirectoryMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperDirectoryMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperTemplateListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_filewrapperTemplateListForGeneration () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperTemplateListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperAbsolutePath (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                    const GGS_string & in_mFilewrapperName,
                                                                                    const GGS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperAbsolutePath (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperAbsolutePath = in_mFilewrapperAbsolutePath ;
  mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  mProperty_mFilewrapperTemplateListForGeneration = in_mFilewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

void cPtr_filewrapperDeclarationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFilewrapperName, mProperty_mFilewrapperAbsolutePath, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperAbsolutePath.printNonNullClassInstanceProperties ("mFilewrapperAbsolutePath") ;
    mProperty_mFilewrapperFileMap.printNonNullClassInstanceProperties ("mFilewrapperFileMap") ;
    mProperty_mFilewrapperDirectoryMap.printNonNullClassInstanceProperties ("mFilewrapperDirectoryMap") ;
    mProperty_mFilewrapperTemplateListForGeneration.printNonNullClassInstanceProperties ("mFilewrapperTemplateListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration result ;
  const GGS_filewrapperDeclarationForGeneration * p = (const GGS_filewrapperDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationForGeneration_2E_weak::objectCompare (const GGS_filewrapperDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak & GGS_filewrapperDeclarationForGeneration_2E_weak::operator = (const GGS_filewrapperDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (const GGS_filewrapperDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::bang_filewrapperDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationForGeneration) ;
      result = GGS_filewrapperDeclarationForGeneration ((cPtr_filewrapperDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ("filewrapperDeclarationForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  const GGS_filewrapperDeclarationForGeneration_2E_weak * p = (const GGS_filewrapperDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @programComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programComponentForGeneration::objectCompare (const GGS_programComponentForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration::GGS_programComponentForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21_ (const GGS_bool & in_generateHeader,
                                                             const GGS_string & in_implementationCppFileName,
                                                             const GGS_stringset & in_mInclusionSet,
                                                             const GGS_string & in_mImplementationString,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_programComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_programComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (in_generateHeader, in_implementationCppFileName, in_mInclusionSet, in_mImplementationString, inCompiler) ;
  const GGS_programComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::
programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (const GGS_bool & in_generateHeader,
                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                           const GGS_stringset & in_mInclusionSet,
                                                                                           const GGS_string & in_mImplementationString,
                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration::GGS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_programComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_programComponentForGeneration::readProperty_mInclusionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mInclusionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_programComponentForGeneration::readProperty_mImplementationString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mImplementationString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @programComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (const GGS_bool & in_generateHeader,
                                                                        const GGS_string & in_implementationCppFileName,
                                                                        const GGS_stringset & in_mInclusionSet,
                                                                        const GGS_string & in_mImplementationString,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_programComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

void cPtr_programComponentForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@programComponentForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInclusionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_programComponentForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_programComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mInclusionSet, mProperty_mImplementationString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_programComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInclusionSet.printNonNullClassInstanceProperties ("mInclusionSet") ;
    mProperty_mImplementationString.printNonNullClassInstanceProperties ("mImplementationString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @programComponentForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration ("programComponentForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration result ;
  const GGS_programComponentForGeneration * p = (const GGS_programComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programComponentForGeneration_2E_weak::objectCompare (const GGS_programComponentForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak & GGS_programComponentForGeneration_2E_weak::operator = (const GGS_programComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (const GGS_programComponentForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_programComponentForGeneration result ;
  if (isValid ()) {
    const cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_programComponentForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::bang_programComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_programComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_programComponentForGeneration) ;
      result = GGS_programComponentForGeneration ((cPtr_programComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @programComponentForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ("programComponentForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programComponentForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programComponentForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programComponentForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  const GGS_programComponentForGeneration_2E_weak * p = (const GGS_programComponentForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programComponentForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@selfMutability propertiesAreMutable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_propertiesAreMutable (const GGS_selfMutability & inObject,
                                               Compiler *
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_selfMutability temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_selfMutability::Enumeration::invalid:
    break ;
  case GGS_selfMutability::Enumeration::enum_none:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_selfMutability::Enumeration::enum_propertiesAreMutableSelfIsNot:
  case GGS_selfMutability::Enumeration::enum_selfAndPropertiesAreMutable:
  case GGS_selfMutability::Enumeration::enum_initializer:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
mProperty_routineMap (),
mProperty_mFunctionMap (),
mProperty_mFilewrapperMap (),
mProperty_grammarMap (),
mProperty_mOptionComponentMapForSemanticAnalysis (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis (),
mProperty_galgas_34_ () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_routineMap (inSource.mProperty_routineMap),
mProperty_mFunctionMap (inSource.mProperty_mFunctionMap),
mProperty_mFilewrapperMap (inSource.mProperty_mFilewrapperMap),
mProperty_grammarMap (inSource.mProperty_grammarMap),
mProperty_mOptionComponentMapForSemanticAnalysis (inSource.mProperty_mOptionComponentMapForSemanticAnalysis),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inSource.mProperty_mLexiqueComponentMapForSemanticAnalysis),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inSource.mProperty_mSyntaxComponentMapForSemanticAnalysis),
mProperty_galgas_34_ (inSource.mProperty_galgas_34_) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_routineMap = inSource.mProperty_routineMap ;
  mProperty_mFunctionMap = inSource.mProperty_mFunctionMap ;
  mProperty_mFilewrapperMap = inSource.mProperty_mFilewrapperMap ;
  mProperty_grammarMap = inSource.mProperty_grammarMap ;
  mProperty_mOptionComponentMapForSemanticAnalysis = inSource.mProperty_mOptionComponentMapForSemanticAnalysis ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = inSource.mProperty_mLexiqueComponentMapForSemanticAnalysis ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = inSource.mProperty_mSyntaxComponentMapForSemanticAnalysis ;
  mProperty_galgas_34_ = inSource.mProperty_galgas_34_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init_21_galgas_34_ (const GGS_bool & in_galgas_34_,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_galgas_34_ = in_galgas_34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_routineMap = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFunctionMap = GGS_functionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFilewrapperMap = GGS_filewrapperMap::init (inCompiler COMMA_HERE) ;
  mProperty_grammarMap = GGS_grammarMap::init (inCompiler COMMA_HERE) ;
  mProperty_mOptionComponentMapForSemanticAnalysis = GGS_optionComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = GGS_lexiqueComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = GGS_syntaxComponentMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_routineMap & inOperand0,
                                          const GGS_functionMap & inOperand1,
                                          const GGS_filewrapperMap & inOperand2,
                                          const GGS_grammarMap & inOperand3,
                                          const GGS_optionComponentMapForSemanticAnalysis & inOperand4,
                                          const GGS_lexiqueComponentMapForSemanticAnalysis & inOperand5,
                                          const GGS_syntaxComponentMap & inOperand6,
                                          const GGS_bool & inOperand7) :
mProperty_routineMap (inOperand0),
mProperty_mFunctionMap (inOperand1),
mProperty_mFilewrapperMap (inOperand2),
mProperty_grammarMap (inOperand3),
mProperty_mOptionComponentMapForSemanticAnalysis (inOperand4),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand5),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand6),
mProperty_galgas_34_ (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_routineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_grammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () && mProperty_galgas_34_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
  mProperty_routineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_grammarMap.drop () ;
  mProperty_mOptionComponentMapForSemanticAnalysis.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
  mProperty_galgas_34_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_routineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_grammarMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_galgas_34_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSelectInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSelectInstructionAST::objectCompare (const GGS_lexicalSelectInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::
init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
              const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalSelectInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSelectInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSelectInstructionAST_init_21__21_ (in_mLexicalSelectBranchList, in_mDefaultInstructionList, inCompiler) ;
  const GGS_lexicalSelectInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::
lexicalSelectInstructionAST_init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                          const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectInstructionAST::readProperty_mLexicalSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSelectBranchListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mLexicalSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalSelectInstructionAST::readProperty_mDefaultInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mDefaultInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSelectInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSelectInstructionAST:") ;
  mProperty_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSelectInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mProperty_mLexicalSelectBranchList, mProperty_mDefaultInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSelectInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSelectBranchList.printNonNullClassInstanceProperties ("mLexicalSelectBranchList") ;
    mProperty_mDefaultInstructionList.printNonNullClassInstanceProperties ("mDefaultInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST result ;
  const GGS_lexicalSelectInstructionAST * p = (const GGS_lexicalSelectInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarForGeneration::objectCompare (const GGS_grammarForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration::GGS_grammarForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                     const GGS_string & in_implementationCppFileName,
                                                                                     const GGS_string & in_mGrammarName,
                                                                                     const GGS_string & in_mLexiqueName,
                                                                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                     const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                                     const GGS_lstringlist & in_mSyntaxComponents,
                                                                                     const GGS_string & in_mStartSymbolName,
                                                                                     const GGS_bool & in_mHasTranslateFeature,
                                                                                     const GGS_string & in_mCppFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cPtr_grammarForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mGrammarName, in_mLexiqueName, in_mNonTerminalMapForGrammarAnalysis, in_mNonTerminalToAddList, in_mSyntaxComponents, in_mStartSymbolName, in_mHasTranslateFeature, in_mCppFileContents, inCompiler) ;
  const GGS_grammarForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::
grammarForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_string & in_mGrammarName,
                                                                                                          const GGS_string & in_mLexiqueName,
                                                                                                          const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                                          const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                                                          const GGS_lstringlist & in_mSyntaxComponents,
                                                                                                          const GGS_string & in_mStartSymbolName,
                                                                                                          const GGS_bool & in_mHasTranslateFeature,
                                                                                                          const GGS_string & in_mCppFileContents,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration::GGS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_grammarForGeneration::readProperty_mNonTerminalMapForGrammarAnalysis (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalSymbolMapForGrammarAnalysis () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalMapForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_grammarForGeneration::readProperty_mNonTerminalToAddList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalToAddList () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalToAddList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_grammarForGeneration::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mCppFileContents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mCppFileContents ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (const GGS_bool & in_generateHeader,
                                                      const GGS_string & in_implementationCppFileName,
                                                      const GGS_string & in_mGrammarName,
                                                      const GGS_string & in_mLexiqueName,
                                                      const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                      const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                      const GGS_lstringlist & in_mSyntaxComponents,
                                                      const GGS_string & in_mStartSymbolName,
                                                      const GGS_bool & in_mHasTranslateFeature,
                                                      const GGS_string & in_mCppFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mGrammarName, mProperty_mLexiqueName, mProperty_mNonTerminalMapForGrammarAnalysis, mProperty_mNonTerminalToAddList, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mHasTranslateFeature, mProperty_mCppFileContents, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonTerminalMapForGrammarAnalysis.printNonNullClassInstanceProperties ("mNonTerminalMapForGrammarAnalysis") ;
    mProperty_mNonTerminalToAddList.printNonNullClassInstanceProperties ("mNonTerminalToAddList") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
    mProperty_mCppFileContents.printNonNullClassInstanceProperties ("mCppFileContents") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_grammarForGeneration result ;
  const GGS_grammarForGeneration * p = (const GGS_grammarForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarForGeneration_2E_weak::objectCompare (const GGS_grammarForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak::GGS_grammarForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak & GGS_grammarForGeneration_2E_weak::operator = (const GGS_grammarForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak::GGS_grammarForGeneration_2E_weak (const GGS_grammarForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak GGS_grammarForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration_2E_weak::bang_grammarForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarForGeneration) ;
      result = GGS_grammarForGeneration ((cPtr_grammarForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarForGeneration_2E_weak ("grammarForGeneration.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak GGS_grammarForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_grammarForGeneration_2E_weak result ;
  const GGS_grammarForGeneration_2E_weak * p = (const GGS_grammarForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueDeclarationForGeneration::objectCompare (const GGS_lexiqueDeclarationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration::GGS_lexiqueDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_string & in_mLexiqueName,
                                                                         const GGS_string & in_mSuperLexiqueName,
                                                                         const GGS_string & in_mHeaderContents,
                                                                         const GGS_string & in_mCppContents,
                                                                         const GGS_string & in_mSwiftUIImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_lexiqueDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mLexiqueName, in_mSuperLexiqueName, in_mHeaderContents, in_mCppContents, in_mSwiftUIImplementation, inCompiler) ;
  const GGS_lexiqueDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::
lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                         const GGS_string & in_implementationCppFileName,
                                                                                                         const GGS_string & in_mLexiqueName,
                                                                                                         const GGS_string & in_mSuperLexiqueName,
                                                                                                         const GGS_string & in_mHeaderContents,
                                                                                                         const GGS_string & in_mCppContents,
                                                                                                         const GGS_string & in_mSwiftUIImplementation,
                                                                                                         Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mSuperLexiqueName = in_mSuperLexiqueName ;
  mProperty_mHeaderContents = in_mHeaderContents ;
  mProperty_mCppContents = in_mCppContents ;
  mProperty_mSwiftUIImplementation = in_mSwiftUIImplementation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration::GGS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mSuperLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSuperLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mHeaderContents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mHeaderContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mCppContents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mCppContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mSwiftUIImplementation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSwiftUIImplementation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mLexiqueName (),
mProperty_mSuperLexiqueName (),
mProperty_mHeaderContents (),
mProperty_mCppContents (),
mProperty_mSwiftUIImplementation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                            const GGS_string & in_implementationCppFileName,
                                                                            const GGS_string & in_mLexiqueName,
                                                                            const GGS_string & in_mSuperLexiqueName,
                                                                            const GGS_string & in_mHeaderContents,
                                                                            const GGS_string & in_mCppContents,
                                                                            const GGS_string & in_mSwiftUIImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mLexiqueName (),
mProperty_mSuperLexiqueName (),
mProperty_mHeaderContents (),
mProperty_mCppContents (),
mProperty_mSwiftUIImplementation () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mSuperLexiqueName = in_mSuperLexiqueName ;
  mProperty_mHeaderContents = in_mHeaderContents ;
  mProperty_mCppContents = in_mCppContents ;
  mProperty_mSwiftUIImplementation = in_mSwiftUIImplementation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexiqueDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

void cPtr_lexiqueDeclarationForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHeaderContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwiftUIImplementation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mLexiqueName, mProperty_mSuperLexiqueName, mProperty_mHeaderContents, mProperty_mCppContents, mProperty_mSwiftUIImplementation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mSuperLexiqueName.printNonNullClassInstanceProperties ("mSuperLexiqueName") ;
    mProperty_mHeaderContents.printNonNullClassInstanceProperties ("mHeaderContents") ;
    mProperty_mCppContents.printNonNullClassInstanceProperties ("mCppContents") ;
    mProperty_mSwiftUIImplementation.printNonNullClassInstanceProperties ("mSwiftUIImplementation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexiqueDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ("lexiqueDeclarationForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration result ;
  const GGS_lexiqueDeclarationForGeneration * p = (const GGS_lexiqueDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueDeclarationForGeneration_2E_weak::objectCompare (const GGS_lexiqueDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak::GGS_lexiqueDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak & GGS_lexiqueDeclarationForGeneration_2E_weak::operator = (const GGS_lexiqueDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak::GGS_lexiqueDeclarationForGeneration_2E_weak (const GGS_lexiqueDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak GGS_lexiqueDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_lexiqueDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexiqueDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration_2E_weak::bang_lexiqueDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexiqueDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueDeclarationForGeneration) ;
      result = GGS_lexiqueDeclarationForGeneration ((cPtr_lexiqueDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ("lexiqueDeclarationForGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak GGS_lexiqueDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration_2E_weak result ;
  const GGS_lexiqueDeclarationForGeneration_2E_weak * p = (const GGS_lexiqueDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mTemplateVariableMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (const GGS_templateAnalysisContext & inSource) :
mProperty_mSemanticContext (inSource.mProperty_mSemanticContext),
mProperty_mPredefinedTypes (inSource.mProperty_mPredefinedTypes),
mProperty_mTemplateVariableMap (inSource.mProperty_mTemplateVariableMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext & GGS_templateAnalysisContext::operator = (const GGS_templateAnalysisContext & inSource) {
  mProperty_mSemanticContext = inSource.mProperty_mSemanticContext ;
  mProperty_mPredefinedTypes = inSource.mProperty_mPredefinedTypes ;
  mProperty_mTemplateVariableMap = inSource.mProperty_mTemplateVariableMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateAnalysisContext GGS_templateAnalysisContext::init_21__21__21_ (const GGS_semanticContext & in_mSemanticContext,
                                                                           const GGS_predefinedTypes & in_mPredefinedTypes,
                                                                           const GGS_templateVariableMap & in_mTemplateVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (const GGS_semanticContext & inOperand0,
                                                          const GGS_predefinedTypes & inOperand1,
                                                          const GGS_templateVariableMap & inOperand2) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mTemplateVariableMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateAnalysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mTemplateVariableMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mTemplateVariableMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateAnalysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext GGS_templateAnalysisContext::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateAnalysisContext result ;
  const GGS_templateAnalysisContext * p = (const GGS_templateAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (cPtr_templateExpressionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_templateAnalysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticExpressionForGeneration & out_outExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateExpressionAST) ;
    inObject->method_templateExpressionAnalysis (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, out_outExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @templateGetterCallInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST::objectCompare (const GGS_templateGetterCallInExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::
init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                      const GGS_lstring & in_mGetterName,
                      const GGS_templateExpressionListAST & in_mExpressionList,
                      const GGS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateGetterCallInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateGetterCallInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateGetterCallInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mGetterName, in_mExpressionList, in_mExpressionLocation, inCompiler) ;
  const GGS_templateGetterCallInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::
templateGetterCallInExpressionAST_init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                        const GGS_lstring & in_mGetterName,
                                                        const GGS_templateExpressionListAST & in_mExpressionList,
                                                        const GGS_location & in_mExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateGetterCallInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateGetterCallInExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateGetterCallInExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateGetterCallInExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateGetterCallInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GGS_lstring & in_mGetterName,
                                                                                const GGS_templateExpressionListAST & in_mExpressionList,
                                                                                const GGS_location & in_mExpressionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

void cPtr_templateGetterCallInExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@templateGetterCallInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateGetterCallInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mProperty_mReceiverExpression, mProperty_mGetterName, mProperty_mExpressionList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateGetterCallInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateGetterCallInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST result ;
  const GGS_templateGetterCallInExpressionAST * p = (const GGS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST_2E_weak::objectCompare (const GGS_templateGetterCallInExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak::GGS_templateGetterCallInExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak & GGS_templateGetterCallInExpressionAST_2E_weak::operator = (const GGS_templateGetterCallInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak::GGS_templateGetterCallInExpressionAST_2E_weak (const GGS_templateGetterCallInExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak GGS_templateGetterCallInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateGetterCallInExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateGetterCallInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST_2E_weak::bang_templateGetterCallInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateGetterCallInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateGetterCallInExpressionAST) ;
      result = GGS_templateGetterCallInExpressionAST ((cPtr_templateGetterCallInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateGetterCallInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ("templateGetterCallInExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateGetterCallInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateGetterCallInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateGetterCallInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak GGS_templateGetterCallInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST_2E_weak result ;
  const GGS_templateGetterCallInExpressionAST_2E_weak * p = (const GGS_templateGetterCallInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateGetterCallInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (cPtr_templateInstructionAST * inObject,
                                                      const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                      GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const GGS_templateAnalysisContext constin_inAnalysisContext,
                                                      GGS_unifiedTypeMap & io_ioTypeMap,
                                                      GGS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionAST) ;
    inObject->method_templateInstructionAnalysis (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @templateClassFunctionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateClassFunctionAST::objectCompare (const GGS_templateClassFunctionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_lstring & in_mClassFunctionName,
                  const GGS_templateExpressionListAST & in_mExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateClassFunctionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateClassFunctionAST (inCompiler COMMA_THERE)) ;
  object->templateClassFunctionAST_init_21__21__21_ (in_mTypeName, in_mClassFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateClassFunctionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::
templateClassFunctionAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                           const GGS_lstring & in_mClassFunctionName,
                                           const GGS_templateExpressionListAST & in_mExpressionList,
                                           Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (const cPtr_templateClassFunctionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateClassFunctionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mClassFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mClassFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateClassFunctionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateClassFunctionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (const GGS_lstring & in_mTypeName,
                                                              const GGS_lstring & in_mClassFunctionName,
                                                              const GGS_templateExpressionListAST & in_mExpressionList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateClassFunctionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

void cPtr_templateClassFunctionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateClassFunctionAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateClassFunctionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateClassFunctionAST (mProperty_mTypeName, mProperty_mClassFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateClassFunctionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mClassFunctionName.printNonNullClassInstanceProperties ("mClassFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateClassFunctionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateClassFunctionAST ("templateClassFunctionAST",
                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateClassFunctionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateClassFunctionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateClassFunctionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateClassFunctionAST result ;
  const GGS_templateClassFunctionAST * p = (const GGS_templateClassFunctionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateClassFunctionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateClassFunctionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFileWrapperTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFileWrapperTemplateCallAST::objectCompare (const GGS_templateFileWrapperTemplateCallAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::
init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateFileWrapperTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFileWrapperTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateFileWrapperTemplateCallAST_init_21__21__21_ (in_mFileWrapperName, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateFileWrapperTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::
templateFileWrapperTemplateCallAST_init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                                                     const GGS_lstring & in_mTemplateName,
                                                     const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mFileWrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mFileWrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFileWrapperTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFileWrapperTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GGS_lstring & in_mFileWrapperName,
                                                                                  const GGS_lstring & in_mTemplateName,
                                                                                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFileWrapperTemplateCallAST:") ;
  mProperty_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFileWrapperTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mProperty_mFileWrapperName, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFileWrapperTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFileWrapperName.printNonNullClassInstanceProperties ("mFileWrapperName") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFileWrapperTemplateCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateFileWrapperTemplateCallAST result ;
  const GGS_templateFileWrapperTemplateCallAST * p = (const GGS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateExtensionTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateExtensionTemplateCallAST::objectCompare (const GGS_templateExtensionTemplateCallAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateExtensionTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateExtensionTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateExtensionTemplateCallAST_init_21__21__21_ (in_mExpressionValue, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateExtensionTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::
templateExtensionTemplateCallAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                                                   const GGS_lstring & in_mTemplateName,
                                                   const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateExtensionTemplateCallAST::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateExtensionTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExtensionTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateExtensionTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GGS_templateExpressionAST & in_mExpressionValue,
                                                                              const GGS_lstring & in_mTemplateName,
                                                                              const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

void cPtr_templateExtensionTemplateCallAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateExtensionTemplateCallAST:") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateExtensionTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mProperty_mExpressionValue, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateExtensionTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateExtensionTemplateCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateExtensionTemplateCallAST result ;
  const GGS_templateExtensionTemplateCallAST * p = (const GGS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structFieldAccessTemplateExpressionAST::objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mExpression,
                  const GGS_lstring & in_mStructFieldName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structFieldAccessTemplateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structFieldAccessTemplateExpressionAST (inCompiler COMMA_THERE)) ;
  object->structFieldAccessTemplateExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mExpression, in_mStructFieldName, inCompiler) ;
  const GGS_structFieldAccessTemplateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::
structFieldAccessTemplateExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                         const GGS_templateExpressionAST & in_mExpression,
                                                         const GGS_lstring & in_mStructFieldName,
                                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_structFieldAccessTemplateExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_structFieldAccessTemplateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structFieldAccessTemplateExpressionAST::readProperty_mStructFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mStructFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                                          const GGS_templateExpressionAST & in_mExpression,
                                                                                          const GGS_lstring & in_mStructFieldName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@structFieldAccessTemplateExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structFieldAccessTemplateExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structFieldAccessTemplateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mStructFieldName.printNonNullClassInstanceProperties ("mStructFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structFieldAccessTemplateExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_structFieldAccessTemplateExpressionAST result ;
  const GGS_structFieldAccessTemplateExpressionAST * p = (const GGS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateOptionAccessAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateOptionAccessAST::objectCompare (const GGS_templateOptionAccessAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionName,
                  const GGS_lstring & in_mGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateOptionAccessAST * object = nullptr ;
  macroMyNew (object, cPtr_templateOptionAccessAST (inCompiler COMMA_THERE)) ;
  object->templateOptionAccessAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionName, in_mGetterName, inCompiler) ;
  const GGS_templateOptionAccessAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::
templateOptionAccessAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                          const GGS_lstring & in_mOptionName,
                                          const GGS_lstring & in_mGetterName,
                                          Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GGS_lstring & in_mOptionComponentName,
                                                            const GGS_lstring & in_mOptionName,
                                                            const GGS_lstring & in_mGetterName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateOptionAccessAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateOptionAccessAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateOptionAccessAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionName.printNonNullClassInstanceProperties ("mOptionName") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateOptionAccessAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateOptionAccessAST result ;
  const GGS_templateOptionAccessAST * p = (const GGS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateTestDynamicClassAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateTestDynamicClassAST::objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::
init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                      const GGS_location & in_mEndOfReceiverExpression,
                      const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                      const GGS_lstring & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateTestDynamicClassAST * object = nullptr ;
  macroMyNew (object, cPtr_templateTestDynamicClassAST (inCompiler COMMA_THERE)) ;
  object->templateTestDynamicClassAST_init_21__21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName, inCompiler) ;
  const GGS_templateTestDynamicClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::
templateTestDynamicClassAST_init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                  const GGS_location & in_mEndOfReceiverExpression,
                                                  const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                  const GGS_lstring & in_mTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateTestDynamicClassAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateTestDynamicClassAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_templateTestDynamicClassAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateTestDynamicClassAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                                    const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GGS_lstring & in_mTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

void cPtr_templateTestDynamicClassAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateTestDynamicClassAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateTestDynamicClassAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateTestDynamicClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateTestDynamicClassAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateTestDynamicClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateTestDynamicClassAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateTestDynamicClassAST result ;
  const GGS_templateTestDynamicClassAST * p = (const GGS_templateTestDynamicClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateTestDynamicClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFunctionCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFunctionCallAST::objectCompare (const GGS_templateFunctionCallAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_templateExpressionListAST & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateFunctionCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFunctionCallAST (inCompiler COMMA_THERE)) ;
  object->templateFunctionCallAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateFunctionCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::
templateFunctionCallAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                      const GGS_templateExpressionListAST & in_mExpressionList,
                                      Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFunctionCallAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFunctionCallAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                                            const GGS_templateExpressionListAST & in_mExpressionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFunctionCallAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFunctionCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFunctionCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFunctionCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateFunctionCallAST result ;
  const GGS_templateFunctionCallAST * p = (const GGS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateVarInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateVarInExpressionAST::objectCompare (const GGS_templateVarInExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateVarInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateVarInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateVarInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_templateVarInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::
templateVarInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                                     Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateVarInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateVarInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateVarInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateVarInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateVarInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateVarInExpressionAST result ;
  const GGS_templateVarInExpressionAST * p = (const GGS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

static const char * gNonTerminalNames_templateGrammar [50] = {
  "<expression_tpl>",// Index 0
  "<relation_term_tpl>",// Index 1
  "<relation_factor_tpl>",// Index 2
  "<simple_expression_tpl>",// Index 3
  "<term_tpl>",// Index 4
  "<factor_tpl>",// Index 5
  "<primary_tpl>",// Index 6
  "<output_expression_list_tpl>",// Index 7
  "<template_instruction>",// Index 8
  "<template_parser_start_symbol>",// Index 9
  "<for_instruction_element>",// Index 10
  "<for_instruction_enumerated_object>",// Index 11
  "<switch_case>",// Index 12
  "<select_templateSyntax_0>",// Index 13
  "<select_templateSyntax_1>",// Index 14
  "<select_templateSyntax_2>",// Index 15
  "<select_templateSyntax_3>",// Index 16
  "<select_templateSyntax_4>",// Index 17
  "<select_templateSyntax_5>",// Index 18
  "<select_templateSyntax_6>",// Index 19
  "<select_templateSyntax_7>",// Index 20
  "<select_templateSyntax_8>",// Index 21
  "<select_templateSyntax_9>",// Index 22
  "<select_templateSyntax_10>",// Index 23
  "<select_templateSyntax_11>",// Index 24
  "<select_templateSyntax_12>",// Index 25
  "<select_templateSyntax_13>",// Index 26
  "<select_templateSyntax_14>",// Index 27
  "<select_templateSyntax_15>",// Index 28
  "<select_templateSyntax_16>",// Index 29
  "<select_templateSyntax_17>",// Index 30
  "<select_templateSyntax_18>",// Index 31
  "<select_templateSyntax_19>",// Index 32
  "<select_templateSyntax_20>",// Index 33
  "<select_templateSyntax_21>",// Index 34
  "<select_templateSyntax_22>",// Index 35
  "<select_templateSyntax_23>",// Index 36
  "<select_templateSyntax_24>",// Index 37
  "<select_templateSyntax_25>",// Index 38
  "<select_templateSyntax_26>",// Index 39
  "<select_templateSyntax_27>",// Index 40
  "<select_templateSyntax_28>",// Index 41
  "<select_templateSyntax_29>",// Index 42
  "<select_templateSyntax_30>",// Index 43
  "<select_templateSyntax_31>",// Index 44
  "<select_templateSyntax_32>",// Index 45
  "<select_templateSyntax_33>",// Index 46
  "<select_templateSyntax_34>",// Index 47
  "<select_templateSyntax_35>",// Index 48
  "<>"// Index 49
} ;

//--------------------------------------------------------------------------------------------------
//
//                      S L R    A N A L Y Z E R    A C T I O N    T A B L E                        
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions:
//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;
//  - the accept action is (terminal_symbol, ACCEPT);
//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.

static const int32_t gActionTable_templateGrammar [] = {
// State S0 (index = 0)
  Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END
// State S1 (index = 17)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S2 (index = 42)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (22)
, BOTTOM_UP_END
// State S3 (index = 73)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (23)
, BOTTOM_UP_END
// State S4 (index = 104)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S5 (index = 129)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S6 (index = 154)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (32)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_SHIFT (33)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (88)
, BOTTOM_UP_END
// State S7 (index = 161)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S8 (index = 186)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END
// State S9 (index = 203)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S10 (index = 206)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S11 (index = 209)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S12 (index = 234)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (38)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S13 (index = 317)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S14 (index = 342)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S15 (index = 367)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S16 (index = 392)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END
// State S17 (index = 473)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (12)
, BOTTOM_UP_END
// State S18 (index = 554)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END
// State S19 (index = 635)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (14)
, BOTTOM_UP_END
// State S20 (index = 716)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END
// State S21 (index = 797)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S22 (index = 880)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, Lexique_galgasTemplateScanner::kToken_template, BOTTOM_UP_SHIFT (44)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (45)
, Lexique_galgasTemplateScanner::kToken_filewrapper, BOTTOM_UP_SHIFT (46)
, Lexique_galgasTemplateScanner::kToken_option, BOTTOM_UP_SHIFT (47)
, BOTTOM_UP_END
// State S23 (index = 913)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S24 (index = 944)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S25 (index = 993)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_SHIFT (53)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (37)
, BOTTOM_UP_END
// State S26 (index = 1044)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_SHIFT (55)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_SHIFT (56)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_SHIFT (57)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_SHIFT (58)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (59)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_SHIFT (60)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (39)
, BOTTOM_UP_END
// State S27 (index = 1107)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S28 (index = 1178)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S29 (index = 1255)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (71)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_SHIFT (72)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S30 (index = 1336)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (74)
, BOTTOM_UP_END
// State S31 (index = 1339)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (75)
, BOTTOM_UP_END
// State S32 (index = 1342)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (90)
, BOTTOM_UP_END
// State S33 (index = 1345)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (89)
, BOTTOM_UP_END
// State S34 (index = 1348)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S35 (index = 1351)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (107)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
// State S36 (index = 1356)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (83)
, BOTTOM_UP_END
// State S37 (index = 1359)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S38 (index = 1436)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S39 (index = 1445)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S40 (index = 1522)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END
// State S41 (index = 1599)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (84)
, BOTTOM_UP_END
// State S42 (index = 1602)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S43 (index = 1685)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (16)
, BOTTOM_UP_END
// State S44 (index = 1766)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S45 (index = 1791)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (87)
, BOTTOM_UP_END
// State S46 (index = 1794)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (88)
, BOTTOM_UP_END
// State S47 (index = 1797)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (89)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (90)
, BOTTOM_UP_END
// State S48 (index = 1802)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (92)
, BOTTOM_UP_END
// State S49 (index = 1805)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END
// State S50 (index = 1886)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S51 (index = 1911)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S52 (index = 1936)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S53 (index = 1981)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S54 (index = 2006)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S55 (index = 2055)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S56 (index = 2080)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S57 (index = 2105)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S58 (index = 2130)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S59 (index = 2155)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S60 (index = 2180)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S61 (index = 2205)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S62 (index = 2256)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S63 (index = 2281)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S64 (index = 2306)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S65 (index = 2331)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S66 (index = 2356)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S67 (index = 2419)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S68 (index = 2444)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S69 (index = 2469)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S70 (index = 2494)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S71 (index = 2565)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (109)
, BOTTOM_UP_END
// State S72 (index = 2568)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_SHIFT (110)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_SHIFT (111)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END
// State S73 (index = 2575)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S74 (index = 2652)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (72)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S75 (index = 2669)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S76 (index = 2690)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (120)
, BOTTOM_UP_END
// State S77 (index = 2697)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_SHIFT (122)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (91)
, BOTTOM_UP_END
// State S78 (index = 2702)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (124)
, BOTTOM_UP_END
// State S79 (index = 2705)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (126)
, BOTTOM_UP_END
// State S80 (index = 2708)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S81 (index = 2733)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S82 (index = 2758)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (129)
, BOTTOM_UP_END
// State S83 (index = 2761)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
// State S84 (index = 2766)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END
// State S85 (index = 2847)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (58)
, BOTTOM_UP_END
// State S86 (index = 2928)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (130)
, BOTTOM_UP_END
// State S87 (index = 2931)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S88 (index = 2940)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (132)
, BOTTOM_UP_END
// State S89 (index = 2943)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (133)
, BOTTOM_UP_END
// State S90 (index = 2946)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (134)
, BOTTOM_UP_END
// State S91 (index = 2949)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (135)
, BOTTOM_UP_END
// State S92 (index = 2952)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S93 (index = 2961)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S94 (index = 3010)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S95 (index = 3059)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_SHIFT (53)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (37)
, BOTTOM_UP_END
// State S96 (index = 3110)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (40)
, BOTTOM_UP_END
// State S97 (index = 3161)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (41)
, BOTTOM_UP_END
// State S98 (index = 3212)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (42)
, BOTTOM_UP_END
// State S99 (index = 3263)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S100 (index = 3314)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (44)
, BOTTOM_UP_END
// State S101 (index = 3365)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (45)
, BOTTOM_UP_END
// State S102 (index = 3416)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S103 (index = 3487)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S104 (index = 3558)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S105 (index = 3629)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S106 (index = 3700)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S107 (index = 3777)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S108 (index = 3854)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S109 (index = 3931)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (71)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S110 (index = 4010)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (66)
, BOTTOM_UP_END
// State S111 (index = 4013)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (67)
, BOTTOM_UP_END
// State S112 (index = 4016)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (68)
, BOTTOM_UP_END
// State S113 (index = 4019)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (148)
, BOTTOM_UP_END
// State S114 (index = 4022)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (72)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S115 (index = 4039)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (150)
, BOTTOM_UP_END
// State S116 (index = 4042)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S117 (index = 4063)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (74)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (152)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END
// State S118 (index = 4070)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END
// State S119 (index = 4079)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (29)
, BOTTOM_UP_END
// State S120 (index = 4088)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (154)
, BOTTOM_UP_END
// State S121 (index = 4091)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (84)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (120)
, BOTTOM_UP_END
// State S122 (index = 4100)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (93)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S123 (index = 4117)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_SHIFT (159)
, BOTTOM_UP_END
// State S124 (index = 4120)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (160)
, BOTTOM_UP_END
// State S125 (index = 4127)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (162)
, BOTTOM_UP_END
// State S126 (index = 4130)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (32)
, BOTTOM_UP_END
// State S127 (index = 4161)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S128 (index = 4170)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S129 (index = 4179)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S130 (index = 4260)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S131 (index = 4269)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (166)
, BOTTOM_UP_END
// State S132 (index = 4272)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (167)
, BOTTOM_UP_END
// State S133 (index = 4275)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (168)
, BOTTOM_UP_END
// State S134 (index = 4278)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (169)
, BOTTOM_UP_END
// State S135 (index = 4281)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END
// State S136 (index = 4362)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (170)
, BOTTOM_UP_END
// State S137 (index = 4365)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END
// State S138 (index = 4410)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (36)
, BOTTOM_UP_END
// State S139 (index = 4455)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (38)
, BOTTOM_UP_END
// State S140 (index = 4504)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (47)
, BOTTOM_UP_END
// State S141 (index = 4567)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (48)
, BOTTOM_UP_END
// State S142 (index = 4630)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (49)
, BOTTOM_UP_END
// State S143 (index = 4693)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (50)
, BOTTOM_UP_END
// State S144 (index = 4756)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (52)
, BOTTOM_UP_END
// State S145 (index = 4827)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END
// State S146 (index = 4898)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S147 (index = 4969)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (56)
, BOTTOM_UP_END
// State S148 (index = 5046)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END
// State S149 (index = 5127)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (73)
, BOTTOM_UP_END
// State S150 (index = 5130)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (24)
, BOTTOM_UP_END
// State S151 (index = 5161)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (77)
, BOTTOM_UP_END
// State S152 (index = 5168)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S153 (index = 5193)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (78)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_SHIFT (172)
, BOTTOM_UP_END
// State S154 (index = 5198)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END
// State S155 (index = 5207)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (84)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (120)
, BOTTOM_UP_END
// State S156 (index = 5216)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (175)
, BOTTOM_UP_END
// State S157 (index = 5219)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (93)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S158 (index = 5236)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (92)
, BOTTOM_UP_END
// State S159 (index = 5239)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (177)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (95)
, BOTTOM_UP_END
// State S160 (index = 5262)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (179)
, BOTTOM_UP_END
// State S161 (index = 5265)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (180)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (113)
, BOTTOM_UP_END
// State S162 (index = 5270)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (109)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END
// State S163 (index = 5289)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, BOTTOM_UP_END
// State S164 (index = 5294)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (71)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (71)
, BOTTOM_UP_END
// State S165 (index = 5299)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (184)
, BOTTOM_UP_END
// State S166 (index = 5302)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (60)
, BOTTOM_UP_END
// State S167 (index = 5383)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S168 (index = 5392)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END
// State S169 (index = 5395)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (186)
, BOTTOM_UP_END
// State S170 (index = 5398)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (62)
, BOTTOM_UP_END
// State S171 (index = 5479)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (187)
, BOTTOM_UP_END
// State S172 (index = 5482)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (80)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S173 (index = 5499)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (190)
, BOTTOM_UP_END
// State S174 (index = 5502)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (85)
, BOTTOM_UP_END
// State S175 (index = 5505)
, Lexique_galgasTemplateScanner::kToken_in, BOTTOM_UP_SHIFT (191)
, BOTTOM_UP_END
// State S176 (index = 5508)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (94)
, BOTTOM_UP_END
// State S177 (index = 5511)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (192)
, BOTTOM_UP_END
// State S178 (index = 5514)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S179 (index = 5535)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (160)
, BOTTOM_UP_END
// State S180 (index = 5542)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (196)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (197)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (198)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S181 (index = 5553)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END
// State S182 (index = 5556)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (109)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END
// State S183 (index = 5575)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (107)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
// State S184 (index = 5580)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (59)
, BOTTOM_UP_END
// State S185 (index = 5661)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (203)
, BOTTOM_UP_END
// State S186 (index = 5664)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (65)
, BOTTOM_UP_END
// State S187 (index = 5667)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S188 (index = 5688)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (80)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S189 (index = 5705)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (79)
, BOTTOM_UP_END
// State S190 (index = 5708)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (25)
, BOTTOM_UP_END
// State S191 (index = 5739)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S192 (index = 5764)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (207)
, BOTTOM_UP_END
// State S193 (index = 5767)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S194 (index = 5788)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_SHIFT (209)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (99)
, BOTTOM_UP_END
// State S195 (index = 5795)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (112)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (112)
, BOTTOM_UP_END
// State S196 (index = 5800)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (118)
, BOTTOM_UP_END
// State S197 (index = 5813)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (211)
, BOTTOM_UP_END
// State S198 (index = 5816)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (120)
, BOTTOM_UP_END
// State S199 (index = 5821)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (196)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (115)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (197)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (198)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S200 (index = 5834)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_SHIFT (214)
, BOTTOM_UP_END
// State S201 (index = 5839)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (110)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (110)
, BOTTOM_UP_END
// State S202 (index = 5844)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (108)
, BOTTOM_UP_END
// State S203 (index = 5847)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (61)
, BOTTOM_UP_END
// State S204 (index = 5928)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (74)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (152)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END
// State S205 (index = 5935)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (81)
, BOTTOM_UP_END
// State S206 (index = 5938)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (217)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (86)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (86)
, BOTTOM_UP_END
// State S207 (index = 5945)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (96)
, BOTTOM_UP_END
// State S208 (index = 5966)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (98)
, BOTTOM_UP_END
// State S209 (index = 5973)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S210 (index = 5992)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (103)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_SHIFT (221)
, BOTTOM_UP_END
// State S211 (index = 5997)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (117)
, BOTTOM_UP_END
// State S212 (index = 6010)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (223)
, BOTTOM_UP_END
// State S213 (index = 6013)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (196)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (115)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (197)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (198)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S214 (index = 6026)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (123)
, BOTTOM_UP_END
// State S215 (index = 6029)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (225)
, BOTTOM_UP_END
// State S216 (index = 6032)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (75)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END
// State S217 (index = 6037)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (226)
, BOTTOM_UP_END
// State S218 (index = 6040)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (30)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END
// State S219 (index = 6045)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S220 (index = 6064)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (100)
, BOTTOM_UP_END
// State S221 (index = 6069)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (105)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S222 (index = 6086)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (230)
, BOTTOM_UP_END
// State S223 (index = 6089)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (114)
, BOTTOM_UP_END
// State S224 (index = 6092)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (116)
, BOTTOM_UP_END
// State S225 (index = 6095)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (119)
, BOTTOM_UP_END
// State S226 (index = 6108)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (87)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (87)
, BOTTOM_UP_END
// State S227 (index = 6113)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (102)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (102)
, BOTTOM_UP_END
// State S228 (index = 6118)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (105)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S229 (index = 6135)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (104)
, BOTTOM_UP_END
// State S230 (index = 6138)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END
// State S231 (index = 6169)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (106)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_templateGrammar [232] = {
  0  // S0
, 17  // S1
, 42  // S2
, 73  // S3
, 104  // S4
, 129  // S5
, 154  // S6
, 161  // S7
, 186  // S8
, 203  // S9
, 206  // S10
, 209  // S11
, 234  // S12
, 317  // S13
, 342  // S14
, 367  // S15
, 392  // S16
, 473  // S17
, 554  // S18
, 635  // S19
, 716  // S20
, 797  // S21
, 880  // S22
, 913  // S23
, 944  // S24
, 993  // S25
, 1044  // S26
, 1107  // S27
, 1178  // S28
, 1255  // S29
, 1336  // S30
, 1339  // S31
, 1342  // S32
, 1345  // S33
, 1348  // S34
, 1351  // S35
, 1356  // S36
, 1359  // S37
, 1436  // S38
, 1445  // S39
, 1522  // S40
, 1599  // S41
, 1602  // S42
, 1685  // S43
, 1766  // S44
, 1791  // S45
, 1794  // S46
, 1797  // S47
, 1802  // S48
, 1805  // S49
, 1886  // S50
, 1911  // S51
, 1936  // S52
, 1981  // S53
, 2006  // S54
, 2055  // S55
, 2080  // S56
, 2105  // S57
, 2130  // S58
, 2155  // S59
, 2180  // S60
, 2205  // S61
, 2256  // S62
, 2281  // S63
, 2306  // S64
, 2331  // S65
, 2356  // S66
, 2419  // S67
, 2444  // S68
, 2469  // S69
, 2494  // S70
, 2565  // S71
, 2568  // S72
, 2575  // S73
, 2652  // S74
, 2669  // S75
, 2690  // S76
, 2697  // S77
, 2702  // S78
, 2705  // S79
, 2708  // S80
, 2733  // S81
, 2758  // S82
, 2761  // S83
, 2766  // S84
, 2847  // S85
, 2928  // S86
, 2931  // S87
, 2940  // S88
, 2943  // S89
, 2946  // S90
, 2949  // S91
, 2952  // S92
, 2961  // S93
, 3010  // S94
, 3059  // S95
, 3110  // S96
, 3161  // S97
, 3212  // S98
, 3263  // S99
, 3314  // S100
, 3365  // S101
, 3416  // S102
, 3487  // S103
, 3558  // S104
, 3629  // S105
, 3700  // S106
, 3777  // S107
, 3854  // S108
, 3931  // S109
, 4010  // S110
, 4013  // S111
, 4016  // S112
, 4019  // S113
, 4022  // S114
, 4039  // S115
, 4042  // S116
, 4063  // S117
, 4070  // S118
, 4079  // S119
, 4088  // S120
, 4091  // S121
, 4100  // S122
, 4117  // S123
, 4120  // S124
, 4127  // S125
, 4130  // S126
, 4161  // S127
, 4170  // S128
, 4179  // S129
, 4260  // S130
, 4269  // S131
, 4272  // S132
, 4275  // S133
, 4278  // S134
, 4281  // S135
, 4362  // S136
, 4365  // S137
, 4410  // S138
, 4455  // S139
, 4504  // S140
, 4567  // S141
, 4630  // S142
, 4693  // S143
, 4756  // S144
, 4827  // S145
, 4898  // S146
, 4969  // S147
, 5046  // S148
, 5127  // S149
, 5130  // S150
, 5161  // S151
, 5168  // S152
, 5193  // S153
, 5198  // S154
, 5207  // S155
, 5216  // S156
, 5219  // S157
, 5236  // S158
, 5239  // S159
, 5262  // S160
, 5265  // S161
, 5270  // S162
, 5289  // S163
, 5294  // S164
, 5299  // S165
, 5302  // S166
, 5383  // S167
, 5392  // S168
, 5395  // S169
, 5398  // S170
, 5479  // S171
, 5482  // S172
, 5499  // S173
, 5502  // S174
, 5505  // S175
, 5508  // S176
, 5511  // S177
, 5514  // S178
, 5535  // S179
, 5542  // S180
, 5553  // S181
, 5556  // S182
, 5575  // S183
, 5580  // S184
, 5661  // S185
, 5664  // S186
, 5667  // S187
, 5688  // S188
, 5705  // S189
, 5708  // S190
, 5739  // S191
, 5764  // S192
, 5767  // S193
, 5788  // S194
, 5795  // S195
, 5800  // S196
, 5813  // S197
, 5816  // S198
, 5821  // S199
, 5834  // S200
, 5839  // S201
, 5844  // S202
, 5847  // S203
, 5928  // S204
, 5935  // S205
, 5938  // S206
, 5945  // S207
, 5966  // S208
, 5973  // S209
, 5992  // S210
, 5997  // S211
, 6010  // S212
, 6013  // S213
, 6026  // S214
, 6029  // S215
, 6032  // S216
, 6037  // S217
, 6040  // S218
, 6045  // S219
, 6064  // S220
, 6069  // S221
, 6086  // S222
, 6089  // S223
, 6092  // S224
, 6095  // S225
, 6108  // S226
, 6113  // S227
, 6118  // S228
, 6135  // S229
, 6138  // S230
, 6169  // S231
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_templateGrammar_0 [7] = {8, 8,
  9, 9,
  29, 10, -1} ;

static const int32_t gSuccessorTable_templateGrammar_1 [15] = {0, 23,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_4 [15] = {0, 30,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_5 [15] = {0, 31,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_6 [3] = {32, 34, -1} ;

static const int32_t gSuccessorTable_templateGrammar_7 [15] = {0, 35,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_8 [5] = {8, 8,
  29, 36, -1} ;

static const int32_t gSuccessorTable_templateGrammar_11 [5] = {5, 37,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_13 [5] = {5, 39,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_14 [5] = {5, 40,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_15 [15] = {0, 41,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_21 [3] = {19, 43, -1} ;

static const int32_t gSuccessorTable_templateGrammar_22 [17] = {0, 48,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29,
  20, 49, -1} ;

static const int32_t gSuccessorTable_templateGrammar_24 [3] = {13, 52, -1} ;

static const int32_t gSuccessorTable_templateGrammar_25 [3] = {14, 54, -1} ;

static const int32_t gSuccessorTable_templateGrammar_26 [3] = {15, 61, -1} ;

static const int32_t gSuccessorTable_templateGrammar_27 [3] = {16, 66, -1} ;

static const int32_t gSuccessorTable_templateGrammar_28 [3] = {17, 70, -1} ;

static const int32_t gSuccessorTable_templateGrammar_29 [3] = {18, 73, -1} ;

static const int32_t gSuccessorTable_templateGrammar_34 [3] = {11, 77, -1} ;

static const int32_t gSuccessorTable_templateGrammar_35 [3] = {41, 79, -1} ;

static const int32_t gSuccessorTable_templateGrammar_38 [5] = {7, 82,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_42 [3] = {19, 85, -1} ;

static const int32_t gSuccessorTable_templateGrammar_44 [15] = {0, 86,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_47 [3] = {21, 91, -1} ;

static const int32_t gSuccessorTable_templateGrammar_50 [13] = {1, 93,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_51 [13] = {1, 94,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_53 [11] = {2, 95,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_55 [9] = {3, 96,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_56 [9] = {3, 97,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_57 [9] = {3, 98,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_58 [9] = {3, 99,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_59 [9] = {3, 100,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_60 [9] = {3, 101,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_62 [7] = {4, 102,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_63 [7] = {4, 103,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_64 [7] = {4, 104,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_65 [7] = {4, 105,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_67 [5] = {5, 106,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_68 [5] = {5, 107,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_69 [5] = {5, 108,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_72 [3] = {22, 113, -1} ;

static const int32_t gSuccessorTable_templateGrammar_74 [5] = {8, 114,
  24, 115, -1} ;

static const int32_t gSuccessorTable_templateGrammar_75 [5] = {8, 116,
  26, 117, -1} ;

static const int32_t gSuccessorTable_templateGrammar_76 [3] = {10, 121, -1} ;

static const int32_t gSuccessorTable_templateGrammar_77 [3] = {33, 123, -1} ;

static const int32_t gSuccessorTable_templateGrammar_78 [3] = {12, 125, -1} ;

static const int32_t gSuccessorTable_templateGrammar_80 [15] = {0, 127,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_81 [15] = {0, 128,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_87 [5] = {7, 131,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_92 [5] = {7, 136,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_93 [3] = {13, 137, -1} ;

static const int32_t gSuccessorTable_templateGrammar_94 [3] = {13, 138, -1} ;

static const int32_t gSuccessorTable_templateGrammar_95 [3] = {14, 139, -1} ;

static const int32_t gSuccessorTable_templateGrammar_102 [3] = {16, 140, -1} ;

static const int32_t gSuccessorTable_templateGrammar_103 [3] = {16, 141, -1} ;

static const int32_t gSuccessorTable_templateGrammar_104 [3] = {16, 142, -1} ;

static const int32_t gSuccessorTable_templateGrammar_105 [3] = {16, 143, -1} ;

static const int32_t gSuccessorTable_templateGrammar_106 [3] = {17, 144, -1} ;

static const int32_t gSuccessorTable_templateGrammar_107 [3] = {17, 145, -1} ;

static const int32_t gSuccessorTable_templateGrammar_108 [3] = {17, 146, -1} ;

static const int32_t gSuccessorTable_templateGrammar_109 [3] = {18, 147, -1} ;

static const int32_t gSuccessorTable_templateGrammar_114 [5] = {8, 114,
  24, 149, -1} ;

static const int32_t gSuccessorTable_templateGrammar_116 [5] = {8, 116,
  26, 151, -1} ;

static const int32_t gSuccessorTable_templateGrammar_117 [3] = {25, 153, -1} ;

static const int32_t gSuccessorTable_templateGrammar_121 [5] = {10, 155,
  30, 156, -1} ;

static const int32_t gSuccessorTable_templateGrammar_122 [5] = {8, 157,
  34, 158, -1} ;

static const int32_t gSuccessorTable_templateGrammar_124 [3] = {43, 161, -1} ;

static const int32_t gSuccessorTable_templateGrammar_127 [3] = {23, 163, -1} ;

static const int32_t gSuccessorTable_templateGrammar_128 [3] = {23, 164, -1} ;

static const int32_t gSuccessorTable_templateGrammar_130 [5] = {7, 165,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_152 [15] = {0, 171,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_153 [3] = {27, 173, -1} ;

static const int32_t gSuccessorTable_templateGrammar_155 [5] = {10, 155,
  30, 174, -1} ;

static const int32_t gSuccessorTable_templateGrammar_157 [5] = {8, 157,
  34, 176, -1} ;

static const int32_t gSuccessorTable_templateGrammar_159 [3] = {35, 178, -1} ;

static const int32_t gSuccessorTable_templateGrammar_161 [3] = {44, 181, -1} ;

static const int32_t gSuccessorTable_templateGrammar_162 [5] = {8, 182,
  42, 183, -1} ;

static const int32_t gSuccessorTable_templateGrammar_167 [5] = {7, 185,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_172 [5] = {8, 188,
  28, 189, -1} ;

static const int32_t gSuccessorTable_templateGrammar_178 [5] = {8, 193,
  36, 194, -1} ;

static const int32_t gSuccessorTable_templateGrammar_179 [3] = {43, 195, -1} ;

static const int32_t gSuccessorTable_templateGrammar_180 [5] = {46, 199,
  47, 200, -1} ;

static const int32_t gSuccessorTable_templateGrammar_182 [5] = {8, 182,
  42, 201, -1} ;

static const int32_t gSuccessorTable_templateGrammar_183 [3] = {41, 202, -1} ;

static const int32_t gSuccessorTable_templateGrammar_187 [5] = {8, 116,
  26, 204, -1} ;

static const int32_t gSuccessorTable_templateGrammar_188 [5] = {8, 188,
  28, 205, -1} ;

static const int32_t gSuccessorTable_templateGrammar_191 [15] = {0, 206,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_193 [5] = {8, 193,
  36, 208, -1} ;

static const int32_t gSuccessorTable_templateGrammar_194 [3] = {37, 210, -1} ;

static const int32_t gSuccessorTable_templateGrammar_199 [7] = {45, 212,
  46, 213,
  47, 200, -1} ;

static const int32_t gSuccessorTable_templateGrammar_200 [3] = {48, 215, -1} ;

static const int32_t gSuccessorTable_templateGrammar_204 [3] = {25, 216, -1} ;

static const int32_t gSuccessorTable_templateGrammar_206 [3] = {31, 218, -1} ;

static const int32_t gSuccessorTable_templateGrammar_209 [5] = {8, 219,
  38, 220, -1} ;

static const int32_t gSuccessorTable_templateGrammar_210 [3] = {39, 222, -1} ;

static const int32_t gSuccessorTable_templateGrammar_213 [7] = {45, 224,
  46, 213,
  47, 200, -1} ;

static const int32_t gSuccessorTable_templateGrammar_219 [5] = {8, 219,
  38, 227, -1} ;

static const int32_t gSuccessorTable_templateGrammar_221 [5] = {8, 228,
  40, 229, -1} ;

static const int32_t gSuccessorTable_templateGrammar_228 [5] = {8, 228,
  40, 231, -1} ;

static const int32_t * gSuccessorTable_templateGrammar [232] = {
gSuccessorTable_templateGrammar_0, gSuccessorTable_templateGrammar_1, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_4, gSuccessorTable_templateGrammar_5, gSuccessorTable_templateGrammar_6, gSuccessorTable_templateGrammar_7, 
  gSuccessorTable_templateGrammar_8, nullptr, nullptr, gSuccessorTable_templateGrammar_11, 
  nullptr, gSuccessorTable_templateGrammar_13, gSuccessorTable_templateGrammar_14, gSuccessorTable_templateGrammar_15, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_21, gSuccessorTable_templateGrammar_22, nullptr, 
  gSuccessorTable_templateGrammar_24, gSuccessorTable_templateGrammar_25, gSuccessorTable_templateGrammar_26, gSuccessorTable_templateGrammar_27, 
  gSuccessorTable_templateGrammar_28, gSuccessorTable_templateGrammar_29, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_34, gSuccessorTable_templateGrammar_35, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_38, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_42, nullptr, 
  gSuccessorTable_templateGrammar_44, nullptr, nullptr, gSuccessorTable_templateGrammar_47, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_50, gSuccessorTable_templateGrammar_51, 
  nullptr, gSuccessorTable_templateGrammar_53, nullptr, gSuccessorTable_templateGrammar_55, 
  gSuccessorTable_templateGrammar_56, gSuccessorTable_templateGrammar_57, gSuccessorTable_templateGrammar_58, gSuccessorTable_templateGrammar_59, 
  gSuccessorTable_templateGrammar_60, nullptr, gSuccessorTable_templateGrammar_62, gSuccessorTable_templateGrammar_63, 
  gSuccessorTable_templateGrammar_64, gSuccessorTable_templateGrammar_65, nullptr, gSuccessorTable_templateGrammar_67, 
  gSuccessorTable_templateGrammar_68, gSuccessorTable_templateGrammar_69, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_72, nullptr, gSuccessorTable_templateGrammar_74, gSuccessorTable_templateGrammar_75, 
  gSuccessorTable_templateGrammar_76, gSuccessorTable_templateGrammar_77, gSuccessorTable_templateGrammar_78, nullptr, 
  gSuccessorTable_templateGrammar_80, gSuccessorTable_templateGrammar_81, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_87, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_92, gSuccessorTable_templateGrammar_93, gSuccessorTable_templateGrammar_94, gSuccessorTable_templateGrammar_95, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_102, gSuccessorTable_templateGrammar_103, 
  gSuccessorTable_templateGrammar_104, gSuccessorTable_templateGrammar_105, gSuccessorTable_templateGrammar_106, gSuccessorTable_templateGrammar_107, 
  gSuccessorTable_templateGrammar_108, gSuccessorTable_templateGrammar_109, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_114, nullptr, 
  gSuccessorTable_templateGrammar_116, gSuccessorTable_templateGrammar_117, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_121, gSuccessorTable_templateGrammar_122, nullptr, 
  gSuccessorTable_templateGrammar_124, nullptr, nullptr, gSuccessorTable_templateGrammar_127, 
  gSuccessorTable_templateGrammar_128, nullptr, gSuccessorTable_templateGrammar_130, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_152, gSuccessorTable_templateGrammar_153, nullptr, gSuccessorTable_templateGrammar_155, 
  nullptr, gSuccessorTable_templateGrammar_157, nullptr, gSuccessorTable_templateGrammar_159, 
  nullptr, gSuccessorTable_templateGrammar_161, gSuccessorTable_templateGrammar_162, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_167, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_172, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_178, gSuccessorTable_templateGrammar_179, 
  gSuccessorTable_templateGrammar_180, nullptr, gSuccessorTable_templateGrammar_182, gSuccessorTable_templateGrammar_183, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_187, 
  gSuccessorTable_templateGrammar_188, nullptr, nullptr, gSuccessorTable_templateGrammar_191, 
  nullptr, gSuccessorTable_templateGrammar_193, gSuccessorTable_templateGrammar_194, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_199, 
  gSuccessorTable_templateGrammar_200, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_204, nullptr, gSuccessorTable_templateGrammar_206, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_209, gSuccessorTable_templateGrammar_210, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_213, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_219, 
  nullptr, gSuccessorTable_templateGrammar_221, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_228, nullptr, nullptr, nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_templateGrammar [125 * 2] = {
  0, 2,
  1, 2,
  2, 2,
  3, 2,
  4, 2,
  5, 2,
  5, 2,
  5, 2,
  5, 2,
  6, 1,
  6, 3,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 2,
  6, 2,
  6, 4,
  6, 4,
  7, 1,
  8, 2,
  8, 1,
  8, 1,
  8, 5,
  8, 7,
  9, 1,
  10, 2,
  10, 1,
  10, 1,
  11, 7,
  8, 10,
  8, 4,
  12, 3,
  13, 0,
  13, 3,
  13, 3,
  14, 0,
  14, 3,
  15, 0,
  15, 2,
  15, 2,
  15, 2,
  15, 2,
  15, 2,
  15, 2,
  16, 0,
  16, 3,
  16, 3,
  16, 3,
  16, 3,
  17, 0,
  17, 3,
  17, 3,
  17, 3,
  18, 0,
  18, 3,
  19, 0,
  19, 2,
  20, 5,
  20, 4,
  20, 6,
  20, 4,
  20, 3,
  21, 3,
  21, 4,
  22, 1,
  22, 1,
  22, 1,
  23, 0,
  23, 3,
  23, 3,
  24, 0,
  24, 2,
  25, 0,
  25, 5,
  26, 0,
  26, 2,
  27, 0,
  27, 2,
  28, 0,
  28, 2,
  29, 0,
  29, 2,
  30, 0,
  30, 2,
  31, 0,
  31, 2,
  32, 0,
  32, 1,
  32, 1,
  33, 0,
  33, 2,
  34, 0,
  34, 2,
  35, 0,
  35, 3,
  36, 0,
  36, 2,
  37, 0,
  37, 2,
  38, 0,
  38, 2,
  39, 0,
  39, 2,
  40, 0,
  40, 2,
  41, 0,
  41, 5,
  42, 0,
  42, 2,
  43, 0,
  43, 3,
  44, 0,
  44, 4,
  45, 0,
  45, 2,
  46, 2,
  46, 1,
  46, 3,
  47, 1,
  47, 0,
  48, 0,
  48, 1,
  49, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                          'expression_tpl' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_expression_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'relation_term_tpl' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'relation_factor_tpl' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'simple_expression_tpl' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                             'term_tpl' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_term_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'factor_tpl' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_5F_tpl_i5_parse(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_5F_tpl_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_5F_tpl_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_5F_tpl_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_5F_tpl_i5_indexing(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_5F_tpl_i6_indexing(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_5F_tpl_i7_indexing(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_5F_tpl_i8_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_5F_tpl_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_5F_tpl_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_5F_tpl_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_5F_tpl_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                           'primary_tpl' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_primary_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_5F_tpl_i9_parse(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_5F_tpl_i10_parse(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_5F_tpl_i11_parse(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_5F_tpl_i12_parse(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_5F_tpl_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_5F_tpl_i14_parse(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_5F_tpl_i15_parse(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_5F_tpl_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_5F_tpl_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_5F_tpl_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_5F_tpl_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_5F_tpl_i9_indexing(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_5F_tpl_i10_indexing(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_5F_tpl_i11_indexing(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_5F_tpl_i12_indexing(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_5F_tpl_i13_indexing(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_5F_tpl_i14_indexing(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_5F_tpl_i15_indexing(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_5F_tpl_i16_indexing(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_5F_tpl_i17_indexing(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_5F_tpl_i18_indexing(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_5F_tpl_i19_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_5F_tpl_i9_(parameter_1, inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_5F_tpl_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_5F_tpl_i11_(parameter_1, inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_5F_tpl_i12_(parameter_1, inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_5F_tpl_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_5F_tpl_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_5F_tpl_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_5F_tpl_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_5F_tpl_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_5F_tpl_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_5F_tpl_i19_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'output_expression_list_tpl' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_ (GGS_templateExpressionListAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'template_instruction' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_template_5F_instruction_parse (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_templateSyntax_template_5F_instruction_i21_parse(inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_template_5F_instruction_i22_parse(inLexique) ;
    break ;
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_parse(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_template_5F_instruction_i31_parse(inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_templateSyntax_template_5F_instruction_i21_indexing(inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_template_5F_instruction_i22_indexing(inLexique) ;
    break ;
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_indexing(inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_indexing(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_indexing(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_template_5F_instruction_i31_indexing(inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_ (GGS_templateInstructionListAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_templateSyntax_template_5F_instruction_i21_(parameter_1, inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_template_5F_instruction_i22_(parameter_1, inLexique) ;
    break ;
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_(parameter_1, inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_template_5F_instruction_i31_(parameter_1, inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   'template_parser_start_symbol' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GGS_templateInstructionListAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                     gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                     gProductionsTable_templateGrammar) ;
    if (ok) {
      cGrammar_templateGrammar grammar ;
      grammar.nt_template_5F_parser_5F_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                     gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                     gProductionsTable_templateGrammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_templateInstructionListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_galgasTemplateScanner * scanner = nullptr ;
      macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                         gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                         gProductionsTable_templateGrammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_templateGrammar grammar ;
          grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_templateInstructionListAST &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_galgasTemplateScanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                       gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                       gProductionsTable_templateGrammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_templateGrammar grammar ;
        grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'for_instruction_element' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_parse (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_templateSyntax_for_5F_instruction_5F_element_i27_parse(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_for_5F_instruction_5F_element_i28_parse(inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_for_5F_instruction_5F_element_i29_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing(inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_ (GGS_lstringlist &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_templateSyntax_for_5F_instruction_5F_element_i27_(parameter_1, inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_for_5F_instruction_5F_element_i28_(parameter_1, inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_for_5F_instruction_5F_element_i29_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                'for_instruction_enumerated_object' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_lstringlist &  parameter_1,
                                GGS_location &  parameter_2,
                                GGS_templateExpressionAST &  parameter_3,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_(parameter_1, parameter_2, parameter_3, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                           'switch_case' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_switch_5F_case_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 33) {
  rule_templateSyntax_switch_5F_case_i33_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 33) {
  rule_templateSyntax_switch_5F_case_i33_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_ (GGS__5B_lstring_5D_ &  parameter_1,
                                GGS_switchExtractedValuesListAST &  parameter_2,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 33) {
  rule_templateSyntax_switch_5F_case_i33_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_0' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_0 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  34 35 36
  return inLexique->nextProductionIndex () - 33 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_1' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  37 38
  return inLexique->nextProductionIndex () - 36 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_2' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  39 40 41 42 43 44 45
  return inLexique->nextProductionIndex () - 38 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_3' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  46 47 48 49 50
  return inLexique->nextProductionIndex () - 45 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_4' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  51 52 53 54
  return inLexique->nextProductionIndex () - 50 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_5' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  55 56
  return inLexique->nextProductionIndex () - 54 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_6' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_7' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  59 60 61 62 63
  return inLexique->nextProductionIndex () - 58 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_8' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  64 65
  return inLexique->nextProductionIndex () - 63 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_9' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  66 67 68
  return inLexique->nextProductionIndex () - 65 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_10' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  69 70 71
  return inLexique->nextProductionIndex () - 68 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_11' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  72 73
  return inLexique->nextProductionIndex () - 71 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_12' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  74 75
  return inLexique->nextProductionIndex () - 73 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_13' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  76 77
  return inLexique->nextProductionIndex () - 75 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_14' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  78 79
  return inLexique->nextProductionIndex () - 77 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_15' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  80 81
  return inLexique->nextProductionIndex () - 79 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_16' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  82 83
  return inLexique->nextProductionIndex () - 81 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_17' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  84 85
  return inLexique->nextProductionIndex () - 83 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_18' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  86 87
  return inLexique->nextProductionIndex () - 85 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_19' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  88 89 90
  return inLexique->nextProductionIndex () - 87 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_20' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_21' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_22' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_23' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_24' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_25' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_26' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_27' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_28' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  107 108
  return inLexique->nextProductionIndex () - 106 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_29' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_29 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  109 110
  return inLexique->nextProductionIndex () - 108 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_30' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_30 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  111 112
  return inLexique->nextProductionIndex () - 110 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_31' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_31 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  113 114
  return inLexique->nextProductionIndex () - 112 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_32' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_32 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  115 116
  return inLexique->nextProductionIndex () - 114 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_33' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_33 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  117 118 119
  return inLexique->nextProductionIndex () - 116 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_34' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_34 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  120 121
  return inLexique->nextProductionIndex () - 119 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_35' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_35 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//--------------------------------------------------------------------------------------------------

